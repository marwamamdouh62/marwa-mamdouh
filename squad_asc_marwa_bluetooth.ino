//motor 1 pins
#define mpositive1 5
#define mnegative1 6
//motor 2
#define mpositive2 10
#define mnegative2 11
char R;
void stopstate() //in case no button is pushed so all output is low
{
  digitalWrite(mpositive1,LOW);
  digitalWrite(mnegative1,LOW);
  digitalWrite(mpositive2,LOW);
  digitalWrite(mnegative2,LOW);
  }
void forwardstate(){
   digitalWrite(mpositive1,HIGH);
   digitalWrite(mnegative1,LOW);
   digitalWrite(mpositive2,HIGH);
   digitalWrite(mnegative2,LOW);
  }
void backstate(){
   digitalWrite(mpositive1,LOW);
   digitalWrite(mnegative1,HIGH);
   digitalWrite(mpositive2,LOW);
   digitalWrite(mnegative2,HIGH);
  }
void rightstate(){
   digitalWrite(mpositive1,LOW);
   digitalWrite(mnegative1,LOW);
   digitalWrite(mpositive2,HIGH);
   digitalWrite(mnegative2,LOW);
  }
void leftstate(){
   digitalWrite(mpositive1,LOW);
   digitalWrite(mnegative1,HIGH);
   digitalWrite(mpositive2,LOW);
   digitalWrite(mnegative2,LOW);
  }
  void setup() {
 Serial.begin(9600);
 //output pins of motors
  pinMode(mpositive1,OUTPUT);
  pinMode(mnegative1,OUTPUT);
  pinMode(mpositive2,OUTPUT);
  pinMode(mnegative2,OUTPUT);
 //initialize mtor in stop state
 stopstate();}
 void loop() { 
  if (Serial.available()>0){
    R=Serial.read();
    switch(R){
      case 'F':forwardstate();
      break;
      case 'B':backstate();
      break;
      case 'R':rightstate();
      break;
      case 'L':leftstate();
      break;
      case 'S':stopstate();
      break;}
    }
 }
