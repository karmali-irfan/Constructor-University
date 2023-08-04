//Irfan Karmali 
// Arduino - Assignment 4


/* The goal of this experiment was to program the LED to turn on as soon 
    as the LDR detects low light. The LDR was connected at A0 and the LED was
    connected at 10. The program was written such that when the resistance in the 
    LDR reaches below 650 the LED would turn on.
 */

const int ledPin = 10; //The LED light
int input_pin = A0; // The LDR resistor 
int sensor_sample = 0 ; //initializing and declaring a variable 

void setup () {
  Serial.begin(9600); 
  pinMode (ledPin, OUTPUT); // declaring pinMode for the LED 
}

void loop () {
  // reading the value of the LDR and assigning it to the variable
  sensor_sample = analogRead(input_pin); 
  //Funtions to print the value of the LDR 
  Serial.print("The value is "); 
  Serial.println(sensor_sample); 

  //when the LDR value is below 650
  if (sensor_sample < 650){ 
    digitalWrite (ledPin, HIGH); //switch on the LED 
  }
  //when the LDR value is above 650
  else {
    digitalWrite (ledPin, LOW); //switch off the LED 
  }
  delay (50);
}

