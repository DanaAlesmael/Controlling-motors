//Defining servo’s library
#include <Servo.h>

//initializing parameter type servo to control each 
Servo motor1; 
Servo motor2; 

// defining the analog pins for potentiometer
int pin1 = A2; 
int pin2 = A1; 

//parameter to store the analog reading 
int sensorvalue1;
int sensorvalue2;

void setup()
{
 Serial.begin(9600);
 //defining where each servo attaches to
 motor1.attach(10);
 motor2.attach(11);
}

void loop()
{
  //reading values from 2 potentiometers
 sensorvalue1= analogRead(pin1); 
 sensorvalue2= analogRead(pin2); 

 //Map the reading to 180 max because it has only 2 movement clock/counter clock wise. 
 sensorvalue1= map(sensorvalue1, 0,1023,0,180); 
//printing just to see how the values vary when potentiometer changes
 Serial.println(sensorvalue1); 
 // setting servo position according to the reading
 motor1.write(sensorvalue1);
delay(10); 
  
 sensorvalue2= map(sensorvalue2, 0,1023,0,180); 
 Serial.println(sensorvalue2);
 motor2.write(sensorvalue2);
 delay(10); 
}
