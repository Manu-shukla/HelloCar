#include<stdio.h>
void setup() {
  Serial.begin(9500); 
}
void loop() {

  int sensorValue = analogRead(A1)* (3.3/4096.0); 
  
  Serial.println(sensorValue);
  delay(2); 
}
