#include <AST_V24IO.h>

void setup() {
  Serial.begin(1000000);
  initV24IO();                        // Initialize board
  pinMode(V24I1,INPUT);
  pinMode(V24I2,INPUT);
  pinMode(V24I3,INPUT);
  pinMode(V24I4,INPUT);
}

void loop() {
  Serial.print("Inputs\t");
  Serial.print(digitalRead(V24I1));
  Serial.print(" ");
  Serial.print(digitalRead(V24I2));
  Serial.print(" ");
  Serial.print(digitalRead(V24I3));
  Serial.print(" ");
  Serial.print(digitalRead(V24I4));
  Serial.println();
  delay(100);
}
