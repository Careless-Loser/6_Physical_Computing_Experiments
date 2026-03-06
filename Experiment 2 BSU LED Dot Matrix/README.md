# Experiment 2: BSU LED Dot Matrix Control

This experiment demonstrates how to interface with a MAX7219 LED driver to control an 8x8 Dot Matrix display using minimal pins.

### Description
The MAX7219 is a serial input/output common-cathode display driver that allows an Arduino to control all 64 individual LEDs on the matrix using only 3 data pins. This is achieved through a serial interface, making it highly efficient for projects requiring visual feedback without exhausting the Arduino's digital I/O.

In this project, we use the `LedControl` library to display custom-defined characters. The code is programmed to cycle through characters by defining their bit patterns in a byte array and rendering them row by row.

### Components Used
* 1x Elegoo Uno R3
* 1x Max7219 module 
* 5x F-M wires (Female to Male DuPont wires)
