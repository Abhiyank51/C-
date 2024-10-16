// Revisiting Pointer: new and delete keywords in C++

#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    *ptr = 999;   // assign pointer value to 999

    cout<<"The value of a is "<<*(ptr)<<endl; //dereference the pointer

    // new keyword/operator
    // int *p = new int(40);
    float *p = new float(68.3);
    cout<<"The value of at address p is "<<*(p)<<endl;

    // Allocate block of memory
    // here we make an integer array
    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;  // syntax to free the contiguous block of memory using delte keyword.
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;



    // Delete operator
    // delete[] arr;  // to free full block of occupied memory in form of array
    // delete arr;    // to free some block of memory
    return 0;
}