int output_number = 13;

void signal_s(){
  digitalWrite(output_number, HIGH);
  delay(250);
  digitalWrite(output_number, LOW);
  delay(250);
  digitalWrite(output_number, HIGH);
  delay(250);
  digitalWrite(output_number, LOW);
  delay(250);
  digitalWrite(output_number, HIGH);
  delay(250);
  digitalWrite(output_number, LOW);
  
  delay(1000);
}

void signal_o(){
  digitalWrite(output_number, HIGH);
  delay(750);
  digitalWrite(output_number, LOW);
  delay(250);
  digitalWrite(output_number, HIGH);
  delay(750);
  digitalWrite(output_number, LOW);
  delay(250);
  digitalWrite(output_number, HIGH);
  delay(750);
  digitalWrite(output_number, LOW);  

  delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(output_number, OUTPUT);
}

void loop() {
  signal_s();
  signal_o();
  signal_s();
}
