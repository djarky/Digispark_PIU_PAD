#include <DigiJoystick.h>

//#include<DigiMouse.h

//#include "DigiKeyboard.h"

#define UL 12
#define UR 11
#define CE 10
#define DL 9
#define DR 8

#define COIN 7

unsigned char Joy_status=0x00;


void setup() {      
  pinMode(UL,   INPUT_PULLUP); //button0 
  pinMode(UR,   INPUT_PULLUP); //button1
  pinMode(CE,   INPUT_PULLUP); //button2
  pinMode(DL,   INPUT_PULLUP); //button3
  pinMode(DR,   INPUT_PULLUP); //button4
  pinMode(COIN, INPUT_PULLUP); //button5
}


void loop() {


Joy_status=0x00;

//DigiJoystick.setButtons((char)i,(char)0x00)


if(digitalRead(UL)==LOW){
    Joy_status+=0x01; 
}
if(digitalRead(UR)==LOW){
    Joy_status+=0x02;    
}
if(digitalRead(CE)==LOW){
    Joy_status+=0x04;   
}
if(digitalRead(DL)==LOW){
    Joy_status+=0x08;
}
if(digitalRead(DR)==LOW){
    Joy_status+=0x10;
}
if(digitalRead(COIN)==LOW){
    Joy_status+=0x20;
}
//J1 or J2
//DigiJoystick.setButtons((char)Joy_status,(char)0);
DigiJoystick.setButtons((char)0,(char)Joy_status);
DigiJoystick.delay(1);
} 
