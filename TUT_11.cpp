// Break and continue statement
#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     if(i==2){
    //         break;   // leave the loop by using break 
    //     }
    //     cout<<i<<endl;
    // }

    for (int i = 0; i < 4; i++)
    {
        if(i==2){
            continue;   // leave the 2 and print all numbers
        }
        cout<<i<<endl;
    }
    return 0;
}