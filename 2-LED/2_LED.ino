void setup(){
pinMode(12,OUTPUT);
pinMode(8,OUTPUT);
}

void loop(){
digitalWrite(12,1);
digitalWrite(8,0);
delay(1000);
digitalWrite(12,0);
digitalWrite(8,1);
delay(1000);
}
