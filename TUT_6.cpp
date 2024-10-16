//  Header files and operators

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello world"<<endl;
//     return 0;
// }

// There are two types of header files
// 1. Sysytem header files - It comes with compiler
//    Ex. #include<iostream>


// 2. User defined header files - It is written by the programmer
//    Ex. #include"this.h" --> This will produce an error if this.h is not present in current working directory
//    We have to make an empty file in our path to overcome error

//  VISIT C++ REFERENCE FOR MORE INFO

#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in C++: "<<endl;
    cout<<"Following are the types of operators in C++: "<<endl;

    //  Arithmetic Operators 
    // cout<<"The value of a+b is "<<a+b<<endl;
    // cout<<"The value of a-b is "<<a-b<<endl;
    // cout<<"The value of a*b is "<<a*b<<endl;
    // cout<<"The value of a/b is "<<a/b<<endl;
    // cout<<"The value of a%b is "<<a%b<<endl;
    // cout<<"The value of a++ is "<<a++<<endl;
    // cout<<"The value of a-- is "<<a--<<endl;
    // cout<<"The value of ++a is "<<++a<<endl;
    // cout<<"The value of --a is "<<--a<<endl;

    // Assignment Operators -> Use to assign values in variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison Operators 
    // cout<<"The value of a == b is "<<(a==b)<<endl;
    // cout<<"The value of a != b is "<<(a!=b)<<endl;
    // cout<<"The value of a > b is "<<(a>b)<<endl;
    // cout<<"The value of a < b is "<<(a<b)<<endl;
    // cout<<"The value of a <= b is "<<(a<=b)<<endl;
    // cout<<"The value of a >= b is "<<(a>=b)<<endl;

    // Logical operators
    cout<<"Following are the logical operators: "<<endl;
    // logical and operator - noth should be true for return true
    cout<<"The value of ((a==b) && (a<b)) logical operator is "<<((a==b) && (a<b))<<endl;
    // logical or operator any one is true then return true
    cout<<"The value of ((a==b) || (a<b)) logical operator is "<<((a==b) || (a<b))<<endl;
    // logical not operator - return opposite of what is being returned if true then return false
    cout<<"The value of (!(a==b)) logical operator is "<<(!(a==b))<<endl;
    return 0;
}