void setup() {
  pinMode (D0, OUTPUT); // светодиод
  pinMode (D1, INPUT); //кнопка
}

void loop() {
  digitalWrite (D0, !digitalRead (D1));
}
