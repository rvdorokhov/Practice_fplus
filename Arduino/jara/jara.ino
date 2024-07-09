int output_number = 13;

void signal_j(){
  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(1000); // тире
  digitalWrite(output_number, LOW); delay(1000);
}

void signal_a(){
  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(1000); // тире
  digitalWrite(output_number, LOW); delay(1000);
}

void signal_r(){
  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(1000); // тире
  digitalWrite(output_number, LOW); delay(250);

  digitalWrite(output_number, HIGH); delay(250); // точка
  digitalWrite(output_number, LOW); delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(output_number, OUTPUT);
}

void loop() {
  signal_j();
  signal_a();
  signal_r();
  signal_a();
}
