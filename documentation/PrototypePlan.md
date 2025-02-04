[comment]: # (myclient=NJIT)
[comment]: # (date=2024-02-04)
[comment]: # (copyrightdate=$date)
[comment]: # (title=ECET 430 - Prototype Plan - FitT)
[comment]: # (author=[Christian Hansis](mailto:christian.hansis@njit.edu))
[comment]: # (myemail=ch444@njit.edu)
[comment]: # (mybanner=$templatepath/blank.png)
[comment]: # (clientbanner=$workingpath/assets/njit_logo.png)
[comment]: # (headerlogo=$workingpath/assets/njit_logo_small_square.png)
[comment]: # (toc=false)
[comment]: # (headspace=-2cm)
[comment]: # (mybannersize=width=0cm,height=0cm)
[comment]: # (clientbannersize=width=15cm,height=4cm)

# Purpose

This document shows planned prototyping steps for the **FitT Fitness Tracker Demo Project**.

## Prototype Alpha

### Goals

Prototype Alpha will demonstrate to our (imaginary) project sponsor that we can show step counting on a display with readily available commercial components.

### Type

This is a Proof-of-Concept prototype.

### Scope

- Bring up our choice of STM32 controller on a nucleo dev board as our controller and get environment ready to program.
- Get motion readings from a 3-axis accelerometer as our motion sensor.
- Get output to an OLED display. Type is still to be determined, something available as a breakout board.
- Power will be from a wire, not yet portable.
- Demonstrate testing plan.

### Timeline

Class demo in mid February.

## Prototype Bravo

### Goals

Prototype Bravo will demonstrate to our project sponsor that we can add heart beat sensing and battery power.

### Type

This is a Proof-of-Concept prototype.

### Scope

- Get heart beat readings from an optical HR sensor.
- Power the design from a rechargeable Li battery with breakout board charger/booster supply unit.
- Demonstrate testing plan.

### Timeline

Class demo in end of February.

## Prototype Charlie One

### Goals

Prototype Charlie One will demonstrate all core functions in a working setup based on breakout boards.

### Type

This is a works-as prototype.

### Scope

- Display real time heart rate, step counts, timer with start/stop/clear buttons.
- Run off of battery with minimum defined battery life.
- Demonstrate testing plan.

### Timeline

TBD

## Prototype Charlie Two

### Goals

Prototype Charlie Two will demonstrate the look and feel of the proposed final design.

### Type

This is a looks-as prototype.

### Scope

- Show a 3d printed shell with wrist strap.
- No electronics inside.
- Include display and buttons if possible
- Show plan to integrate electronics into shell.

### Timeline

TBD

## Prototype Delta

### Goals

Prototype Delta will show the final product of custom electronics inside the custom shell.

### Type

This is an engineering prototype.

### Scope

- Show custom made PCB.
- Show PCB fitted into device.
- Demonstrate use cases and performance.
- Demonstrate testing plan.
- Show plan for future development.

### Timeline

TBD

