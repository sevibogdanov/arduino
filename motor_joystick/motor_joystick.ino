// порты для подключения модуля ULN2003 к Arduino
#define in1 8
#define in2 9
#define in3 10
#define in4 11
#define pinY    A1  // ось X джойстика
#define pinX    A2  // ось Y джойстика

void right_turn(int dl){
  digitalWrite(in1, HIGH); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH);
    delay(dl);

    digitalWrite(in1, HIGH); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW);
    delay(dl);

    digitalWrite(in1, LOW); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW);
    delay(dl);

    digitalWrite(in1, LOW); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH);
    delay(dl);
}

void left_turn(int dl){

    digitalWrite(in1, LOW); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH);
    delay(dl);
    digitalWrite(in1, LOW); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW);
    delay(dl);
    digitalWrite(in1, HIGH); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW);
    delay(dl);
    digitalWrite(in1, HIGH); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH);
    delay(dl);
}
int dl = 2; // время задержки между импульсами

void setup() {
    Serial.begin(9600);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH); 
}

void loop() {
  
    int X = analogRead(pinX);              // считываем значение оси Х
    Serial.println(X); 
    if (X>=600) {right_turn(dl);}
    else if (X<=100) {left_turn(dl);}
    else {
      digitalWrite(in1, LOW); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW);
    }
}