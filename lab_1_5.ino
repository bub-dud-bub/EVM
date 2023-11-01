int var = 0;
struct repeating_timer timer;

void setup() {
  pinMode (D0, OUTPUT);
  pinMode (D1, OUTPUT);
  pinMode (D2, OUTPUT);
  add_repeating_timer_ms(1000, Interrupt, NULL, &timer);
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