// Parameterized and Default Constructors in C++

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int, int);
    
    void printNumber(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// This is Parameterized constructor as it takes 2 parameters : Pass parameters in constructor.
Complex::Complex(int x, int y){
    a = x;
    b = y;
}

int main(){
    // Implicit call
    Complex a(4,6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5,7);
    b.printNumber();
    return 0;
}