# led-auto-off-tinkercad
LED Control with Auto-Off using Button | Arduino Project

This is a simple Arduino project built and simulated using **Tinkercad**.  
It allows you to control an LED with a push button, and includes an automatic turn-off feature after 10 seconds.

What It Does?

- The LED turns ON or OFF every time the button is pressed.
- If the LED is ON and no further interaction happens, it turns OFF automatically after 10 seconds.

Tools & Platform

- Tinkercad Circuits (for simulation)
- Arduino Uno
- Push Button
- LED
- 220Ω Resistor
- Breadboard & Jumper Wires

Pin Configuration

- Button → Pin `D2` (configured with `INPUT_PULLUP`)
- LED → Pin `D8`

How It Works?

- Uses `INPUT_PULLUP` to simplify wiring.
- Includes software debounce (200ms delay).
- Tracks button press time using `millis()`.
- Automatically turns off LED after 10 seconds if no new press is detected.




