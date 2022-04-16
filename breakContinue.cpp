// break statemment

#include <iostream>
using namespace std;
int main(){
    // for(int i=0; i<=20; i++){
    //     if (i==14){                  //when 14 comes it stops the loop-->it's the end
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for(int i=0; i<=20; i++){
        if (i==14){
            continue;               //when 14 comes -->it skips it and then complete the condition
        }
        cout<<i<<endl;
    }
    return 0;
}