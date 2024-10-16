// Multiple inheritance 
// A derived class with more than one base class

#include<iostream>
using namespace std;

// Syntax of derived class from two base class(syntax for inheriting in multiple inheritance)

// class Derived : visibility-mode base1, visibility-mode base2
// {
//     class body of class "Derived";
// }


// Base classes
class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};
class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }
};

// Derived class
class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<"The value of Base 1 is: "<<base1int<<endl;
            cout<<"The value of Base 2 is: "<<base2int<<endl;
            cout<<"The value of Base 3 is: "<<base3int<<endl;

            cout<<"The sum of these values is: "<<base1int + base2int + base3int<<endl;

        }
};

// The inherited derived class will look something like this:
// Data Members:
//      base1int ----> protected
//      base2int ----> protected
// Member Function:
//      set_base1int() -----> public
//      set_base2int() -----> public
//      set_show()   -------> public

int main(){
    Derived Abhiyank;
    Abhiyank.set_base1int(23);
    Abhiyank.set_base2int(12);
    Abhiyank.set_base3int(10);
    Abhiyank.show();
    return 0;
}