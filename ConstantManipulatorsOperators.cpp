#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // const = To make a constant variable whose value cant be changed
    // const float pi = 3.142;
    // cout<<"The value of pi is"<<pi<<endl;
    // pi = 42.3;
    // cout<<"The value of pi is"<<pi<<endl;

    //Manipulators = to manipulate data (endl, setw)
    // setw  = to right justified the data
    int a = 8, b=100 , c=80009, d=89930920;
    cout<< "The value of a without setw is:" <<a<<endl;
    cout<< "The value of b without setw is:" <<b<<endl;
    cout<< "The value of c without setw is:" <<c<<endl;
    cout<< "The value of d without setw is:" <<d<<endl;

    cout<< "The value of a with setw is:" <<setw(8)<<a<<endl;
    cout<< "The value of b with setw is:" <<setw(8)<<b<<endl;
    cout<< "The value of c with setw is:" <<setw(8)<<c<<endl;
    cout<< "The value of d with setw is:" <<setw(8)<<d<<endl;
    return 0 ;

    
}