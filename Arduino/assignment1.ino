//Irfan Karmali 
// Arduino - Assignment 1


/* The goal of this experiment was to make the LED light continuosly blink*/


void setup() {
  pinMode(13, OUTPUT); // setting a pinMode 

}

void loop() {
  //Program to continously switch on and off an LED light 

  digitalWrite(13, HIGH); //switches on the LED light 
  delay(1000);            // 1 sec delay 
  digitalWrite(13, LOW); //switches off the LED light 
  delay(1000);            // 1 sec delay
}
