#include <DigiJoystick.h>

//#include<DigiMouse.h

//#include "DigiKeyboard.h"

#define UL 0
#define UR 1
#define CE 2
#define DL 3
#define DR 4

#define CC 5


void setup() {      
  pinMode(UL, INPUT_PULLUP); //button0 
  pinMode(UR, INPUT_PULLUP); //button1
  pinMode(CE, INPUT_PULLUP); //button2
  pinMode(DL, INPUT_PULLUP); //button3
  pinMode(DR, INPUT_PULLUP); //button4
}


void loop() {


Joy_status=0x00;

//DigiJoystick.setButtons((char)i,(char)0x00)


if(digitalRead(UL)==LOW){
    Joy_status+=0x01
   //DigiJoystick.setButtons((char)0x00,(char)0x01);    
}
if(digitalRead(UR)==LOW){
    Joy_status+=0x02
   //DigiJoystick.setButtons((char)0x00,(char)0x02);    
}
if(digitalRead(CE)==LOW){
    Joy_status+=0x04
   //DigiJoystick.setButtons((char)0x00,(char)0x04);    
}
if(digitalRead(DL)==LOW){
    Joy_status+=0x08
   //DigiJoystick.setButtons((char)0x00,(char)0x08);    
}
if(digitalRead(DR)==LOW){
    Joy_status+=0x10
   //DigiJoystick.setButtons((char)0x00,(char)0x10);    
}


DigiJoystick.setButtons((char)i,(char)Joy_status);

} 