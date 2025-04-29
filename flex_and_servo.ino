#include <Servo.h> 
Servo myservo;
int pos = 0;
int sensor=A0;
int X=0;
void setup() 
{ 
 pinMode(A0,INPUT);
 myservo.attach(9);  
} 
void loop()
{ 
  X = digitalRead(A0);
 if(A0==HIGH)
 {
  for(pos = 0; pos < 180; pos += 1)  
  {                                 
    myservo.write(pos);              
    delay(15);                      
  } 
 }
 else
  {for(pos = 180; pos>=1; pos-=1)     
  {                                
    myservo.write(pos);              
    delay(15);          
  } }
}
