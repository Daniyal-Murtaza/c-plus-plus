// Array --> store data in contigous memory cells
// Syntax:
// array_type array_variable[array_size] = {array_element1, array_element2, ....}


#include <iostream>
using namespace std;
int main(){
    //Method 1:
    int mathmarks[] = {45,46,78,44,24};     //or
    // int marks[5] = {45,46,78,44,24}; 

    // Method 2:
    int chem_marks[4];
    chem_marks[0] = 56;
    chem_marks[1] = 534;
    chem_marks[2] = 53435;
    chem_marks[3] = 52;
    cout<<"The chemistry marks are: "<<endl;
    cout<<chem_marks[0]<<endl;
    cout<<chem_marks[1]<<endl;
    cout<<chem_marks[2]<<endl;
    cout<<chem_marks[3]<<endl;

    // changing the value of an array
    mathmarks[3] = 4675;  
    cout<<"The math marks are: "<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;           
    cout<<mathmarks[3]<<endl;        // change 44 to 4675 
    cout<<mathmarks[4]<<endl;
    

    return 0;
}