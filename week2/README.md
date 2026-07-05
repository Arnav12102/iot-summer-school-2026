module 2 - question 3
Arduino UNO has different types of pins that are used for different purposes such as reading data from sensors, controlling devices, and communicating with other electronic modules.

1. Digital Input:
Digital input pins are used to receive digital signals from input devices. These pins can read only two values: HIGH (1) or LOW (0). A common example is a push button. In an IoT application, digital input pins are used in a smart doorbell, where pressing the button sends a signal to the Arduino.

2. Digital Output:
Digital output pins are used to send digital signals to external devices. These pins can turn a device ON or OFF by sending HIGH or LOW signals. A common example is an LED. In IoT, digital output pins are used in a smart home lighting system to switch lights on or off.

3. Analog Input:
Analog input pins are used to read continuously changing signals from analog sensors. The Arduino UNO converts these signals into digital values ranging from 0 to 1023 using its built-in Analog-to-Digital Converter (ADC). A common example is a temperature sensor or a potentiometer. In IoT, analog input pins are used in a weather monitoring system to measure temperature.

4. PWM Output:
PWM (Pulse Width Modulation) output pins are used to produce a variable output by rapidly switching the signal ON and OFF. PWM is commonly used to control the brightness of an LED or the speed of a DC motor. In IoT, PWM pins are used in an automatic street lighting system where the brightness of lights changes according to the surrounding light conditions.

5. I2C and SPI Pins:
I2C and SPI are communication pins that allow the Arduino to exchange data with sensors, displays, memory cards, and other electronic modules. I2C uses two pins (SDA and SCL), while SPI uses four main pins (MOSI, MISO, SCK, and SS). A common example is connecting an OLED display or an SD card module to the Arduino. In IoT, these communication pins are used in smart home systems, where multiple sensors and displays communicate with the Arduino efficiently.

Arduino UNO Pin Locations:

Digital Input/Output Pins: 0–13
Analog Input Pins: A0–A5
PWM Pins: 3, 5, 6, 9, 10, and 11
I2C Pins: A4 (SDA) and A5 (SCL)
SPI Pins: 10 (SS), 11 (MOSI), 12 (MISO), and 13 (SCK)


module 2 - question 9 

analogRead() is used to read analog signals from sensors connected to the analog input pins (A0–A5). It converts the analog voltage into a digital value ranging from 0 to 1023.
IoT Example: Reading temperature from a temperature sensor in a weather monitoring system.

analogWrite() is used to generate a PWM (Pulse Width Modulation) signal on PWM pins. It is mainly used to control the brightness of an LED or the speed of a motor. The output value ranges from 0 to 255.
IoT Example: Adjusting the brightness of smart street lights based on the surrounding light.

PWM (Pulse Width Modulation) is a technique in which the Arduino switches a digital signal ON and OFF very quickly to produce an average output voltage. It is used to control devices like LEDs and motors without using a true analog outpu


- questin 10 
The setup() function is executed only once when the Arduino is powered on or reset. It is used to initialize pins, sensors, and communication such as Serial.begin().

The loop() function runs continuously after setup(). It contains the main program that repeatedly reads sensors and controls devices.

If a long delay() is placed inside the loop(), the Arduino stops executing other tasks during that time. As a result, sensor readings become slow and the system cannot respond quickly to changes, reducing the responsiveness of the IoT device.

The non-blocking alternative is to use the millis() function. It keeps track of time without stopping the program, allowing the Arduino to perform multiple tasks such as reading sensors and controlling outputs simultaneously.

Example: In a smart home security system, using millis() allows the Arduino to continuously monitor a motion sensor while blinking an LED, whereas a long delay() could cause it to miss motion detection.


