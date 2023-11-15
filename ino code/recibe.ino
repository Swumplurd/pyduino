const int pinLed = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char option = Serial.read();
    if (option >= '1' && option <= '9') {
      digitalWrite(pinLed, HIGH);
      delay(10000);
      digitalWrite(pinLed, LOW);
      delay(200);
    }
  }
}