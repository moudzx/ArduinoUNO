void setup(){
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(12,OUTPUT);
}

void loop(){
    digitalWrite(12,LOW);
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    digitalWrite(12,HIGH);
    delay(500);
}
