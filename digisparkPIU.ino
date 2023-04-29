//#include <DigiJoystick.h>
//#include<DigiMouse.h>
//#include "DigiKeyboard.h"
 

//Mux output to Arduino analog pin
#define MUX_COM 1

//Mux address select digital pins
#define MUX_ADDRESS_SEL_0 2
#define MUX_ADDRESS_SEL_1 3
#define MUX_ADDRESS_SEL_2 4


int readMuxChannel(byte channel)
{
  //Select mux channel
  digitalWrite(MUX_ADDRESS_SEL_0, channel & 1);
  digitalWrite(MUX_ADDRESS_SEL_1, (channel >> 1) & 1);
  digitalWrite(MUX_ADDRESS_SEL_2, (channel >> 2) & 1);

  //Read mux output
  return digitalRead(MUX_COM);
}

void setup() {
	pinMode(MUX_ADDRESS_SEL_0, OUTPUT);
	pinMode(MUX_ADDRESS_SEL_1, OUTPUT);
	pinMode(MUX_ADDRESS_SEL_2, OUTPUT);

	pinMode(MUX_COM, INPUT_PULLUP);
}

void loop() {
	for(int i=0;i<8;i++){
		if(! readMuxChannel(i)) {
//DigiJoystick.setButtons(i,0x00);
   // DigiJoystick.setButtons((char)i,(char)0x00);        
		} 
	}


} 