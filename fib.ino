

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < fibbonaci(i); j++) {
      blink();
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
  }
  delay(30 * 1000);
}

int fibbonaci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibbonaci(n-1) + fibbonaci(n-2);
}

void blink() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
