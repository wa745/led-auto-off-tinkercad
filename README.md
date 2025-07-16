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

Pin Configuration:
- Button → Pin `D2` (configured with `INPUT_PULLUP`)
- LED → Pin `D8`


How It Works?

- Uses `INPUT_PULLUP` to simplify wiring.
- Includes software debounce (200ms delay).
- Tracks button press time using `millis()`.
- Automatically turns off LED after 10 seconds if no new press is detected.





Task Second:

 Project Description

- The LED turns on when motion is detected by the PIR sensor.
- The ultrasonic sensor measures distance and displays the value in the Serial Monitor.
- If the measured distance is less than 10 centimeters, the buzzer is activated.

Components Used

- Arduino Uno
- PIR Motion Sensor
- Ultrasonic Sensor (HC-SR04)
- LED
- Buzzer
- Jumper Wires
- Breadboard

Pin Configuration

 Component           | Arduino Pin 

 PIR Sensor          | D2          
 Ultrasonic Trigger  | D3          
 Ultrasonic Echo     | D4          
 LED                 | D7          
 Buzzer              | D8          

How to Run

1. Connect the components as shown in the table above.
2. Upload the code to the Arduino board using the Arduino IDE.
3. Open the Serial Monitor at a baud rate of 9600 to view the distance readings.
4. When motion is detected, the LED will turn on.
5. If an object is detected at less than 10 cm, the buzzer will activate.

Output Behavior

- LED turns on when motion is detected.
- Buzzer turns on when an object is closer than 10 cm.

Note

This project was created as part of the summer internship at Smart Methods.







