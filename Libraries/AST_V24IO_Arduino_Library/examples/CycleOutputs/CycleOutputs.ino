#include <AST_V24IO.h>

int i = 0;

void setup() {
  initV24IO();                        // Initialize board
  pinMode(V24O1, OUTPUT);
  pinMode(V24O2, OUTPUT);
  pinMode(V24O3, OUTPUT);
  pinMode(V24O4, OUTPUT);
}

void loop() {
  digitalWrite(V24Outputs[i], HIGH);
  delay(100);
  digitalWrite(V24Outputs[i], LOW);
  delay(100);
  i++;
  if (i>=4){
    i=0;
  }
}
