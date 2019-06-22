/* Team Robocon
   BITS Pilani */
//Object Following Robot

#define rmotor1 8
#define rmotor2 9
#define lmotor1 10
#define lmotor2 11
#define enablePin 13
void setup()
{
  Serial.begin(9600);    //Initialising serial port
  pinMode(rmotor1,OUTPUT);
  pinMode(rmotor2,OUTPUT);
  pinMode(lmotor1,OUTPUT);  
  pinMode(lmotor2,OUTPUT);
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin,HIGH);


}
void loop()
{
  while(Serial.available())
  {   
          
    int x = Serial.read();    //Reading character from serial port
    x = x-48;                //Converting ASCII code to integer
    if(x==0)    //Forward
    {
      digitalWrite(rmotor1,HIGH);
      digitalWrite(rmotor2,LOW);
      digitalWrite(lmotor1,HIGH);
      digitalWrite(lmotor2,LOW);
      delay(150);
    }
    else if(x==1)    //Backward
    {
      digitalWrite(rmotor1,LOW);
      digitalWrite(rmotor2,HIGH);
      digitalWrite(lmotor1,LOW);
      digitalWrite(lmotor2,HIGH);
      delay(150);
    }
    else if(x==2)    //Right
    {
      digitalWrite(rmotor1,LOW);
      digitalWrite(rmotor2,LOW);
      digitalWrite(lmotor1,HIGH);
      digitalWrite(lmotor2,LOW);
      delay(50);
    }
    else if(x==3)    //Left
    {
      digitalWrite(rmotor1,HIGH);
      digitalWrite(rmotor2,LOW);
      digitalWrite(lmotor1,LOW);
      digitalWrite(lmotor2,LOW);
      delay(50);
    }  
      //Ideal
      digitalWrite(rmotor1,LOW);
      digitalWrite(rmotor2,LOW);
      digitalWrite(lmotor1,LOW);
      digitalWrite(lmotor2,LOW);
      delay(150);
  }
}

