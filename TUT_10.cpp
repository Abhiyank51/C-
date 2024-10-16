// For ,While and do-while loops in C++

// Loops in C++
// There are three types of loop in C++
    // 1. While loop
    // 2. For loop
    // 3. do-while loop

// Syntax for loop
// for(initialization; condition; updation){
//     loop body(C++ code);
// }

// Syntax while loop
// execute until the condition is true
// while(condition){
//     c++ statements
// }

// Syntax do-while loop
// do
// {
//     c++ code
// } while (condition);


#include<iostream>
using namespace std;

// int main(){
//     // For loop in C++
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<i<<endl;
//     }
//     // Example of infinite for loop
//     // here condition 34<40 always true so loop runs infinitely.
//     // for(int i = 0; 34<40; i++){
//     //     cout<<i<<endl;
//     // }
//     return 0;
// }


// int main(){
//     // While loop
//     // Printing 1 to 10 using while loop
//     int i = 1;
//     while (i<=10)
//     {
//         cout<<i<<" ";
//         i++;
//     }

//     // Example of infinite while loop
//     // int i  = 1;
//     // while(true){
//     //     cout<<i<<endl;
//     //     i++;
//     // }
//     return 0;
// }



// int main(){
//     // do-while loop
//     // Printing 1 to 10 using do-while
//     // int i = 1;
//     // do
//     // {
//     //     cout<<i<<" ";
//     //     i++;
//     // } while (i<=10);
//     // the advantage of do while loop is if the condition is false in starting 
//     // even then the loop will run at least one time.

//     return 0;
// }


// Printing table
int main(){
    int a;
    cout<<"WHICH TABLE YOU WANT TO PRINT UPTO TENTH MULTIPLE"<<endl;
    cin>>a ;
    cout<<"TABLE OF "<<a<<" is below"<<endl;
    for(int i=1;i<=10;i++){
        cout<<(i*a)<<endl;
    }
    return 0;
 }