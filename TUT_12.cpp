// POINTERS IN C++
// Pointers --> data type which holds the address of other data types

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    // make a pointer that points to integer name b that contains the address of a
    int* b = &a;
    // cout<<b;  // print the address where value of a is stored in ram

    // both gives same output
    // & --> (Address of) operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    // * --> (value at/value of)Dereference Operator
    // which value is stored at this address
    cout<<"The value at address b is: "<<*b<<endl;

    // pointer to pointer 
    // here c stores address of that pointer which already stores someone address.
    // here c stores address of b pointer which already stores address of a operator.
    int **c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    return 0;
}