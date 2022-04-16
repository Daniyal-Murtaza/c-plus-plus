#include <iostream>
using namespace std;
int main(){
    int attendance, project;
    cout << "Enter your attendance and project marks: ";
    cin >> attendance >> project;
    int total = attendance + project;

    if(total < 50) {
        cout << "You are fail";
    }

    else if(total == 50) {
        cout << "You are just pass";
    }

    else{
        cout << "You are pass";
    }
    return 0;
}