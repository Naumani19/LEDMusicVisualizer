int DO = 2;
int music =A0;
int sensorVal=0;
void setup() {
  // put your setup code here, to run once:
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
sensorVal= analogRead(music);
Serial.print(sensorVal);

if(sensorVal>3){
  digitalWrite(0,HIGH);
}else{
digitalWrite(0,LOW);
}
if(sensorVal>4.5){
  digitalWrite(1,HIGH);
}else{
digitalWrite(1,LOW);
}
if(sensorVal>6){
  digitalWrite(2,HIGH);
}else{
digitalWrite(2,LOW);
}
if(sensorVal>7.5){
  digitalWrite(3,HIGH);
}else{
digitalWrite(3,LOW);
}
if(sensorVal>9){
  digitalWrite(4,HIGH);
}else{
digitalWrite(4,LOW);
}
if(sensorVal>10.5){
  digitalWrite(5,HIGH);
}else{
digitalWrite(5,LOW);
}
if(sensorVal>12){
  digitalWrite(6,HIGH);
}else{
digitalWrite(6,LOW);
}
if(sensorVal>13.5){
  digitalWrite(7,HIGH);
}else{
digitalWrite(7,LOW);
}
if(sensorVal>15){
  digitalWrite(8,HIGH);
}else{
digitalWrite(8,LOW);
}
if(sensorVal>16.5){
  digitalWrite(9,HIGH);
}else{
digitalWrite(9,LOW);
}
if(sensorVal>18){
  digitalWrite(10,HIGH);
}else{
digitalWrite(10,LOW);
}
if(sensorVal>19.5){
  digitalWrite(11,HIGH);
}else{
digitalWrite(11,LOW);
}
if(sensorVal>21){
  digitalWrite(12,HIGH);
}else{
digitalWrite(12,LOW);
}
if(sensorVal>22.5){
  digitalWrite(13,HIGH);
}else{
digitalWrite(13,LOW);
}
}



