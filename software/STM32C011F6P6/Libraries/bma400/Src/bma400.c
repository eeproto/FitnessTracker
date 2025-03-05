#include "bma400.h"
#include "stdio.h"

uint8_t MPU_Init(void) {
	uint8_t res;
	extern I2C_HandleTypeDef hi2c1;
	HAL_I2C_Init(&hi2c1);
	MPU_Write_Byte(BMA400_REG_COMMAND, 0XB6);
	HAL_Delay(5);

	res = MPU_Read_Byte(BMA400_REG_CHIP_ID);
	printf("BMA400 chip id: 0x%2x\r\n", res);
	if (res == BMA400_CHIP_ID) {
		printf("BMA400 up\r\n");

		res = MPU_Check_State();
		printf("BMA400 State:0x%2x\r\n", res);

		if ((res >> 1 & 0x03) == 0x00) {
			printf("Switch to normal mode\r\n");
			MPU_Write_Byte(BMA400_REG_ACCEL_CONFIG_0, 0x02);
			HAL_Delay(10);
			MPU_Write_Byte(BMA400_REG_ACCEL_CONFIG_1, 0x38);
			MPU_Write_Byte(BMA400_REG_ACCEL_CONFIG_2, 0x04);
			MPU_Write_Byte(BMA400_REG_INT_CONF_0, 0x80);
			MPU_Write_Byte(BMA400_REG_INT_MAP, 0x80);
		}
		return 0;
	} else {
		return 1;
	}
}

uint8_t MPU_Read_Len(uint8_t reg, uint8_t len, uint8_t *buf) {
	extern I2C_HandleTypeDef hi2c1;
	HAL_I2C_Mem_Read(&hi2c1, MPU_READ, reg, I2C_MEMADD_SIZE_8BIT, buf, len,
			0xfff);
	HAL_Delay(100);
	return 0;
}

uint8_t MPU_Get_Gyroscope(short *gx, short *gy, short *gz) {
	uint8_t buf[6], res;
	res = MPU_Read_Len(BMA400_REG_ACCEL_DATA, 6, buf);
	if (res == 0) {
		*gx = ((uint16_t) buf[1] << 8) | buf[0];
		*gy = ((uint16_t) buf[3] << 8) | buf[2];
		*gz = ((uint16_t) buf[5] << 8) | buf[4];
	} else {
		*gx = 0;
		*gy = 0;
		*gz = 0;
	}
	return res;
}

uint8_t MPU_Check_State(void) {
	uint8_t res;
	res = MPU_Read_Byte(BMA400_REG_INT_STAT0);
	switch (res >> 1 & 0x03) {
	case 0x00:
		printf(" Sleep mode\r\n");
		break;
	case 0x01:
		printf("Low-poerw mode\r\n");
		break;
	case 0x02:
		printf("Normal mode\r\n");
		break;
	default:
		break;
	}
	return res;
}

uint8_t MPU_Write_Byte(uint8_t reg, uint8_t data) {
	extern I2C_HandleTypeDef hi2c1;
	unsigned char outgoing = 0;
	outgoing = data;
	HAL_I2C_Mem_Write(&hi2c1, MPU_WRITE, reg, I2C_MEMADD_SIZE_8BIT, &outgoing,
			1, 0xfff);
	HAL_Delay(100);
	return 0;
}

uint8_t MPU_Read_Byte(uint8_t reg) {
	extern I2C_HandleTypeDef hi2c1;
	unsigned char incoming = 0;
	HAL_I2C_Mem_Read(&hi2c1, MPU_READ, reg, I2C_MEMADD_SIZE_8BIT, &incoming, 1,
			0xfff);
	HAL_Delay(100);
	return incoming;
}

uint8_t MPU_Soft_Reset(void){
	MPU_Write_Byte(BMA400_REG_COMMAND, BMA400_SOFT_RESET_CMD);
}

