#define led1 5
#define led2 2
#define led3 3
#define led4 4


#define pinY    A2  // ось X джойстика
#define pinX    A1  // ось Y джойстика
#define swPin    12  // кнопка джойстика
#define ledPin  13  // светодиод на Pin 13

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  
  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
}
 
void loop() {
  boolean ledState = digitalRead(swPin); // считываем состояние кнопки
  digitalWrite(ledPin, ledState);        // вкл./выкл. светодиод

  int X = analogRead(pinX);              // считываем значение оси Х
  int Y = analogRead(pinY);              // считываем значение оси Y

  Serial.print(X);                       // выводим в Serial Monitor
  Serial.print("\t");                    // табуляция
  Serial.println(Y);

  if (X > 600 && Y > 600) { //верх право
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, HIGH); 
  }
  else if (X == 0 && Y > 600) { //верх лево
    digitalWrite(led1, LOW); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW); 
  }
    else if (X > 600 && Y == 0){ //низ лево
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW); 
  }
  else if (X == 0 && Y == 0) { //низ право
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW); 
  }
  else if (X >= 100 && X <= 500 && Y == 0) { //НИЗ
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW); 
  }
  else if (X >= 100 && X <= 500 && Y >= 600) { //ВЕРХ
    digitalWrite(led1, LOW); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, HIGH); 
  }
  else if (Y >= 100 && Y <= 500 && X == 0) { //ЛЕВО
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW); 
  }
  else if (Y >= 100 && Y <= 500 && X >= 600) { //ЛЕВО
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
  }
  else {
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW); 
  }


}
