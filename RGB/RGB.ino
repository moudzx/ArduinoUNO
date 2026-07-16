int red = 7;
int green = 6;
int blue = 5;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(green,0);
  digitalWrite(red,1);
  digitalWrite(blue,1);
  delay(500);
  digitalWrite(red,0);
  digitalWrite(blue,1);
  digitalWrite(green,1);
  delay(500);
  digitalWrite(blue,0);
  digitalWrite(red,1);
  digitalWrite(green,1);
  delay(500);
  digitalWrite(blue,1);
  digitalWrite(red,1);
  digitalWrite(green,1);
  delay(500);
}
