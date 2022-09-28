#define bforward 2
#define bbackward 3
#define bright 7
#define bleft 8
//motor 1 pins
#define mpositive1 5
#define mnegative1 6
//motor 2
#define mpositive2 10
#define mnegative2 11
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
  //input buttons
 pinMode(bforward,INPUT);
 pinMode(bbackward,INPUT);
 pinMode(bright,INPUT);
 pinMode(bleft,INPUT);
 Serial.begin(9600);
 //output pins of motors
  pinMode(mpositive1,OUTPUT);
  pinMode(mnegative1,OUTPUT);
  pinMode(mpositive2,OUTPUT);
  pinMode(mnegative2,OUTPUT);
 //initialize mtor in stop state
 stopstate();
}
void loop() {
 if (digitalRead(bforward)==HIGH){
  Serial.print("forward");
  delay(250);
  forwardstate(); }
 else if(digitalRead(bbackward)==HIGH){
   Serial.print("backward");
   delay(250);
   backstate(); }
  else if(digitalRead(bright)==HIGH){
    Serial.print("right");
    delay(250);
    rightstate(); }
   else if(digitalRead(bleft)==HIGH){
    Serial.print("left");
    delay(250);
    leftstate(); }
    else{
    delay(250);
    stopstate();}}
