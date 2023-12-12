/*
  digitalWrite(3, LOW); //центр
  digitalWrite(4, LOW); //верх-лево
  digitalWrite(5, LOW); //верх
  digitalWrite(6, LOW); //верх-право
  digitalWrite(7, LOW); //низ-лево
  digitalWrite(8, LOW); //низ
  digitalWrite(9, LOW); //низ-право
  */

void one() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, HIGH);}
  digitalWrite(6, LOW); //верх-право
  digitalWrite(9, LOW); //низ-право
  }

void two() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, HIGH);}
  digitalWrite(3, LOW); //центр
  digitalWrite(5, LOW); //верх
  digitalWrite(6, LOW); //верх-право
  digitalWrite(7, LOW); //низ-лево
  digitalWrite(8, LOW); //низ
  }

void three() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
digitalWrite(7, HIGH); //низ-лево
digitalWrite(4, HIGH); //верх-лево
digitalWrite(10, HIGH); //верх-лево
}
void four() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
digitalWrite(5, HIGH); //верх
digitalWrite(7, HIGH); //низ-лево
digitalWrite(8, HIGH); //низ
digitalWrite(10, HIGH); //верх-лево
}
void five() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, HIGH);}
  digitalWrite(3, LOW); //центр
  digitalWrite(4, LOW); //верх-лево
  digitalWrite(5, LOW); //верх
  digitalWrite(9, LOW); //низ-лево
  digitalWrite(8, LOW); //низ
}
void six() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
  digitalWrite(6, HIGH); //верх-право
  digitalWrite(10, HIGH); 
}
void seven() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, HIGH);}
  digitalWrite(5, LOW); //верх
  digitalWrite(6, LOW); //верх-право
  digitalWrite(9, LOW); //низ-право
}
void eight() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
  digitalWrite(10, HIGH); 
}
void nine() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
  digitalWrite(7, HIGH); //низ-лево
  digitalWrite(10, HIGH); 

}
void zero() {
  for (int i = 3; i<=10; i++){
  digitalWrite(i, LOW);}
digitalWrite(3, HIGH); //центр
digitalWrite(10, HIGH);
}




void setup() {
  for (int i = 2; i<=13; i++){
  pinMode(i, OUTPUT);
  digitalWrite(2, HIGH);}
  digitalWrite(13, HIGH);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  if (val == 0){zero();}
  else if (val <= 1023/10*1){one();}
  else if (val <= 1023/10*2){two();}
  else if (val <= 1023/10*3){three();}
  else if (val <= 1023/10*4){four();}
  else if (val <= 1023/10*5){five();}
  else if (val <= 1023/10*6){six();}
  else if (val <= 1023/10*7){seven();}
  else if (val <= 1023/10*8){eight();}
  else if (val <= 2000){nine();}
  else {for (int i = 3; i<=10; i++){digitalWrite(i, HIGH);}
  }
}
