
#include <Servo.h>
Servo myservo;// create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
int potpin = 0;// analog pin used to connect the potentiometer
int potpin2 = 2;
int potpin3 = 3;
int potpin4 = 4;
int potpin5 = 5;

int val; // variable to read the value from the analog pin
int val2;
int val3;
int val4;
int val5;


void setup()
{
 myservo.attach(8); // attaches the servo on pin to the servo object
 myservo2.attach(5);
 myservo3.attach(4);
 myservo4.attach(3);
 myservo5.attach(2);
}
void loop()
{
 val = analogRead(potpin);   // reads the value of the
          // potentiometer (value between
          // 0 and 1023)
 val = map(val, 0, 1023, 0, 90);  // scale it to use it with
          // the servo (value between 0 and
          // 180)
 myservo.write(val);     // sets the servo position according
          // to the scaled value
 delay(15);       // waits for the servo to get there
  
   val2 = analogRead(potpin2);   // reads the value of the
          // potentiometer (value between
          // 0 and 1023)
 val2 = map(val2, 0, 1023, 0, 90);  // scale it to use it with
          // the servo (value between 0 and
          // 180)
 myservo2.write(val2);     // sets the servo position according
          // to the scaled value
 delay(15);       // waits for the servo to get there
  
   val3 = analogRead(potpin3);   // reads the value of the
          // potentiometer (value between
          // 0 and 1023)
 val = map(val3, 0, 1023, 0, 90);  // scale it to use it with
          // the servo (value between 0 and
          // 180)
 myservo3.write(val3);     // sets the servo position according
          // to the scaled value
 delay(15);       // waits for the servo to get there
  
   val4 = analogRead(potpin4);   // reads the value of the
          // potentiometer (value between
          // 0 and 1023)
 val4 = map(val4, 0, 1023, 0, 90);  // scale it to use it with
          // the servo (value between 0 and
          // 180)
 myservo4.write(val4);     // sets the servo position according
          // to the scaled value
 delay(15);       // waits for the servo to get there
 
   val5 = analogRead(potpin5);   // reads the value of the
          // potentiometer (value between
          // 0 and 1023)
 val5 = map(val5, 0, 1023, 0, 90);  // scale it to use it with
          // the servo (value between 0 and
          // 180)
 myservo5.write(val5);     // sets the servo position according
          // to the scaled value
 delay(15);       // waits for the servo to get there
}