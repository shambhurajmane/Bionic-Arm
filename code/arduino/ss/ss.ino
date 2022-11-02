#include <Servo.h>
Servo actuator;
 int stroke;

 Servo servo;
 int angle;
 
void setup() {
  actuator.attach(7);
  actuator.write(stroke);
   servo.attach(8);
  servo.write(angle);
}

void loop() 
{ 
 
 // scan from 0 to 180 degrees
  for(stroke = 0; stroke < 200; stroke++)  
  {                                  
    actuator.write(stroke);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(stroke = 200; stroke >0 ; stroke--)    
  {                                
    actuator.write(stroke);           
    delay(15);       
  }  



  // scan from 0 to 180 degrees
  for(angle = -100; angle < 110; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
 for(angle = 110; angle > -140; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}
