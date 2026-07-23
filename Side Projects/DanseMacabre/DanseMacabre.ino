const byte leds[] = {12, 11, 10, 9};

void setup() {
  randomSeed(analogRead(A0));

  for (int i = 0; i < 4; i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {

  int mode = random(5);

  switch (mode) {

    case 0:
      for (int i = 0; i < random(5,15); i++) {
        int led = random(4);

        digitalWrite(leds[led], HIGH);
        delay(random(50,180));
        digitalWrite(leds[led], LOW);
        delay(random(20,120));
      }
      break;

    case 1:
      {
        int sender = random(4);

        for (int i = 0; i < random(4,9); i++) {
          digitalWrite(leds[sender], HIGH);
          delay(120);
          digitalWrite(leds[sender], LOW);
          delay(120);
        }
      }
      break;

    case 2:
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
          digitalWrite(leds[j], HIGH);

        delay(150);

        for (int j = 0; j < 4; j++)
          digitalWrite(leds[j], LOW);

        delay(150);
      }
      break;

    case 3:
      for (int i = 0; i < 4; i++) {
        digitalWrite(leds[i], HIGH);
        delay(120);
        digitalWrite(leds[i], LOW);
      }

      for (int i = 2; i > 0; i--) {
        digitalWrite(leds[i], HIGH);
        delay(120);
        digitalWrite(leds[i], LOW);
      }
      break;

    case 4:
      delay(random(600,1500));

      for (int i = 0; i < 4; i++)
        digitalWrite(leds[i], HIGH);

      delay(250);

      for (int i = 0; i < 4; i++)
        digitalWrite(leds[i], LOW);

      break;
  }

  delay(random(200,700));
}