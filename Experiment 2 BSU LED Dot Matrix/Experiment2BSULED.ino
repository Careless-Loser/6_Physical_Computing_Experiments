#include <LedControl.h>

LedControl lc = LedControl(12, 10, 11, 1);

unsigned long delaytime = 1000; 

void setup() {
  lc.shutdown(0, false); 
  lc.setIntensity(0, 8); 
  lc.clearDisplay(0);    
}

void loop() {
  
  byte b[5] = {B11111110, B10010010, B10010010, B10010010, B01101100};
  lc.setRow(0, 0, 0);      
  lc.setRow(0, 1, b[0]);   
  lc.setRow(0, 2, b[1]);
  lc.setRow(0, 3, b[2]);
  lc.setRow(0, 4, b[3]);
  lc.setRow(0, 5, b[4]);
  lc.setRow(0, 6, 0);     
  lc.setRow(0, 7, 0);
  
  delay(delaytime);
  lc.clearDisplay(0);
  delay(200);


  byte s[5] = {B01001100, B10010010, B10010010, B10010010, B01100100};
  lc.setRow(0, 0, 0); 
  lc.setRow(0, 1, s[0]); 
  lc.setRow(0, 2, s[1]);
  lc.setRow(0, 3, s[2]);
  lc.setRow(0, 4, s[3]);
  lc.setRow(0, 5, s[4]);
  lc.setRow(0, 6, 0); 
  lc.setRow(0, 7, 0);
  
  delay(delaytime);
  lc.clearDisplay(0);
  delay(200);


  byte u[5] = {B01111110, B01000000, B01000000, B01000000, B01111110};
  lc.setRow(0, 0, 0); 
  lc.setRow(0, 1, u[0]); 
  lc.setRow(0, 2, u[1]);
  lc.setRow(0, 3, u[2]);
  lc.setRow(0, 4, u[3]);
  lc.setRow(0, 5, u[4]);
  lc.setRow(0, 6, 0); 
  lc.setRow(0, 7, 0);
  
  delay(delaytime);
  lc.clearDisplay(0);
  delay(500); 
}