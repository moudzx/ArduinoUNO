const int led=9;
const int button=7;
int ButtonState; // variable to give the button state : HIGH or LOW
int SecondCount; //variable to count the time spent on pushing the button 
int i; //loop variable 

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ButtonState= digitalRead(button);
i=0;
SecondCount=0;

while(ButtonState==HIGH){
 delay(100);
 i++;
 if(i==10){
  SecondCount++; //command to count the time
  i=0;
 } 
ButtonState=digitalRead(button);
}
if(SecondCount>0){
  digitalWrite(led,HIGH);
  delay(SecondCount*1000); // to convert the time from s to ms
}
digitalWrite(led,LOW);
}
