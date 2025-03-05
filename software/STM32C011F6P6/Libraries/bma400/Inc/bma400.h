#ifndef __BMA400_H
#define __BMA400_H

#include "stm32c0xx_hal.h"
#include "bma400_defs.h"

//#define MPU_READ (BMA400 I2C ADDRESS SDO LOW<<1+1)
//#define MPU WRITE (BMA400_I2C ADDRESS_SDO LOW<<1+0)
#define MPU_READ 0x29
#define MPU_WRITE 0x28

uint8_t MPU_Init(void);
uint8_t MPU_Read_Byte(uint8_t reg);
uint8_t MPU_Write_Byte(uint8_t reg, uint8_t data);
uint8_t MPU_Get_Gyroscope(short *gx, short *gy, short *gz);
uint8_t MPU_Check_State(void);
uint8_t MPU_Soft_Reset(void);

#endif
