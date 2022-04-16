// Implementing array through loop

#include <iostream>
using namespace std;
int main(){
    int attendance[] = {90,89,26,40,28};

    // For Loop:
    for(int i=0; i<5; i++){
        cout<<"The "<<i<<" element of attendance array is "<<attendance[i]<<endl;
    }

    // While Loop;
    int i=0;
    while(i<5){
        cout<<"The "<< i <<" element of attendace array is " << attendance[i]<<endl;
        i++;
    }

    // Do-While Loop:
    int i=0;
    do{
        cout<<"The "<< i <<" element of attendace array is " << attendance[i]<<endl;
        i++;
    }while(i<5);

    return 0;
}
