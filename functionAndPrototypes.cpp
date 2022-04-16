# include <iostream>
using namespace std;

//function prototyping
// syntax
// type function_name (arguements);

int sum(int a, int b);
void greet();

int main(){
    int num1, num2;
    cout <<"Enter first num: "<<endl;
    // num1 and num2 are actual parameters
    cin >> num1;
    cout <<"Enter Second num: "<<endl;
    cin >> num2;
    cout <<"The sum is:" << sum(num1,num2)<<endl;
    greet();
    return 0;
}

int sum(int a, int b){
    // a and b will be taking values from the actual parameters --> formal parameters
    int c =  a+b;
    return c;
}

void greet(){
    // void does not return
    cout << "Hello! Good Morning"<< endl;
}