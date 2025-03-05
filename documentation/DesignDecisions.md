# FitT Design Decisions

## Scope

This is as of Prototype Alpha stage.

Demonstrates counting steps with the motion sensor and showing those on the display.

## Microcontroller

[STM32C011F6P6](https://www.st.com/en/microcontrollers-microprocessors/stm32c011f6.html) in a TSOP-20 package.

Microcontroller made breadboard friendly through TSOP-DIP adapter board.

Using HAL framework.

Programming through USB ST-Link.

## Step counting sensor

[Bosch BMA400](https://www.bosch-sensortec.com/products/motion-sensors/accelerometers/bma400/) with hackish simplified step counter algorithm.

## Display

Display: SPI-connected [Crystalfontz CFAL9664B-F-B1](https://www.crystalfontz.com/product/cfal9664bfb1-graphic-96x64-color-oled-module) 96×64 Graphic Color OLED Display ([datasheet](assets/CFAL9664B-F-B1Datasheet.pdf)). Requires ultrasonic bonding of flat cable to custom PCB. Also boost regulator for panel supply. Using [CFAL9664BFB1E11](https://www.crystalfontz.com/product/cfal9664bfb1e11-96x64-color-oled-with-carrier-board) carrier board that does all that and has a 2.54mm pitch pin header. Their [schematic](assets/CFA-10083_0v2_Schematic.pdf) helps a lot. Using Anothermist [DISPLAY library](https://github.com/anothermist/DISPLAYS) SSD1331_HAL library.

Display will need to be fitted with enclosure an need a gasket to seal against rainwater.

## Power Supply

From Wall DC breadboard adapter.

## Firmware

Hardware test code snippets with simple demonstration of step counter to display.

## Future Improvements

- If possible, use [eTFT library](https://github.com/Bodmer/TFT_eSPI) with great functionality and performance.
- Use BMA400's internal step counter algorithm with wakeup. Can sleep the entire system including display and use interrupt wakeup from sensor.
