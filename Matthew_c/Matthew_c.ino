#include <TrueRandom.h>

int ranNum1;
int ranNum2;

int ranDel1;
int ranDel2;

void setup() {
// Seed RNG from analog port.
randomSeed(analogRead(0));
// Setup 8 output ports for LED's
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}
void loop() {
   //Generate random number between X and Y
   ranNum1=random(7,14);
   ranNum2=random(7,14);
   // Generate random delay time
   ranDel1=random(100, 300);
   ranDel2=random(100, 150);
   //Turn on the LED
   digitalWrite(ranNum1, HIGH);
   delay(ranDel1);

   analogWrite(3, TrueRandom.random(1,255));
   
   if ( ranNum2 >= 9) {
     digitalWrite(ranNum2, HIGH);
     delay(ranDel2 + ranDel1);
     digitalWrite(ranNum1, LOW);
   }
   //Turn off the LED
   digitalWrite(ranNum1, LOW);
  
}

