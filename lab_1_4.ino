int var = 0;

void setup() {
  pinMode (D0, OUTPUT);
  pinMode (D1, OUTPUT);
  pinMode (D2, OUTPUT);
  attachInterrupt(D3, Interrupt, FALLING)
}

void Interrupt() {
  var++;	
  switch (var) {
    case 1:
      digitalWrite (D2, LOW);
      digitalWrite (D0, HIGH);
      break;
    case 2:
      digitalWrite (D0, LOW);
      digitalWrite (D1, HIGH);
      break;
    case 3:
      digitalWrite (D1, LOW);
      digitalWrite (D2, HIGH);
      break;
  }
  if (var >= 3) var = 0;
  delay(100);	
}

void loop() {
  
}
