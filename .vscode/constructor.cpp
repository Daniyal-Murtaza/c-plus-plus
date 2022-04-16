#include <iostream>
using namespace std;

// constructor -> A special member function with same name as of the class.
// It is automatically invoked (called) whenever the object is created
// used to initialze the objects of its class

// PROPERTIES OF CONSTRUCTOR:
// Do not have any return type
// automatically invoked
// SHOULD BE DECLARED IN THE PUBLIC SECTION
// it can have default arguement
// We cannot refer to their addres

class Complex
{
    int a, b;

public:
    // This is a default constructor
    Complex(); // Complex() is same as Complex(void)
    void showData();
};

Complex ::Complex()
{
    a = 10;
    b = 0;
}

void Complex ::showData()
{
    cout << "Number is: " << a << "+" << b << "i";
}

int main()
{
    Complex c;
    c.showData();
    return 0;
}