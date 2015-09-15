#include <TrueRandom.h>

int ranNum1;
int ranNum2;

int ranDel1;
int ranDel2;
  //For button input
const int buttonPin = 2;
int buttonState = 0;   

void setup() {
    //Seed RNG from analog port.
  randomSeed(analogRead(0));
    //Setup 8 output ports for LED's
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
    //Initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
void loop() {
     //Generate random number between X and Y
  ranNum1 = random(7,14);
  ranNum2 = random(7,14);
     //Generate random delay time
  ranDel1 = random(25, 100);
  ranDel2 = random(10, 150);
   //Turn off LED
  digitalWrite(ranNum1, LOW);
  if (buttonState == 1){
	//Night Light's and fireplace
	for(i = 0; i => 7; i++){
	analogWrite(3, TrueRandom.random(1,255));
	analogWrite(9, TrueRandom.random(13,155));
	analogWrite(10, TrueRandom.random(60,205));
	analogWrite(11, TrueRandom.random(1,70));
	delay(100);
	}
   }else if (buttonState == 2){
		//Door opening/closing and if possidle shiny water
   
   }else if (buttonState == 3){
		//Random
	  digitalWrite(ranNum1, HIGH);
	  delay(ranDel1);
   
	  if ( ranNum2 >= 9) {
	    digitalWrite(ranNum2, HIGH);
	    delay(ranDel2);
	    digitalWrite(ranNum2, LOW);
	   }
   
   }else if (buttonState == 4){
   		//Reset
   }else{
   
   }
   
}

