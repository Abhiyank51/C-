//  Constructors in C++
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked(call) whenever a object is created.


#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
    // Creating a constructor

        Complex(void);   // constructor declaration.
        void printData(){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};


// Write Complex(void) constructor
// This is a Default Constructor
Complex :: Complex(void){
    a = 10;
    b = 2;  // if you not initialize these values the compiler produce garbage values.
}


int main(){
    Complex c;
    c.printData();
    return 0;
}

// Constructor that does not accept any parameter is called default constructor.

// Properties of constructor.

// It should be declared in public section of the class.
// It's name should be same as the class.
// They are automatically invoked whenever the object is created. 
// They cannot return values and do not have return types
// It can have default arguments.
// We cannot refer to their address.