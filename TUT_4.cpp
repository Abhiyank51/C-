// C++ Tutorial : Variable Scope and Data Types

// 1. A variable is a container to hold data 

// 2. Variable can be of various types. Primarily we have these variable types in C++:
//    1. Int      -> 1, -1, 0, 7, 8, -2

//    2. Float    -> 1.1, 1.21, 3.77

//    3. Char     -> 'a' , 'c', 'D'

//    4. Double   -> To store big number  1.287234672

//    5. Boolean  -> TRUE , FALSE

// 3. int sum = 34; means sum is an integer variable which holds value 34 in memory

// Syntax for declaring variables in C++

// 1. Ex.  int a = 4, b = 6

// 2. Based on Scope, variable can be classified into two types:
//      1. Local Variables
//      2. Global Variables 

// int a = 4;
// char letter = 'D' 


// VARIABLE SCOPE

// Scope of a variable is the region in code where the existence of variable is
// valid.

// Based on scope we have local and global variables in C++

// Local Variables: Local variables are declared inside the braces of any
// function and can be accessed only from there.

// Global Variables: Global variables are declared outside any function and
// can be accessed from anywhere.

// Can global and local variable have same name in C++? :Yes, we will see!


// C++ DATA TYPES

// Data types define the type of data a variable can hold, for example an integer variable
// can hold integer data, a character type variable can hold character data etc.

// Data types in C++ are categorised in three groups:
// Built-in
// int, char, double, float, boolen

// User-defined
// Struct, Union, Enum

// Derived.
// Arrays , Function, Pointer



#include<iostream>
using namespace std;

// int main(){
//     int a = 4;
//     int b = 5;
//     // int a = 4, b = 5
//     float pi = 3.14;
//     char c = 'u';
//     cout<<"Character data type is "<<c<<endl;
//     cout<<"The value of pi is "<<pi<<endl;
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     return 0; 
// }


// GLOBAL-LOCAL VARIABLE
// PRECEDENCE - LOCAL VARIABLE > GLOBAL VARIABLE

int glo = 6;   // Global variable
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;   // Local variable
    glo = 78;      // Updated local variable
    glo = 65;
    sum();
    cout<<glo<<endl;
}


// Local and global variable can be make with the same name but local variable get precedence.

// bool data type
// true = 1
// false = 0


// Rules to declare variables in C++

// Variable names in C++ can range from 1 to 255 characters.

// All variable names must begin with a letter of the alphabet or an underscore(_).

// After the first initial letter, variable names can also contain letters and numbers.

// Variable names are case sensitive.

// No spaces or special characters are allowed.

// You cannot use a C++ keyword (a reserved word) as a variable name.