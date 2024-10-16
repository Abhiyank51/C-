#include<iostream>
using namespace std;

int c = 45;    // global variable

// int main(){
//     **************BUILD IN DATA TYPES*************
//     int a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     c = a+b;
//     cout<<"The sum of a and b is: "<<c<<endl;
//     cout<<"The global c is: "<<::c;
//     //  '::' scope resolution operator used to print global variable inside int main as here local variable is in precedence.
//     return 0;
// }


// int main(){
    
//  ***************float, double and long double Literals******************* 
    // float d = 34.4f;
    // float d = 34.4;
    // float d = 34.4F;

    // long double e = 34.4l;
    // long double e = 34.4;
    // long double e = 34.4L;
    // cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;

    //check the size by using sizeof() keyword.

    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl; // it gives by default size of long double data type(i.e 8) 
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
    // return 0;
//}
// By default 34.4 or a decimal number is double data type.
// To make it a floating point number we have to write '34.4f' in c++.  
// If we pass 34.4f as this it will pass as float.
// f =  float, l =  long double for define long double data type.
// or we can write F/L instead of f/l .

//int main(){
    //************Reference VRIABLE*********
    // if we have to call our values with different reference names then we usr reference variable
    //  EX. Rohan---->Monty---->Rohu--->Dangerous code
    // Same person with 4 different names
    // float x = 455;
    // float & y =  x;  // value of x is now become also the value of y.
    // // Here y is the refernece varible points the value of x
    // cout<<x<<endl;
    // cout<<y<<endl;
    // return 0;
//}


int main(){
    //************TYPE CASTING*********
    // Convert one variable to another or change data type
    int a = 45;
    float b = 78.9;
    cout<<"The value of a is: "<<(float)a<<endl;  // convert int to float 
    // or we can writr the upper line as ->
    // cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;
    // cout<<"The value of b is: "<<int(b)<<endl;

    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    cout<<"The expression is: "<<a+(int)b<<endl;

    return 0;
}