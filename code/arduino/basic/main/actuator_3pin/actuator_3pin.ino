#include <Servo.h>
Servo actuator;
 int stroke;
 
void setup() {
  actuator.attach(7);
  actuator.write(stroke);
}

void loop() 
{ 
 
 // scan from 0 to 180 degrees
  for(stroke = 0;stroke < 200; stroke++)  
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
}
