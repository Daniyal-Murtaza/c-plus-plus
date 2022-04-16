#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Tell me your age";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are eligible";
        break;
    case 57:
        cout << "You are old man";
        break;
    case 2:
        cout << "You are kid";
        break;
    
    default:
        break;
    }
    return 0;
}