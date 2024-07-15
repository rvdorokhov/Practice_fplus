// Device-button

byte value; // ВАЖНО, что передаваемое значение имеет размер в 1 байт
byte output_number = 13;
byte button_number = 8;

void setup()
{
	pinMode(button_number, INPUT_PULLUP);
  pinMode(output_number, OUTPUT);       
  digitalWrite(output_number, LOW);  

  Serial.begin(9600);  
}

void loop()
{
	if (!digitalRead(button_number)) {
    value = 1;
    Serial.write(value);
    digitalWrite(output_number, HIGH); }
  else { 
    value = 0;
    Serial.write(value);
    digitalWrite(output_number, LOW); }
}
