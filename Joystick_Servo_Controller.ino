//Hrag Bankian
//40245363
//MIAE 215
//Arduino Project

#include <Servo.h> //includes servo objects library

Servo servo1; //declare servo
Servo servo2; //declare servo

int X = 0; //variable for joystick readings (x axis)
int Y = 1; //variable for joystick readings (y axis)
int value; //variable for joystick value

void setup()
{
  servo1.attach(3); //connects servo to pin 3
  servo2.attach(5); //connects servo to pin 5
}

void loop()
{
  //for int X (x axis)
  value = analogRead(X); //reads the value (0-1023) of the joystick
  value = map (value, 0, 1023, 0, 180); //changes the value range of the joystick from 0-1023 to 0-180
  servo1.write(value); //positions the servo based on the joystick value

//repeat same steps as above (line 19-21) for int Y (y axis)
  value = analogRead(Y);
  value = map (value, 0, 1023, 0, 180);
  servo2.write(value);
}