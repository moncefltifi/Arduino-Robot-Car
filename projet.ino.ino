char cmd;
const int leftMotorForward=2;
const int leftMotorBackward=3;
const int rightMotorForward=4;
const int rightMotorBackward=5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(leftMotorForward,OUTPUT);
  pinMode(leftMotorBackward,OUTPUT);
  pinMode(rightMotorForward,OUTPUT);
  pinMode(rightMotorBackward,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    cmd = Serial.read(); // Declare 'command' here
    Serial.println(cmd);
    
  }
  if(cmd=='F'){
   digitalWrite(leftMotorForward,HIGH); 
   digitalWrite(rightMotorForward,HIGH);
  }
  else if(cmd=='B'){
   digitalWrite(leftMotorBackward,HIGH); 
   digitalWrite(rightMotorBackward,HIGH);
  }   
  else if(cmd=='L'){
   digitalWrite(rightMotorForward,HIGH); 
  }
  else if(cmd=='R'){
   digitalWrite(leftMotorForward,HIGH);
  }
  else{
   digitalWrite(leftMotorForward,LOW); 
   digitalWrite(leftMotorBackward,LOW);
   digitalWrite(rightMotorForward,LOW); 
   digitalWrite(rightMotorBackward,LOW);
  }
  delay(50);
}