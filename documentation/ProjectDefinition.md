[comment]: # (myclient=NJIT)
[comment]: # (date=2025-01-21)
[comment]: # (copyrightdate=$date)
[comment]: # (title=ECET 430 - Demo Project FitT - Project Definition)
[comment]: # (author=[Christian Hansis](mailto:christian.hansis@njit.edu))
[comment]: # (myemail=ch444@njit.edu)
[comment]: # (mybanner=$templatepath/blank.png)
[comment]: # (clientbanner=$workingpath/assets/njit_logo.png)
[comment]: # (headerlogo=$workingpath/assets/njit_logo_small_square.png)
[comment]: # (toc=false)
[comment]: # (headspace=-1cm)
[comment]: # (mybannersize=width=0cm,height=0cm)
[comment]: # (clientbannersize=width=15cm,height=4cm)

# Purpose

This project aims to implement a wearable fitness tracker.

The user will wear it on their body while exercising, with the primary use case being running. 

The device will record steps, distance moved, timing with start/stop/reset buttons, and real time heart rate. It will show this information on a built-in display and store it for later analysis.

Power comes from a battery, rechargeable through a standard USB-C cable.

This is a demonstration project for the ECET 430 class.

# Client

Audience: ECET Class.

Joint work between instructor and students to define project parameters.

Implementation by [instructor](mailto:christian.hansis@njit.edu) as a demonstration project.

# Communication

Git repository: [https://github.com/eeproto/FitnessTracker](https://github.com/eeproto/FitnessTracker)

Logbook at [Logbook.md](https://github.com/eeproto/FitnessTracker/blob/main/documentation/Logbook.md) in markdown format as part of the repository.

# Objectives

- Wearable design
- Battery powered
- USB-C rechargeable
- Heart rate measurement
- Step counting
- Real time display
- Data storage and analysis

# Scenario

## User Interaction Stories

Startup: Remove from packaging. Charge until the device indicates battery full. Turn on. Wear. Confirm heart rate readout. Take a few steps. Confirm step counting. Confirm timer start/stop/reset.

Running: Make sure device is charged. Wear. Start timer. Run. Confirm readouts make sense. Stop timer. Read through analysis on screen.

## User Interface

- Display daylight outdoor readable. Large enough to comfortable read relevant data while in motion, small enough to still be not clunky.
- Momentary buttons for interaction, digital watch style.
- Charge status indication through display or separate LED(s).

# User Acceptance

Given the user wears the device as instructed and startup has been completed successfully, when running, momentary hear rate readout verifies within 5% from a reference medical SpO2 monitor.

Given the user wears the device as instructed and startup has been completed successfully, when running, step count is within 10% from manually counted steps or as compared with a commercial fitness tracker or smart watch.

Given the battery is less than full, when user attaches USB-C power, the battery charges until full and indicates charging status and full status to the user.

# Parameters

## Technical

Dimensions similar to common smart watches.

Weight similar to a smart watch.

Can withstand light rain.

## Functions

- Display readout
- HR sensor
- Step counting sensor
- Rechargeable battery power
- Timer
- Data storage and (simple) analysis

## Integration

Initially a standalone device.

Possibly a phone or computer or wireless IP interface in the future.

## Operational

Must last at least 4h on battery while on a long exercise session.

## Regulatory

To be researched.

## Life Cycle

Programming during manufacturing.

No mid cycle software updates planned.

Later maybe associated storage/analysis/integration services.

# Environment

Temperatures, humidity, and other environmental parameters where a human can work out.

Storage in typical indoor temperature and humidity ranges.

Charges from standard issue USB-C supply.

# Starting Point

This project might come in conflict with patents or other protected IP. However, as a fictional demonstration project, this should not be an issue here.

No prior design studies or prototypes available.

# Key Concerns

Most important is that the device can comfortably be worn and operated when running, not to heavy, too big, or the display too dim to use for 4h.

At a minimum, we must be able to see real time readouts of steps and heart rate on the builtin display.

# Future

- SpO2 display and tracking
- Connectivity, phone App
- Associated cloud services
- Integration with other Apps
- Integration with health programs

# Glossary

**HR**: heart rate, measured in beats per minute BPM

**SpO2**: blood oxygen saturation, expressed in 0..100% of oxygen saturated red blood cells

**LiPo**: lithium polymer battery

# Open Questions

Preferences for materials used? Hypo allergen?

How much data do we need to store, for how long, and how granular?

Do we need sound output?

Preferences for component sources and manufacturing? Domestic only?
