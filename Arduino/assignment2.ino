//Irfan Karmali 
// Arduino Assignment 2 


/* The goal of the experiment is to control the brightness
    of the LED light. 
*/

const int ledPin = 9 ; 

void setup() {
  Serial.begin(9600); //initialize serial communication 
  pinMode (ledPin, OUTPUT); // initializing ledPin as an Output 
}

void loop () {
  byte brightness; // initializing a new variable 

  if (Serial.available()) //check to see if data has been sent from computer 
  {
    brightness = Serial.read(); // this will read a byte between 0 to 255
    analogWrite(ledPin, brigthness); // sets the brightness of the LED 

  }

}