// Device-lighter

byte memory = 0; // ВАЖНО, что считываемое значение имеет размер в 1 байт
byte output_number = 13;

void setup() {         
  pinMode(output_number, OUTPUT);       
  digitalWrite(output_number, LOW); 

  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) { memory = Serial.read(); }

  if(memory == 1) { digitalWrite(output_number, HIGH); }
  else if (memory == 0) { digitalWrite(output_number, LOW); }
}
