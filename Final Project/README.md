# Final Project: Mini Radar Scanning Detector

## Overview
In this project, you will learn how to integrate mechanical movement, distance sensing, and visual data rendering by creating a real-time miniature radar system. 

## Description and Purpose
The purpose of this project is to build a hardware-based Distance Measurement Scanning Detector. The system utilizes an Arduino Uno to control an SG90 micro servo motor, which sweeps an ultrasonic sensor across a 180-degree field of view. As the sensor moves, it continuously calculates the distance to nearby physical objects. This spatial data is then processed and rendered in real-time on a 1.8-inch TFT LCD screen, creating a dynamic visual radar interface that plots physical obstacles.

## Component Introduction
* **HC-SR04 Ultrasonic Sensor:** Acts as the "eyes" of the radar. It emits high-frequency sound waves and calculates distance based on the exact time it takes for the echo to bounce off an object and return to the receiver.
* **SG90 Micro Servo:** Provides precise mechanical movement, sweeping the ultrasonic sensor back and forth.
* **1.8" TFT LCD Screen:** Uses the SPI protocol to communicate with the Arduino. With the help of the `Ucglib` graphics library, it draws the sweeping green radar lines and plots detected objects as red or yellow dots.
* **V5 Sensor Shield:** An expansion board that snaps onto the Arduino, providing dedicated 5V and Ground pins next to every signal pin, which is critical for powering multiple modules simultaneously.

> ⚠️ **Important Technical Note:** You must be careful with timing and code execution. Because the system is drawing graphics, moving a motor, and listening for sound waves simultaneously, you cannot use standard delays without causing screen lag. You must use a custom timeout on the sensor's read function (e.g., `pulseIn(echoPin, HIGH, 30000);`) to prevent the code from freezing when no object is detected. Additionally, you must explicitly define the servo's pulse limits (`baseServo.attach(ServoPin, 500, 2500);`) to guarantee a full 180-degree physical sweep.

## Components Required
* 1x Arduino Uno R3 (CH340 version)
* 1x V5 Expanding Board (Sensor Shield V5.0)
* 1x 1.8" TFT LCD Screen Module
* 1x HC-SR04 Ultrasound Module
* 1x SG90 Micro Servo Motor
* 1x USB Power Cable
* Jumper Wires (Female-to-Female)
* Acrylic mounting plates and standoffs
