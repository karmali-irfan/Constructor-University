//Irfan Karmali 
// Arduino - Assignment 3


/* The goal of this experiment was to use a button to switch the LED light on and off. 
    This experiment Turns on and off a light emitting diode(LED) connected to digital pin 13, 
    when pressing a pushbutton attached to pin 2.
*/


const int ledPin = 2; // assignning a number to the ledPin
const int buttonPin = 13; // assigning a number to the button

int buttonState = 0;  // variable to read the buttonState 

void setup () {
  pinMode(ledPin, OUTPUT); //initialize LED pin as an output 
  pinMode(buttonPin, INPUT);  //initialize Button as an input 
}

void loop () {
  buttonState = digitalRead(buttonPin); // reading the state of the buttonPin

  if (buttonPin == HIGH) { // when the button is switched on 
    digitalWrite (ledPin, HIGH);  // turn LED on
  }
  else { // when the button is switched off 
    digitalWrite (ledPin, LOW); // turn LED off
  }
}