// Protected Access Modifier in C++
// protected is used for that variable in class that is private but for some use can be accessed or inherit by the derived class.
#include<iostream>
using namespace std;

// Base class
class Base{
    protected:
        int a;
    private:
        int b;
};

// For a protected member;
//                           Public derivation       Private derivation      Protected derivation
// 1. Private members           Not inherited           Not inherited           Not inherited
// 2. Protected members         Protected               Private                 Protected
// 3. Public members            Public                  Private                 Protected

// Derived class
class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a;    // will not work since a is protected in both base and derived class.
    return 0;
}