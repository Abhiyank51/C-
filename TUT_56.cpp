// Virtual functions in C++

#include<iostream>
using namespace std;

// we make it virtaul function here now with the help f this display() function of derived class is run.
// as it tells the compiler that don't run my function, run derived class function.

class BaseClass{
    public:
        int var_base = 1; // for not producing garbage value we put it equal to one 
        virtual void display()
        {
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        int var_derived = 1;
        void display()
        {
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};
// to resolve the issue that base pointer should assign object of derived class but it run dislay function of base class 
// to resole it we use virtual functions]
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}