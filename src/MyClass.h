#include <string>
using namespace std;

class MyClass
{
    public:
        int number;
        string message;  
        void hello() const;
        void hello(string world) const;
        void printMessage() const;
};