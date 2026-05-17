# 6 Physical Computing Experiments

Welcome to this Physical Computing project repository! This collection of Arduino experiments serves as the practical foundation for my broader assessment and digital portfolio. It contains code, wiring guides, and documentation for eight distinct hardware experiments exploring sensors, actuators, and digital logic using the Arduino Uno R3.

## 🔗 Project Links
* **Google Drive:** [Project Folder](https://drive.google.com/drive/folders/1V7OZR1d_17ikVOQnm-Gxx7CaN_fp-wWu?usp=drive_link)
* **GitHub Repository:** [6_Physical_Computing_Experiments](https://github.com/Careless-Loser/6_Physical_Computing_Experiments.git 
)
* **YouTube Playlist:** [Full Experiment Playlist](https://www.youtube.com/playlist?list=PLXSlNqwzq_K5HqcufmH5nnDKOp1EN07ac)

## 📂 Repository Structure & Video Demonstrations

This repository is organized into individual folders for each experiment, along with a shared library directory. You can view the video demonstration for each completed project below:

* **Experiment 1: Car Sensor Automatic Gate**
  * Uses an HC-SR04 Ultrasonic Sensor and an SG90 Servo Motor to detect approaching objects and automatically open a miniature gate.
  * 🎥 [Watch Video Demonstration](https://youtu.be/Q-aJqqHBv9Q)
* **Experiment 2: BSU LED Dot Matrix**
  * Explores visual displays using an LED Dot Matrix to showcase patterns or text.
  * 🎥 [Watch Video Demonstration](https://youtu.be/7gKngg2lAn8)
* **Experiment 3: RGB LED**
  * Demonstrates color mixing and Pulse Width Modulation (PWM) by cycling through the color spectrum.
  * 🎥 [Watch Video Demonstration](https://youtu.be/A97DjAXfy-w)
* **Experiment 4: Digital Inputs**
  * Focuses on reading digital signals from the physical world using push switches to control an output device (red LED).
  * 🎥 [Watch Video Demonstration](https://youtu.be/EC4UXZ6iArY)
* **Experiment 5: Active Buzzer**
  * Generates continuous sound and audible alerts using an active buzzer with built-in oscillating circuitry.
  * 🎥 [Watch Video Demonstration](https://youtu.be/VUvfrnKiWaw)
* **Experiment 6: Passive Buzzer**
  * Uses PWM signals to vibrate the air at specific frequencies, playing an eight-note musical scale.
  * 🎥 [Watch Video Demonstration](https://youtu.be/Q3k1cBI2HFo)
 
* **Final Project: Distance Measurement Scanning Detector**
  * The wiring utilizes the V5 Expanding Board for easier power distribution. Based on the diagram:
     Servo: Signal (Orange) to Digital Pin 3, Power (Red) to 5V, Ground (Brown) to GND.
     Ultrasound Module: Trig to Digital Pin 6, Echo to Digital Pin 5, VCC to 5V, GND to GND.
     1.8" TFT LCD: Connected via SPI. CS to Pin 10, RESET to Pin 8, A0 (DC) to Pin 9, SDA (MOSI) to Pin 11, SCK to Pin 13. LED and VCC to 5V, GND to GND
  * 🎥 [Watch Video Final Outcome](https://youtu.be/gCH_I8y4LIE)

* **libraries/**
  * Contains necessary third-party Arduino libraries required to run specific modules.

## 🛠️ General Hardware Requirements

While each experiment has specific component needs outlined in its respective folder, the core hardware used across this repository includes:
* Elegoo / Arduino Uno R3 Board
* 830 Tie-Points Breadboard
* Assorted Jumper Wires (M-M, F-M)
* USB Cable for programming and power

## 🚀 How to Use This Repository

1.  **Clone or Download:** Download this repository to your local machine.
2.  **Install Libraries:** Before running the code for sensors copy the contents of the `libraries/` folder into your local Arduino IDE libraries directory (usually located at `Documents/Arduino/libraries`).
3.  **Navigate:** Open the folder for the specific experiment you wish to run.
4.  **Read the Docs:** Check the individual `README.md` inside each experiment folder for exact wiring instructions and component lists.
5.  **Upload:** Open the `.ino` file in the Arduino IDE, select your board and port, and click "Upload".

---
*Documented for physical computing assessment and portfolio development.*
