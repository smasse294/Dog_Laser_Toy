/*  Dog Laser Toy

    Dog Laser Toy © 2021 by Shawn J. Masse is licensed under Attribution-ShareAlike 4.0 International 
    
    A simple program to move a laser pointer on a Pan/Tilt mount for dogs to chase for enricment
    
    V1.0 - Initial Commit:  July 2021
*/

//Variables - Global
int xmove;
int ymove;
int nmoves;
int bcount;

//Pin Assignment
const int buzzer = 13;                
const int xservopin = 9;             
const int yservopin = 11;           
const int moveset = A6;               //Pin for Pot to adjust the number of moves
const int standbyled = 10;            
const int standbypin = 6;             //Pin for a Standby Button
const int laserpin = A1;              //Pin for powering the Laser Pointer

//Setttings
const int movesperbeep = 5;           //Number of Moves per Beep
const int movelimit = 0;              //Number of Moves for a sesson, set to zero to read the pot
const int timebetweenmoves = 1000;
const int xminlimit = 0;              //number of degrees the servos can move in each axis.  90 degrees is center
const int xmaxlimit = 180;            //adjust to control the limits of the servo and therefore when the pointer can and cannot go
const int yminlimit = 0;
const int ymaxlimit = 0;

//Establishing the Servos to Control
#include <Servo.h>
Servo xservo;
Servo yservo;

void setup() {
  randomSeed(analogRead(0));          //Random Function for the moves
  xservo.attach(xservopin);           //attaching the Servos
  yservo.attach(yservopin);
  if(movelimit==0){                   //Reading the Pot if movelimit is Zero
    pinMode(moveset, INPUT);
    nmoves = (analogRead(moveset)/3);
  }
  if(movelimit !=0)                   //Reading the setting if movelimit is not Zero
    nmoves = movelimit;
  bcount = movesperbeep;
  pinMode(standbyled, OUTPUT);        //Inititating the Pins
  digitalWrite(standbyled, LOW);
  pinMode(standbypin, INPUT_PULLUP);
  pinMode(laserpin, OUTPUT);
  digitalWrite(laserpin, HIGH);
  }

void loop() {
  if(bcount==0){                    //Triggering a Beep
    beep();
    delay(timebetweenmoves-250);    
  }
  if(nmoves>0){                   //Triggering the Servos to Move
    movexy();
    delay(timebetweenmoves);
  }
  if(nmoves<=0){                  //Triggering Sandby
    standby();
  }
  if(digitalRead(standbypin == LOW)){
    standby();
  }
}

void movexy(){                //Function of Moving the Motors
  xmove = random(xminlimit,xmaxlimit);        
  ymove = random(yminlimit,ymaxlimit);       
  xservo.write(xmove);
  yservo.write(ymove);
  nmoves--;
  bcount--;  
}

void beep(){                  //Function to beep (and reset the moves to beep (bcount))
  bcount = movesperbeep;
  tone(buzzer, 1000);
  delay (250);
  noTone(buzzer);
}

void standby(){             //Triggering standby
  xservo.detach();
  yservo.detach();
  nmoves=0;
  bcount=-1;
  digitalWrite(standbyled, HIGH);
  digitalWrite(laserpin, LOW);
}
