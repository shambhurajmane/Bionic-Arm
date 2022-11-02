 #include <Servo.h> 

Servo thumb2;
Servo middle2;
Servo ring2;
Servo little2;
//Servo thumb_pp;
int pos;
int thumb=2;//pq
int thumb_d=22;

int index=5;//pq
int index_d=26;
int index_u=4;//pq
int index_ud=24;
int middle=6;//pq
int middle_d=28;
 
int ring=7;//pq


int little=8;//pq

int little_ser=9;//pwm
int thumb_s=12;//pwm
int middle_ser=10;//pwm
int ring_ser=11;//pwm

#define in1 30
#define in2 32
#define in3 34
#define in4 36

void setup() {
  // put your setup code here, to run once:
pinMode(thumb, OUTPUT);
Serial.begin(9600);
pinMode(thumb_d, OUTPUT);
pinMode(thumb_s, OUTPUT);
pinMode(index_d, OUTPUT);
pinMode(index_u, OUTPUT);
pinMode(index_ud, OUTPUT);
pinMode(middle_d, OUTPUT);
pinMode(middle_ser, OUTPUT);
pinMode(ring, OUTPUT);
//pinMode(ring_d, OUTPUT);
pinMode(ring_ser, OUTPUT);
pinMode(little, OUTPUT);
//pinMode(little_d, OUTPUT);
//Serial.begin(9600);
pinMode(little_ser, OUTPUT);
thumb2.attach(12);
middle2.attach(10);
ring2.attach(11);
little2.attach(9);
//thumb_2.attach(12)
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

void loop() 
{
  
//digitalWrite(thumb_d,LOW);
digitalWrite(thumb_d,HIGH);
  ///
//digitalWrite(index_ud,LOW);
digitalWrite(index_ud,HIGH);
 ///
//digitalWrite(index_d,LOW);
digitalWrite(index_d,HIGH);
  ///
//digitalWrite(middle_d,LOW);
digitalWrite(middle_d,HIGH);
  ///


//HIGH RETRACT LOW UP(A+,B-)
analogWrite(thumb,250);
//
analogWrite(index_u,250);
//
analogWrite(index,250);
//
analogWrite(middle,250);
//

//

    //digitalWrite(in1, LOW);///UP
    //digitalWrite(in2, HIGH);///UP
   digitalWrite(in1, HIGH);///DOWN
    digitalWrite(in2, LOW);///DOWN
    analogWrite(ring,250);
    //
    //digitalWrite(in3, LOW);//UP
    //digitalWrite(in4, HIGH);//UP
    digitalWrite(in3, HIGH);//DOWN
    digitalWrite(in4, LOW);//DOWN
    analogWrite(little, 250);





thumb2.writeMicroseconds(2000);
middle2.writeMicroseconds(2000);
ring2.writeMicroseconds(2000);
little2.writeMicroseconds(2000);
while(1);
}
