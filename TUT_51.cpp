// Pointers to Objects and Arrow Operator in C++

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }
        void setData( int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Complex c1;
    // Make a pointer
    // Complex *ptr = &c1;  // make an object of class complex in pointer form
    Complex *ptr = new Complex;   // another way to make an object of class complex in pointer form
    // (*ptr).setData(1,4);    // is exactly same as perform using arrow operator
    // -> = Arrow Operator
    ptr->setData(1,4);   // it means dereference the pointer and run set data 

    // (*ptr).getData();  // same as below
    ptr->getData(); 


    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1 -> setData(1,74);
    ptr1 -> getData();
    return 0;
}