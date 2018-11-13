int DO = 2;
int music =A0;
int sensorVal=0;
//#define numOfPins 14
//int[] pins = [numOfPins];
//int[] threshold = [numOfPins];
//for (int i = 0, i < size(pins), i++) {pins[i] = i;}
//for (int i = 0, i < size(threshold), i++) {pinis[i] = i*5+10;}
void setup() {
  // put your setup code here, to run once:
  //for (int i = 0, i < size(pins), i++) {pinMode(pins[i], OUTPUT);}
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
//Serial.print("Digital: ");
  //Serial.println(digitalRead(DO));  //Print the digital value
  // put your main code here, to run repeatedly:
  //for (int i = 0, i < size(pins), i++){
  //if (sensorVal > threshold[i]) {digitalWrite(pins[i], HIGH)};
  //else {digitalWrite(pins[i], LOW)}
  //}
sensorVal= analogRead(music);
Serial.print(sensorVal);

if(sensorVal>10){
  digitalWrite(0,HIGH);
}else{
digitalWrite(0,LOW);
}
if(sensorVal>15){
  digitalWrite(1,HIGH);
}else{
digitalWrite(1,LOW);
}
if(sensorVal>20){
  digitalWrite(2,HIGH);
}else{
digitalWrite(2,LOW);
}
if(sensorVal>25){
  digitalWrite(3,HIGH);
}else{
digitalWrite(3,LOW);
}
if(sensorVal>30){
  digitalWrite(4,HIGH);
}else{
digitalWrite(4,LOW);
}
if(sensorVal>35){
  digitalWrite(5,HIGH);
}else{
digitalWrite(5,LOW);
}
if(sensorVal>45){
  digitalWrite(6,HIGH);
}else{
digitalWrite(6,LOW);
}
if(sensorVal>50){
  digitalWrite(7,HIGH);
}else{
digitalWrite(7,LOW);
}
if(sensorVal>55){
  digitalWrite(8,HIGH);
}else{
digitalWrite(8,LOW);
}
if(sensorVal>60){
  digitalWrite(9,HIGH);
}else{
digitalWrite(9,LOW);
}
if(sensorVal>65){
  digitalWrite(10,HIGH);
}else{
digitalWrite(10,LOW);
}
if(sensorVal>70){
  digitalWrite(11,HIGH);
}else{
digitalWrite(11,LOW);
}
if(sensorVal>75){
  digitalWrite(12,HIGH);
}else{
digitalWrite(12,LOW);
}
if(sensorVal>80){
  digitalWrite(13,HIGH);
}else{
digitalWrite(13,LOW);
}
}



