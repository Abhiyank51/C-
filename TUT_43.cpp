// Ambiguity Resolution in Inheritance in C++

#include<iostream>
using namespace std;

// Base Classes
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"What are you doing?"<<endl;
        }
};

// Derived Classes
class Derived : public Base1, public Base2{
    int a;
    // Resolve ambiguity by telling the derived class that i want to use greet of Base1 class.
    public:
        void greet(){
            Base1 :: greet();
            // or
            // Base2 : greet();  // yours choice which greet you want to use.
        }
};

// For ambiguity 2
class B{
    int a;
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

// If D class has its personal say() function then it display it and if not that D class is here inherited from class B.
// So it use the say() function of B class.
class D : public B{
    int a;
    // D's new say() method will overwrite base  class B's say() method
    // uncomment below to see.
//     public:
//         void say(){
//             cout<<"Hello my beautiful people"<<endl;
//         }
};

int main(){
    // Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;

    // base1obj.greet();
    // base2obj.greet();

    // Derived d;
    // d.greet();  // gives error as greet is ambiguous -- same function in both classes confused which one to use.

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
