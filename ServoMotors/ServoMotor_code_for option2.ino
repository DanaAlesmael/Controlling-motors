#include <Servo.h>

//initializing parameter type servo to control each 
Servo motor1; 
Servo motor2; 

// defining the analog pins for potentiometer
//int pin1 = A2; 
int pin1 = A1; 

int readPB = 0; 
int readPB2 = 0;
  
//parameter to store the analog reading 
int sensorvalue1;
//int sensorvalue2;

void setup()
{
 Serial.begin(9600);
 //defining where each servo attaches to
 motor1.attach(10);
 motor2.attach(11);
 pinMode(7, INPUT);
 pinMode(8, INPUT);
}

void loop()
{
 sensorvalue1 = analogRead(pin1); 
 sensorvalue1= map(sensorvalue1, 0,1023,0,180); 

 readPB = digitalRead(7);
 readPB2 = digitalRead(8);
 if (readPB == HIGH)
 {
  motor1.write(sensorvalue1);
  motor2.write(10); // just to test if the code is working with this or not 
 }
 if (readPB2 == HIGH)
 {
  motor2.write(sensorvalue1);
  motor1.write(10);
 } 
 delay(15);
}
 