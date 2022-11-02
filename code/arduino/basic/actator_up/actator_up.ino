int thumb =2; //analog pin
int pwm = 9;  // pwm [pin
int dir =8;   // normal pin

void setup() {
  pinMode(thumb, OUTPUT);
  Serial.begin(9600);
  pinMode(pwm,OUTPUT); //md10c
  pinMode(dir,OUTPUT);  //md100

}

void loop() {
  int pwm_value=100;
  digitalWrite(dir,HIGH);      // clockwise rotation
    analogWrite(pwm,pwm_value);                                 
  analogWrite(thumb,10);
}
