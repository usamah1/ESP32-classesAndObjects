#include <Arduino.h>
#include <MyClass.h>


MyClass firstObject;
MyClass secondObject;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  firstObject.message = "hello world";
  secondObject.message = "hello universe";

  firstObject.hello();
}

void loop() {
  //Serial.println(firstObject.message.c_str());
  //Serial.println(secondObject.message.c_str());
  
  firstObject.printMessage();
  secondObject.printMessage();

  //firstObject.hello();
  delay(1000);
  // put your main code here, to run repeatedly:
}