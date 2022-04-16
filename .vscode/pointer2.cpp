#include <iostream>
using namespace std;
int main(){
    //pointers
    int a=45;
    int* b;
    b = &a;
    //address
    cout<<"The address of a is: "<< b <<endl;
    cout<<"The address of a is: "<< &a <<endl;
    //value
    cout<<"The value at b is: "<< *b <<endl;
    return 0;
}