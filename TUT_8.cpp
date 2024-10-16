#include<iostream>
#include<iomanip>
using namespace std;

// int main(){
//     // int a = 34;
//     // cout<<"The value of a was: "<<a<<endl;
//     // a = 66; // updated value
//     // cout<<"The value of a is: "<<a<<endl;

//     // Constants is C++  - it is used to freeze the value we cant change the 
//     // value of variable by using const keyword

//     const int a = 3;  // this is constant integer variable
//     // const float b = 7.6  // this is constant float variable
//     cout<<"The value of a was: "<<a<<endl;
//     // a = 5;   // it will suggest error as a is constant cant change it.
//     // cout<<"The value of a is: "<<a<<endl;
//     return 0;
// }


int main(){
    //********USING MANIPULATORS**********
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is :"<<a<<endl;
    // cout<<"The value of b without setw is :"<<b<<endl;
    // cout<<"The value of c without setw is :"<<c<<endl;

    // // Use setw manipulator - five space upto 4 characters
    // cout<<"The value of a is :"<<setw(4)<<a<<endl;
    // cout<<"The value of b is :"<<setw(4)<<b<<endl;
    // cout<<"The value of c is :"<<setw(4)<<c<<endl;



    //******OPERATOR PRECEDENCE****
    int a = 3, b = 4;
    // int c = (a*5)+b  - first solve multiplication then addition
    int c = ((((a*5)+b)-45)+87);
    // chack precedence here first multiply then here +,- have same precedence then we check their associativity 
    // which is left to right thren according to that we out bracket.
    cout<<"Value of expression is: "<<c<<endl;

    return 0;
}