#define RED 8
#define BLUE 7
#define GREEN 12

void setup() {
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  pinMode(BLUE,OUTPUT);

}

void loop() {
  digitalWrite(RED,1);
  digitalWrite(GREEN,0);
  digitalWrite(BLUE,0);
  delay(1000);
  digitalWrite(RED,0);
  digitalWrite(GREEN,1);
  digitalWrite(BLUE,1);
  delay(1000);
}
