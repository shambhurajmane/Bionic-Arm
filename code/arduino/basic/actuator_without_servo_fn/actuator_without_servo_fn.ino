int pwm =9;  // pwm [pin 
int angle=200;   //75 to 250


void setup() {
  pinMode(pwm,OUTPUT); 


 
  
}

void loop() {
  
                               
     
    if( angle <200)    
  {                                
    analogWrite(pwm,angle);  
    angle++;        
    delay(15);       
  }              


}
