#include <Servo.h>

Servo servo1;
const int dialPin = 0;

void setup()
{
  servo1.attach(9);
}

void loop()
{
  int position;

  position = analogRead(dialPin);
  position = map(position, 0, 1023, 0, 180);

  servo1.write(position);

  delay(50);
}
