int enA =9;
int enB =3;
void setup() {
  // put your setup code here, to run once:
  pinMode(enA,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    analogWrite(enA,250);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    analogWrite(enB,250);
   digitalWrite(5,LOW);
   digitalWrite(4,HIGH);

    delay(20000);
}
