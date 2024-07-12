// MASTER

#include <Wire.h>

byte value; // ВАЖНО, что передаваемое значение имеет размер в 1 байт
byte output_number = 13;
byte button_number = 8;
byte address_i2c = 0x09;

void setup()
{
	Wire.begin();
	pinMode(button_number, INPUT_PULLUP); 

  pinMode(output_number, OUTPUT);       
  digitalWrite(output_number, LOW);    
}

void loop()
{
  Wire.beginTransmission(address_i2c);
	if (!digitalRead(button_number)) {
    value = 1; 
    Wire.write(value); 
    digitalWrite(output_number, HIGH); }
  else { 
    value = 0; 
    Wire.write(value); 
    digitalWrite(output_number, LOW); }
  Wire.endTransmission();
}
