// Copy Constructor in C++

#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number()   // Default constructor - run if their is no argument value.
        {
            a = 0;
        }  
        Number(int num){
            a = num;
        }

        // Very Imp.  = When no copy constructor is found, compiler supplies it's own copy constructor.
        Number(Number  &obj)   // copy constructor with call by reference.
        {   
            cout<<"Copy constructor called !!"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is: "<<a<<endl;
        }

};

int main(){
    Number x,y,z(45), z2;
    x.display();
    y.display();
    z.display();
    // copy constructor - take copy of z in it.
    // want ot make z1 that should exactly resemble z or x or y.

    // value of x now has been assigned to z1 using copy Construcctor.
    Number z1(x);    // Copy constructor invoked/called
    z1.display();

    z2 = z;  // copy constructor not called
    z2.display();

    Number z3 = z;   // Copy constructor invoked/called
    z3.display();

    return 0;
}