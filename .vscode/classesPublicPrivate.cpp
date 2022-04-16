#include <iostream>
using namespace std;

// CLASS VS STRUCTURE
// Why use classes when we have structures?
// structures -> do not have access specifier like the data should be visisble to all or not, classes provide security
// structures -> not having an efficient method for functions

// ACCESS SPECIFIER:
// Private -> the information that others cannot see or change
// Public -> the information that others can see

// FUNCTIONS:
// Two ways to define a function in the class
// 1 -> Directly form functions inside the class
// 2 -> Give prototype of the functions inside the class and access it outside the class through
//      scope resolution method. Example given below:

// syantax of class:
class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    // Prototype method
    void setData(int a1, int b1, int c1);

    // Direct method
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    // we have already made the variable a, b ,c in the beginning of class.
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee E1;
    E1.d = 572;
    E1.e = 2793;

    // If we change the value of a or b or c then it will not change since these are private variables
    // E1.a = 233; --> giving error (access specifier is private)

    E1.setData(5, 23, 7);
    E1.getData();
    return 0;
}