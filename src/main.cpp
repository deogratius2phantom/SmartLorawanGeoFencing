#include <Arduino.h>
int x=0;
void setup() {
  Serial.begin(115200);

  // put your setup code here, to run once:
}

void loop() {
  Serial.println(x++);
  delay(1000);
  // put your main code here, to run repeatedly:
}