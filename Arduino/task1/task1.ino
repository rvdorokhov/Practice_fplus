#define LED_PIN 6

void setup() {
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
	for(unsigned int i = 255; i >= 0 ; --i) {
    analogWrite(LED_PIN, i);
    delay(10); 
  }
}