// In C language, Character arrays are basically strings
// In C++ Language, it provided us with string class
// so basically we are learning C now,

#include <iostream>

// Give methods like strlen 
#include <cstring>

using namespace std;
int main(){
    // the '\0' is used to terminate the array
    // char names1[] = "OOP";                             OR for better length
    char names1[]={'O','O','P','\0'};   
    char names2[]={'O','\0','O','P'};   
    // cout<<"names1: "<<names1<<endl;     //---> OOP
    // cout<<"names2: "<<names2<<endl;     //---> O

    // strlen -> length of array
    // cout<<"strlen"<<endl;
    // cout<<"length of names1 :"<<strlen(names1)<<endl;
    // cout<<"length of names2 : "<<strlen(names2)<<endl;

    // strcpy -> paste to destination,copy from source
    char a[1];
    cout<<"strcopy"<<endl;
    strcpy(a,names1);
    cout<<names1<<endl;

    //Input
    // char names[100];
    // cin>> names;       // --> it will not work further when a space comes.. Input=Daniyal Murtaza, Output=Daniyal
    // cout<< names;

    //get method for input
    // cin.get(names,100);
    // cout<<names<<endl;     //Input=Daniyal Murtaza, Output=Daniyal Murtaza

    //to give manual seperator i.e. '$' by removing enter as default seperator
    // cin.get(names,20,'$');
    // cout<<names<<endl;        // to get whole line as input

    //Multi dimensional character array (array of arrays)
    // char friendName[4][20] = {"Daniyal murtaza", "Sohail Murad", "Shan Kharmang"};      //storing 4 friend names and each name can have max 20 characters
    // cout <<friendName[1]<<endl;
    // cout <<friendName[1][2]<<endl;


    return 0;
}