void setup() {
  analogWriteFreq(120);
}

void loop() {
  value = map(analogRead(A0), 0, 4095, 0, 255)
  analogWrite(D0, value);
}	