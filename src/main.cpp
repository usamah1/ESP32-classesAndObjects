#include "MyClass.h"
#include <iostream>


MyClass firstObject;
MyClass secondObject;

std::string bar = "give me something";

void setup() {
  // put your setup code here, to run once:
  
  firstObject.message = "hello world";
  secondObject.message = "hello universe";

  firstObject.hello();
}

void loop() {
  //Serial.println(firstObject.message.c_str());
  //Serial.println(secondObject.message.c_str());
  
  firstObject.printMessage();
  secondObject.printMessage();

  cout<<(firstObject.returningMethod().c_str());

  cout<<(bar.c_str());

  //firstObject.hello();
  
  // put your main code here, to run repeatedly:
}