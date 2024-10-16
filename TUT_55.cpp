// Pointers to Derived classes in C++

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

// Main attention:
// A pointer of base class should point to the object of derived class, this is allowed by C++
// if you do this then the function display() is run of base class not of derived class.

int main(){
    BaseClass * base_class_pointer;     // Base class pointer 
    BaseClass obj_base;                 // Base class object
    DerivedClass obj_derived;           // Derived class object
    base_class_pointer = &obj_derived;  // here we pointing the base class pointer to the object of derived class.
    // here object is of derived class but pointer or display() function is run of base class 
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;  // not valid will through an error
    base_class_pointer->var_base = 3400;
    base_class_pointer->display();


    // Now we make a derived class pointer
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;  // here we point derived class pointer to the derived class object
    derived_class_pointer->var_derived = 44;  // this bind to the derived class function now 
    derived_class_pointer->display();
    return 0;
}