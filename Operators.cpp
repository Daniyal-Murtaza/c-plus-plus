#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 6;
    // arithematic operator
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a-b is:"<<a-b<<endl;
    cout<<"The value of a*b is:"<<a*b<<endl;
    cout<<"The value of a/b is:"<<a/b<<endl;
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of a-- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a is:"<<--a<<endl;

    // comaprision operator
    cout<<"The value of a==b is:"<<(a==b)<<endl;
    cout<<"The value of a<b is:"<<(a<b)<<endl;
    cout<<"The value of a>b is:"<<(a>b)<<endl;
    cout<<"The value of a<=b is:"<<(a<=b)<<endl;
    cout<<"The value of a>=b is:"<<(a>=b)<<endl;
    cout<<"The value of a!=b is:"<<(a!=b)<<endl;

    // logical operator
    cout<<"The value of AND logical operator ((a==b) && (a<b)): "<<((a==b) && (a<b))<<endl;
    cout<<"The value of or logical operator ((a==b) || (a<b)): "<<((a==b) || (a<b))<<endl;
    cout<<"The value of not logical operator (!(a==b) || (a<b)): "<<(!(a==b) || (a<b))<<endl;

    return 0;
}