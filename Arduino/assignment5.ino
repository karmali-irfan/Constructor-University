//Irfan Karmali 
// Arduino - Assignment 5


/* The goal of this experiment was to learn the basic uses and set-up of 
    a HC-SR04 distance sensor. A HC-SR04 sensor has a speaker and a 
    microphone. The speaker emits a sound and the microphone records the 
    echo from a nearby object. The duration between emitting the sound 
    and recording it's echo was used to write a program that calculated 
    distance usign the HC-SR04 sensor. 
 */

const int trig = 9; // Trigger for the sound 
const int echo = 10; // Echo from a nearby object 

void setup (){
  pinMode (trig, OUTPUT); //setting the speaker as an OUTPUT
  pinMode (echo, INPUT); //Setting the microphone as an INPUT
  digitalWrite (trig, LOW); 
  Serial.begin(9600);
}

void loop () {
  digitalWrite(trig, HIGH); //switching on the speaker 
  wait(15); // minimum impulse width required for this sensor 
  digitalWrite(trig, LOW); //swithching off the speaker 

  //This function waits until the microphone has received an input 
  long duration = pulseIn(echo, HIGH); 
  
  /* Duration in this case would be the time taken for the sound 
      to travel from the speaker and back to the microphone after
      it gets rebounded by an object. 
  */

  //Assuming an average speed of sound of 340 and 1000 is 
  // simply the scaling factor to get the result in cm 
  long distance = ((duration / 2L) * 340L) / 1000L ;

  if (distance > 500L || distance < 2L){
    println("Invalid Range!"); 
  } 
  else {
    println(distance); 
    println(" cm"); 
  }

  delay(1000);

  
}

