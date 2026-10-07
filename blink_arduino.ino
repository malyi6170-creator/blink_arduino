#if defined(__AVR_ATtiny13__)
  #define LED_PIN 1  // Для ATtiny13 (ножка PB1)
#else
  #define LED_PIN 9  // Для Arduino Uno (ножка PB1)
#endif

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
