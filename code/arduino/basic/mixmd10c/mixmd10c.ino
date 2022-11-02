int pwm = 9;  // pwm [pin
int dir =8;   // normal pin


void setup() {
  pinMode(pwm,OUTPUT); //md10c   of no use
  pinMode(dir,OUTPUT);  //md100

 
  
}

void loop() {
  int pwm_value=120;
  digitalWrite(dir,LOW);      // lower the stroke

  
    analogWrite(pwm,pwm_value);                               //increase PWM in every 0.1 sec


}
