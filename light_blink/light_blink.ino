int ledPin = 13; // объявляем контакт для светодиода
void setup() {
  pinMode(ledPin, OUTPUT); // устанавливаем режим контакта на выход
}

void loop() {
  digitalWrite(ledPin, HIGH); // включаем светодиод
  delay(500); // ждем 0.5 секунды
  digitalWrite(ledPin, LOW); // выключаем светодиод
  delay(500); // ждем еще 0.5 секунды
}