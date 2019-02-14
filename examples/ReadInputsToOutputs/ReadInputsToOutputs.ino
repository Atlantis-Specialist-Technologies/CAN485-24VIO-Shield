#include <AST_V24IO.h>

//  Inputs values arrays
int inputsValues[4]         = {0};  // Current / last read inputs values
int inputsPreviousValues[4] = {0};  // Previously read inputs values

bool readInputs();
void printInputs();
void setOutputsToInputs();

void setup() {
  Serial.begin(1000000);
  
  initV24IO();                        // Initialize board
  
  // setup ports
  for (int i = 0; i < 4; i++){
    pinMode(V24Outputs[i], OUTPUT);
    digitalWrite(V24Outputs[i], LOW);
    pinMode(V24Inputs[i], INPUT);
  }
  readInputs();
  printInputs();
}

void loop() {

  //  Read inputs and print values if change is detected
  if (readInputs()){
    printInputs();
  }
  setOutputsToInputs();
}

bool readInputs(){
  bool returnValue = false;
  for (int i = 0; i < 4; i++){
    //  save old input value and update by reading the pin
    inputsPreviousValues[i] = inputsValues[i];
    inputsValues[i] = digitalRead(V24Inputs[i]);

    //  if any of the inputs has changed, set return value to true (inputs have changed)
    if (inputsValues[i] != inputsPreviousValues[i]){
      returnValue = true;
    }
  }
  return returnValue;
}

void printInputs(){
  for (int i  =0; i < 4; i++){
    Serial.print(inputsValues[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void setOutputsToInputs(){
  for (int i = 0; i < 4; i++){
    if (inputsValues[i] > 0){
      digitalWrite(V24Outputs[i], HIGH);
    }
    else{
      digitalWrite(V24Outputs[i], LOW);
    }
  }
}

