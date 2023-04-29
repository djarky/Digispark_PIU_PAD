//#include <DigiJoystick.h>
//#include<DigiMouse.h

#include "DigiKeyboard.h"




char upLeftChar = 'q';
char upRightChar = 'e';
char downLeftChar = 'z';
char downRightChar = 'c';
char centerChar = 's';

int upLeftPin = 13;
int upRightPin = 12;
int downLeftPin = 11;
int downRightPin = 10;
int centerPin = 9;

int upLeftStatus = LOW;
int upRightStatus = LOW;
int downLeftStatus = LOW;
int downRightStatus = LOW;
int centerStatus = LOW;

// enable pins for reading and start keyboard
void setup() {
  pinMode(upLeftPin, INPUT_PULLUP);
  pinMode(upRightPin, INPUT_PULLUP);
  pinMode(downLeftPin, INPUT_PULLUP);
  pinMode(downRightPin, INPUT_PULLUP);
  pinMode(centerPin, INPUT_PULLUP);

  
}

// press keys if pin is HIGH
void loop() {
  int temp;

  // up left
  temp = digitalRead(upLeftPin);
  if (temp != upLeftStatus) {
    upLeftStatus = temp;
    if (upLeftStatus == HIGH)
		DigiKeyboard.sendKeyStroke(upLeftChar);
    else
     DigiKeyboard.sendKeyStroke(0);
  }

  // up right
  temp = digitalRead(upRightPin);
  if (temp != upRightStatus) {
    upRightStatus = temp;
    if (upRightStatus == HIGH)
      DigiKeyboard.sendKeyStroke(upRightChar);
    else
      DigiKeyboard.sendKeyStroke(0);
  }

  // down left
  temp = digitalRead(downLeftPin);
  if (temp != downLeftStatus) {
    downLeftStatus = temp;
    if (downLeftStatus == HIGH)
      DigiKeyboard.sendKeyStroke(downLeftChar);
    else
      DigiKeyboard.sendKeyStroke(0);
  }

  // down right
  temp = digitalRead(downRightPin);
  if (temp != downRightStatus) {
    downRightStatus = temp;
    if (downRightStatus == HIGH)
      DigiKeyboard.sendKeyStroke(downRightChar);
    else
      DigiKeyboard.sendKeyStroke(0);
  }

  // center
  temp = digitalRead(centerPin);
  if (temp != centerStatus) {
    centerStatus = temp;
    if (centerStatus == HIGH)
      DigiKeyboard.sendKeyStroke(centerChar);
    else
      DigiKeyboard.sendKeyStroke(0);
  }
}
