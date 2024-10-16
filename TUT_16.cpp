// Call By Value, Call By Reference in C++

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}
// temp    a    b    <=== swap
//  4      4    5
//  4      5    5
//  4      5    4

// This will not swap a and b as this does not work directly in c++
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// use this
// Call by reference using pointers
// void swapPoiter(int *a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Call by reference using C++ reference variable
// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


// Return by reference
int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}


int main(){
    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b);  // this will not swap a and b as it only copy the value of a and b.
    // swapPoiter(&a,&b);   // this will swap a and b using pointer reference
    swapReferenceVar(a,b);  // this will swap a and b using reference variable.
    swapReferenceVar(a,b) = 787;  // change value in swapping to 787 
    cout<<"After swap"<<endl;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}
