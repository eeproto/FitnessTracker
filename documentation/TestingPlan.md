# FitT Testing Plan

## LED

Run LED test code. LED flashes on and off.

## Display

Run display hardware test code. Should show graphical and text elements.

## Motion Sensor

Run motion sensor test code. Observe acceleration x, y, and z values through debugger Live View.

## Step Counter

**Given** the system runs the step counter display test code, **When** the assembly is being held level and carried while walking, **Then** the step count reported on the display should increase and be about the same as that on a commercial step counter device worn by the person carrying the board.
