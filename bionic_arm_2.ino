#include <Servo.h>

#include <Servo.h> 
Servo myservo0;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
void setup()
{
  Serial.begin(9600);
  myservo0.attach(3);
  myservo1.attach(5);
  myservo2.attach(6);
  myservo3.attach(9);
  myservo4.attach(10);
  
    myservo0.write(0); 
    myservo1.write(0); 
    myservo2.write(0); 
    myservo3.write(0); 
    myservo4.write(0); 
    delay(500);
    
  
  
}
void loop()
{
  int val0 = analogRead(A0);
  int val1= analogRead(A1);
  int val2 = analogRead(A2);
  int val3 = analogRead(A3);
  int val4 = analogRead(A4);
  
  Serial.print(val0);
  Serial.print(" ");
  
  Serial.print(val1);
  Serial.print(" ");
  Serial.print(val2);
  Serial.print(" ");
  Serial.print(val3);
  Serial.print(" ");
  Serial.print(val4);
  Serial.println(" ");

if(val0 <125)
  {
    myservo0.write(180);              // tell servo to go to position in variable 'pos' 
  delay(500);
  
  }
 else if(val1 <110)
  {
    myservo1.write(180);              // tell servo to go to position in variable 'pos' 
  delay(500);
  }
   else if(val2 <120)
  {
    myservo2.write(180);              // tell servo to go to position in variable 'pos' 
  delay(500);
  }
  else  if(val3 <90)
  {
    myservo3.write(180);              // tell servo to go to position in variable 'pos' 
  delay(500);
  }
  else if(val4 <155)
  {
    myservo4.write(180);              // tell servo to go to position in variable 'pos' 
  delay(500);
  }
  
  else
  {
    
    myservo0.write(0); 
    myservo1.write(0); 
    myservo2.write(0); 
    myservo3.write(0); 
    myservo4.write(0); 
    delay(500);
    
  
  }
 
}
