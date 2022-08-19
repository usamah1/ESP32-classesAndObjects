#include "MyClass.h"
#include <iostream>
using namespace std;

    int number = 2;
    string message = "standard message....";  

    MyClass::MyClass()
    {
        hello();
    } 

    void MyClass::hello() 
    {
       cout<<("Hello World... Are you happy now?")<<endl;
    }
    void MyClass::hello(string world) const
    {
        cout<<("Hello %s \n", world.c_str())<<endl;
    
    }    
    void MyClass::printMessage() const
    {
        cout<<("%s \n", message.c_str())<<endl;
    }   

    std::string MyClass::returningMethod()
    {
        std::string foo = "HELLO ";
        std::string bar = "WORLD";
        std::string foobar = foo.append(bar);
        
        return foobar;
    }