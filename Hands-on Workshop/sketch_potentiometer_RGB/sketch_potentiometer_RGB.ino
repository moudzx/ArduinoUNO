int potentiometer=A0;
int red=6;
int green=5;
int blue=4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(potentiometer);

if(value==0){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}else {if(value>0 && value<300){
 digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW); 
}else{if(value>=300 && value <600){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}else{if(value>=600 && value<900){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
}else{if(value>=900){
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
}}}}}
Serial.print("The potentiometer reading is : ");
Serial.println(value);
delay(1000);
}
