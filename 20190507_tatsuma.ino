#include <Servo.h>

Servo sv;
int min = 1000;
int max = 2000;

void setup()
{
  sv.attach(9);
}

void loop()
{
  for( int i = min; i <= max; i+=1 ){
    sv.writeMicroseconds(i);
    delay(6);
  }
  for( int i = max; i >= min; i-=1 ){
    sv.writeMicroseconds(i);
    delay(6);
  }
}
