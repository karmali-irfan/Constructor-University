//Irfan Karmali 
// Arduino - Assignment 6


/* The goal of this experiment was to understand the basic 
    setup and function of the Servomotor. 
*/

#include <Servo.h> 

Servo s ; //creating the servo object

void setup() {
  s.attach(11); //control signal on pin 11 
}

void lopp () {
  //We control the servo by inserting angles in the function below. 
  //The servo is centered at 90 degrees
  s.write(0); 
  delay (1000); 
  s.write(45); 
  delay (1000); 
  s.write(90); 
  delay (1000); 
  s.write(135); 
  delay (1000); 
  s.write(180);
}