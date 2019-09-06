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
};