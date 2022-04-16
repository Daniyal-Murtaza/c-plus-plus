#include <iostream>
using namespace std;

// structure --> user defined data type
// In array we should've elements of same and single data type.
// to cope up with that, we need structure to store elements of different data type.

struct employee{
    int ID;
    char favChar;
    float salary;
};

int main(){
    struct employee daniyal;
    daniyal.ID = 1;
    daniyal.favChar = 'D';
    daniyal.salary = 25000000000;
    cout<<"The salary is: "<<daniyal.salary<<endl;
    cout<<"The favourite character is: "<<daniyal.favChar<<endl;
    cout<<"The ID is: "<<daniyal.ID<<endl;
    return 0;
}