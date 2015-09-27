#include <TrueRandom.h>

#include <Servo.h>

Servo myservo; 

int pos = 0;

void setup() {
    //Seed RNG from analog port.
  randomSeed(analogRead(0));
  myservo.attach(2);
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
   myservo.write(200);// tell servo to go to position in variable 'pos'
   analogWrite(3, TrueRandom.random(60,205));  
   analogWrite(5, TrueRandom.random(60,205));
   analogWrite(6, TrueRandom.random(15,70)); 
   delay(5);                       // waits 15ms for the servo to reach the position
  }
 for (pos = 90; pos >= 0; pos -= 1) {
    myservo.write(200);
    // tell servo to go to position in variable 'pos'
    analogWrite(3, TrueRandom.random(60,205));  
    analogWrite(5, TrueRandom.random(60,205));
    analogWrite(6, TrueRandom.random(15,70)); 
    delay(5);                     
  }
}

