int led5 = 5;
int led6 = 6;
int led7 = 7;

void setup() {
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {
  for (int i = 100;i>0;i--){
    for (int b = 100/i;b>0;b--){
      int p_delay = i;
  digitalWrite(led5, HIGH);
  delay(p_delay);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
  delay(p_delay);
  digitalWrite(led6, LOW);

  digitalWrite(led7, HIGH);
  delay(p_delay);
  digitalWrite(led7, LOW);
}}}