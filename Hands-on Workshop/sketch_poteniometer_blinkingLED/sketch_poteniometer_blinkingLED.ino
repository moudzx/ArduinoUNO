void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value);
  if (value <= 300) digitalWrite(12,0);
  else {
    digitalWrite(12,1);
    delay(value);
    digitalWrite(12,0);
    delay(value);
  }
}

