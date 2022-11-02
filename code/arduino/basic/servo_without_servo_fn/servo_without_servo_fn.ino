int pwm =6;  // pwm [pin
int angle=250;    //75 to 250


void setup() {
  pinMode(pwm,OUTPUT); //md10c   of no use


 
  
}

void loop() {
  
                                 
     
     if( angle > 75)    
  {                                
    analogWrite(pwm,angle);  
    angle--;        
    delay(15);       
  }                


}
