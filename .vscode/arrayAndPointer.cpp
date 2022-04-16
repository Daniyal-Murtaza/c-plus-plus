#include <iostream>
using namespace std;
int main(){
    int marks[] = {45,78,29,90};
    int* p;

    // we do not need to include & --> to print the address
    p = marks;  
    cout<<"addresses: "<<endl;
    cout<<"The address of marks[0] is: "<< p <<endl;
    cout<<"The address of marks[1] is: "<< p+1 <<endl;
    cout<<"The address of marks[2] is: "<< p+2 <<endl;
    cout<<"The address of marks[3] is: "<< p+3 <<endl;
    
    // be cautious about brackets like *(p+1)
    cout<<"Values: "<<endl;
    cout<<"The value of marks[0] is: "<< *p <<endl;
    cout<<"The value of marks[1] is: "<< *(p+1) <<endl;
    cout<<"The value of marks[2] is: "<< *(p+2) <<endl;
    cout<<"The value of marks[3] is: "<< *(p+3) <<endl;

    //so convention
    cout<<"Conventions: "<<endl;
    cout<<*(p++)<<endl;  //--> 45 then increment to 78                      //print then increment
    cout<<*(++p)<<endl;  //--> 78 increment to 29 then print 29             //increment then print

    return 0;
}