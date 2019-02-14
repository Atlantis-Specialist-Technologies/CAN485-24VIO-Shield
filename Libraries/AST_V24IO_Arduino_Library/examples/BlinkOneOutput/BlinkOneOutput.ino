#include <AST_V24IO.h>

void setup() {
  initV24IO();                        // Initialize board
  pinMode(V24O1, OUTPUT);
}

void loop() {
  digitalWrite(V24O1, HIGH);
  delay(100);
  digitalWrite(V24O1, LOW);
  delay(100);
}
