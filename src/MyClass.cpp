#include <Arduino.h>
#include <string>
#include <MyClass.h>

using namespace std;

    int number;
    string message = "standard message....";  
    void MyClass::hello() const
    {
        Serial.println("Hello World... Are you happy now?");
    }
    void MyClass::hello(string world) const
    {
        Serial.printf("Hello %s \n", world.c_str());
    
    }    
    void MyClass::printMessage() const
    {
        Serial.printf("%s \n", message.c_str());
    }   