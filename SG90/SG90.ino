#include <Servo.h>

Servo servo; 

int servoPin = 9;

void setup()
{
  servo.attach(servoPin);  
}

void loop()
{
   servo.write(45);      // Turn 45 degrees
   delay(1000);          // Wait 1 second
   servo.write(90);      // Turn 90 degrees (center position)
   delay(1000);          // Wait 1 second
   servo.write(135);     // Turn 135 degrees
   delay(1000);          // Wait 1 second
   servo.write(90);      // Turn 90 degrees (center position)
   delay(1000);          // Wait 1 second
}
