# include <iostream>
using namespace std;
int main(){
    // THESE ARE FOR STATIC MEMORY ALLOCATION
    int Dani_marks = 46;
    int Mini_marks = 56;
    // This is called initialization
    int* p;
    p = &Dani_marks;
    // p aik pointer hai jo pointer kr raha hai sum variable k address ko jis ki data type integer hai!
    cout<<&Dani_marks<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;   //dereference

    *p +=100;
    cout<<*p<<endl;

    p = &Mini_marks;
    cout<<Mini_marks<<endl;

    int arr[5] = {12,34,55,33,22};
    p = arr;
    for(int i=0; i<5; i++){
        cout<< "Value: " << *(p+i) << ". Address: " << (p+i) << endl;
    }

//hexa: 1 2 3 4 5 6 7 8 9  A B C D E F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 ...



}