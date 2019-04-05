#include <Servo.h>
Servo servo1;
Servo servo2;
int x_key = A0;                                               
int y_key = A1;                                               
int x_pos;
int y_pos;
int servo1_pin = 9;
int servo2_pin = 8;
int led1 = 5;

int led2 = 7;
  
int initial_position = 90;
int initial_position1 = 90;

void setup ( ) {
Serial.begin (9600) ;
servo1.attach (servo1_pin ) ;  
servo1.write (initial_position);

servo2.attach (servo2_pin ) ;  
servo2.write (initial_position);
pinMode (x_key, INPUT) ;                     
pinMode (y_key, INPUT) ; 

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop ( ) {
x_pos = analogRead (x_key) ;  
y_pos = analogRead (y_key) ;                      

if (x_pos < 300){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
if (initial_position < 10) { 
  } 
else{ initial_position = initial_position - 50;
servo1.write ( initial_position ) ; 
delay (100) ; 
} 
} 
if (x_pos > 700){
if (initial_position > 180)
{  
}  
else{
initial_position = initial_position + 50;
servo1.write ( initial_position ) ;
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);

delay (100) ;
}
}

if (y_pos < 300){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
if (initial_position1 < 10) { 
  }
else{ initial_position1 = initial_position1 - 50;
servo2.write ( initial_position1 ) ;
delay (100) ; 
}
}
if (y_pos > 700){
if (initial_position1 > 180)
{  
}        
else{
initial_position1 = initial_position1 + 50;
servo2.write ( initial_position1 ) ;
delay (100) ;
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
}
}
}



