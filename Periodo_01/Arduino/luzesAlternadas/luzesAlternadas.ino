void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  delay(3000);

  digitalWrite(5, HIGH);
  delay(3000);

  digitalWrite(4, LOW);
  delay(1500);

  digitalWrite(5, LOW);
  delay(1500);
}
