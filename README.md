# Bumping_alert_sensor_module

A bumping avoiding module that will alert users during reverse parking in a vehicle. This module can also be used to avoid any movable counterparts bump into obstacles. This module uses ultrasonic sensor which better in detecting obstacle with flat and even on transparent surface. However soft surface or any surface that can absorb sound wave will result in less effective in detection.

Hardware: 
1. Arduino Uno board
2. piezo buzzer (or any buzzer)
3. Ultrsonic sensor module
4. Red LED
5. Green LED
6. Jump wire
7. 9v Power Supply

Software:
1. Arduino IDE

Library:
1. No library needed

When the ultrasonic sensor senses an obstacles with distance greater than 10cm, the green will turn on, red light and buzzer are turn off.
When the ultrasonic sensor senses an obstacles with distance lesser and equal to 10cm, the green light will turn off, red light and buzzer turn on. 
