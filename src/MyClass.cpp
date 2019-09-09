#include <Arduino.h>
#include <MyClass.h>

using namespace std;

    int number = 2;
    string message = "standard message....";  

    MyClass::MyClass()
    {
        hello();
    } 

    void MyClass::hello() 
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

    std::string MyClass::returningMethod()
    {
        std::string foo = "HELLO ";
        std::string bar = "WORLD";
        std::string foobar = foo.append(bar);
        
        return foobar;
    }