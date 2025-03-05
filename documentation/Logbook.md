# FitT Development Logbook

## 01/21/25 Project Start

- Chose git for collaborative work on both hardware and software sources
- As an educational project, will license under a [Creative Commons Attribution-ShareAlike License 4.0](https://en.wikipedia.org/wiki/Wikipedia:Text_of_the_Creative_Commons_Attribution-ShareAlike_4.0_International_License)
- Will host as a public github repository
- Will track development through github's issue tracker with kanban project board
- Started with an empty template repository structure

## 02/19/25 Microcontroller Choice

Will use a member of the STM32 family because of familiarity, experience, availability, and lots of choices within the same framework.

Want:

- STM32 series
- low power consumption
- no major computational or peripheral requirements
- GPIO count less than 16
- minimum 32kB flash
- package that can be soldered by hand
- more than 1000 in stock at major distributors
- minimum 5y future availability

Best suited would be L0 series, low power, don't expect heavy computation. Or a C0 with slightly higher power consumption but lower prices.

## 02/20/25 SW Framework

STM32 bare metal or HAL or [Arduino on STM](https://community.st.com/t5/stm32-mcus/how-to-program-and-debug-the-stm32-using-the-arduino-ide/ta-p/608514)?

More experience with HAL... more bloated than bare metal but easier to use.

Will use STM32 Cube IDE development environment.

## 02/21/25 Display Selection

LCD with backlight can have good contrast but is monochrome, looks kinda old fashioned.

TFTs are color and cheap, but not great outdoors and in the sunlight.

Will test an OLED as a high contrast option.

## 02/24/25 Display Library Options

Display library available on [manufacturer github page](https://github.com/crystalfontz/CFAL9664BF-B1-B2/tree/master), but would require adaption from Arduino world.

Adafruit [SSD1331 library](https://github.com/adafruit/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino) same.

German [UB library](https://mikrocontroller.bplaced.net/wordpress/?page_id=509) looks good but would require adaption to HAL.

Anothermist [DISPLAY library](https://github.com/anothermist/DISPLAYS) has SSD1331_HAL[](https://github.com/anothermist/DISPLAYS/tree/master/SSD1331_HAL) implementation. Tested, works.

## 03/01/25 Display Test

Implement graphic and text display code with example from Anothermist library. Import library into `Libraries` folder.

## 03/02/25 Step counting sensor

Will use a 3-axis MEMS accelerometer.

Have used ST LIS3DH before, availability good, library available, BOB too. Does not have internal step counter. ST offers a [MEMS library](https://www.st.com/en/embedded-software/x-cube-mems1.html#documentation) that might be helpful.

Or Bosch BMA400, very low power, specially designed for this kind of wearable applications, has internal step counter algorithm.

### BMA400

[BMA400 product page](https://www.bosch-sensortec.com/products/motion-sensors/accelerometers/bma400/#documents).

Official Bosch [BMA400 API](https://github.com/boschsensortec/BMA400_SensorAPI) at their github.

STM32 common porting implementation based on the API from [BSTRobin's forum post](https://community.bosch-sensortec.com/mems-sensors-forum-jrmujtaw/post/bma400-library-for-stm32-8Wp5OBEzLzPqqNP).

Design guide [PDF](https://community.bosch-sensortec.com/t5/Knowledge-base/BMA400-accelerometer-design-guide/ta-p/7397).

Sparkfun [BMA400 breakout board](https://www.sparkfun.com/sparkfun-triple-axis-accelerometer-breakout-bma400-qwiic.html) with [hookup guide](https://learn.sparkfun.com/tutorials/sparkfun-triple-axis-accelerometer-breakout---bma400-qwiic-hookup-guide/all).

Minimal DIY driver from [blkhumor blog post](https://blog.csdn.net/baidu_39603247/article/details/115198001).

### Step Counting

Ideally: Use internal step counter functionality of BMA400. Tried with their API and the common porting approach, but got way too big for flash, no chance of fitting any display code.

For demonstration purposes: simple z-axis flip-flop monitor with experimental threshold. An [Arduino post](https://circuitdigest.com/microcontroller-projects/diy-arduino-pedometer-counting-steps-using-arduino-and-accelerometer) shows an advanced diy approach with comparing the length of the gravity vector, thus making it useful in any orientation.

## Battery

Standard LiPo cell, as big as we can fit for maximum runtime.

Monitoring with a fuel gauge chip.

Charging with a standard 1S LiPo charger chip.

USB-C power-only fixed max 500mA interface.

Charge status indication: LEDs next to charger port? Or use display? But then that must be on while charging.

USB-C plug will have to be sealed or have a rubber cap to keep rain water out.

## Power Conservation

Turn display off when not in use.

Controller too?

Use motion sensor to wake up.

## User Interface Buttons

Momentary push buttons can be mounted behind push-through rubber caps for sealing.

