
module 3 - question 9
Sensor calibration is the process of adjusting sensor output to match actual real-world values. It is important in IoT because sensors may produce inaccurate readings due to environmental conditions or manufacturing differences.

In soil moisture sensors, two-point calibration is used by measuring ADC values in completely dry soil (0% moisture) and fully wet soil (100% moisture). These values are then used to map raw sensor readings into accurate percentage values using a linear mapping formula.

- question 10 
module3 q10
I2C (Inter-Integrated Circuit) is a serial communication protocol used in IoT systems to connect multiple sensors using only two wires: SDA (Serial Data Line) for carrying data and SCL (Serial Clock Line) for synchronization.

Each device on the I2C bus has a unique address, allowing the master device to communicate with specific sensors without conflict. Communication occurs through address selection, data transfer, and clock synchronization.

Common IoT sensors using I2C include the BME280 environmental sensor, SSD1306 OLED display, and MPU6050 accelerometer/gyroscope module.
