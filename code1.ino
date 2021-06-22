#include <Servo.h> 

int servoPin = 3;
 
Servo myservo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  myservo.attach(servoPin); 
} 
 
 
void loop() 
{ 
  // scan from 0 to 90 degrees
  for(angle = 0; angle < 90; angle++)  
  {                                  
    myservo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 90 to 0 degrees
  for(angle = 90; angle > 0; angle--)    
  {                                
    myservo.write(angle);           
    delay(15);       
  } 
} 
