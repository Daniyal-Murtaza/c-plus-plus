// What is pointer ---> Data type.
// It is a data type which holds the ADDRESSES of other datatypes.

#include <iostream>
using namespace std;
int main(){
    int a = 3;

    // int* variable --> pointer data type
    int* b;
    b = &a;

    // & --> (Address of) operator --> &variable
    cout<<"The address of a is "<< &a <<endl;
    cout<<"The address of b is "<< b <<endl;
    
    // * --> (Value at) operator  (defernce operator) --> *variable
    cout<<"The value at b is "<< *b <<endl;
    
    return 0;
}