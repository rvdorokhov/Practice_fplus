// SLAVE

#include <Wire.h>

byte memory = 0; // ВАЖНО, что считываемое значение имеет размер в 1 байт
byte output_number = 13;
byte address_i2c = 0x09;

void setup() {
	Wire.begin(address_i2c);           
	Wire.onReceive(func1);
  pinMode(output_number, OUTPUT);       
  digitalWrite(output_number, LOW); 
}

void loop() {
  if(memory == 1) { digitalWrite(output_number, HIGH); }
  else if (memory == 0) { digitalWrite(output_number, LOW); }
}

void func1(int numBytes){
  while (Wire.available()) { memory = Wire.read(); }
}

