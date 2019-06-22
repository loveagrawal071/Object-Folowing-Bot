#define rmotor1 8
#define rmotor2 9
#define lmotor1 10
#define lmotor2 11
void setup() {
  pinMode(rmotor1,OUTPUT);
  pinMode(rmotor2,OUTPUT);
  pinMode(lmotor1,OUTPUT);
  pinMode(lmotor2,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly: 
digitalWrite(rmotor1,HIGH);
digitalWrite(rmotor2,LOW);
digitalWrite(lmotor1,HIGH);
digitalWrite(lmotor2,LOW);

}
