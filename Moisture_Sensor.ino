#include <Servo.h>
Servo motor;
int sensor = A0;
int motorPin = 9;

void setup(){
 
 // pinMode(motorPin, OUTPUT);
  motor.attach(9);
  Serial.begin(9600);
}

void loop(){
  int sensedValue = analogRead(sensor);
    Serial.println("Value: " +String(sensedValue));
  if(sensedValue>800){
    for(int i = 0; i <= 180; i++){
      motor.write(i);
     delay(10);
    }
    for(int i = 180; i >= 0; i--){
   
      motor.write(i);
      delay(10);
    }
  }
  

  delay(100);
}
