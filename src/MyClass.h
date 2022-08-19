
#ifndef MYCLASS_H_

#define MYCLASS_H_
#include <string>

using namespace std;

class MyClass
{
    public:
        int number;
        string message;
        MyClass(); 
        void hello();
        void hello(string world) const;
        void printMessage() const;
        std::string returningMethod();
    private:
        
};


#endif /* MYCLASS_H_ */