// pointer is a data type that is also variable but they stores memory address
// Other Data Types stores value.

// p -> pointing at memory adree where int value is saved;


# include <iostream>
using namespace std;
int main(){
    int sum = 46;
    // This is called initialization
    int *p =  &sum;
    // p aik pointer hai jo pointer kr raha hai sum variable k address ko jis ki data type integer hai!
    cout<<&sum<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;   //dereference

    *p +=100;
    cout<<*p;

}






