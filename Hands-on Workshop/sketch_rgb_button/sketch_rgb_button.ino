byte button = 2;
byte red = 4;
byte green = 7;
byte blue = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == HIGH){
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
  }
  else {
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
  }
}
