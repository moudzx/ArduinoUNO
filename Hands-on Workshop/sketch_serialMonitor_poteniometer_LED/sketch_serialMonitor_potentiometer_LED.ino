void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  float voltage = value * 5.0 / 1023.0;  
  Serial.print(value);
  Serial.print(", ");
  Serial.print(voltage);
  Serial.println("V");
  if (value >= 500) digitalWrite(12,1);
  else digitalWrite(12,0);
  delay(1000);
}

