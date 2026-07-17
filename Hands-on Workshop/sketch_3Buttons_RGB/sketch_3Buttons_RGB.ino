int led1=2;
int led2=3;
int led3=4;
int button1=8;
int button2=9;
int button3=10;

int buttonState1;
int buttonState2;
int buttonState3;

void setup() {
  // put your setup code here, to run once:
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState1=digitalRead(button1);
buttonState2=digitalRead(button2);
buttonState3=digitalRead(button3);

if(buttonState1==1){
  digitalWrite(led1,1);
} else{
  digitalWrite(led1,0);
}
if(buttonState2==1){
  digitalWrite(led2,1);
} else{
  digitalWrite(led2,0);
}
if(buttonState3==1){
  digitalWrite(led3,1);
} else{
  digitalWrite(led3,0);
}
}
