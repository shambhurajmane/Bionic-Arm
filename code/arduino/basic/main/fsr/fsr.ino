int analog=2;  // pwm [pin 
int fsr_reading;   //75 to 250


void setup() {
  Serial.begin(9600);


 
  
}

void loop() {
  
    fsr_reading= analogRead(analog); 
    Serial.print("fsranlog reading =");
    Serial.println(fsr_reading);                  
  delay(100);

}
