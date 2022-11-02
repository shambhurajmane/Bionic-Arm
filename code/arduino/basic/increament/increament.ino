int pwm = 9;  // pwm [pin
int dir =8;   // normal pin

void setup() {
  pinMode(pwm,OUTPUT); //md10c
  pinMode(dir,OUTPUT);  //md100

}

void loop() {
  int pwm_value=0;
  digitalWrite(dir,HIGH);      // clockwise rotation
  
  for(pwm_value=0;pwm_value<256;pwm_value++){
    analogWrite(pwm,pwm_value);                               //increase PWM in every 0.1 sec
    delay(100);
  }

}
