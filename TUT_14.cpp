// STRUCTURES, UNION AND ENUMS IN C++

#include<iostream>
using namespace std;

// STRUCTURE --> Used to add different datatypes in one structure
// struct TUT_14
// {
//     /* data */
// };


//ex.
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// or we can write the upper code as 
// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// }ep;

// // Now we can write ep in place of struct employee in lower code using typedef functionality

// int main(){
//     ep abhiyank;
//     struct employee ayush;
//     struct employee shiwang;
//     struct employee anshul;

//     abhiyank.eId = 1;
//     abhiyank.favChar = 'c';
//     abhiyank.salary =13200000;
//     cout<<"The value is "<<abhiyank.eId<<endl;
//     cout<<"The value is "<<abhiyank.favChar<<endl;
//     cout<<"The value is "<<abhiyank.salary<<endl;
//     return 0;
// }




//UNION --> These are also a type of structure but provide better memory management.
// Use one value at a time we use union .There is no correlation between the values in it.
// If we want to use a one type of data at a time we use union we can optimise our memory as our need.
// This is the advantage of union.
// union TUT_14
// {
//     /* data */
// };

// Ex.

// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'a';
//     m1.pounds = 50;
//     cout<<m1.rice;
//     // cout<<m1.car;
//     // cout<<m1.pounds;

//     return 0;
// }



// ENUM
int main(){
    enum Meal{ breakfast, lunch, dinner};
    // now Meal become a data type we can add value to it according to their atribute
    // breakfast = 0
    // lunch = 1
    // dinner = 2 

    Meal m1 =  breakfast;
    // cout<<m1;
    cout<<(m1==1); // for breakfast it is false correct is m1==0, hence return 0 in output for false.
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    return 0;
}
