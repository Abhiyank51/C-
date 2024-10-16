// Code for constructor in derived class in C++


// ORDER OF EXECUTIONS IN DIFFERENT CASES MOST IMPORTANT
/*
Case1:
class B: public A{
    // Order of execution of constructor --> First(A) then (B) beacuse A is base class and B is derived class
};

Case 2:
Multiple Inheritance
class A: public B, public C{
    // Order of execution of constructor --> First(B) then (C) then (A) beacuse if B class write first then it execute first  
};

Case 3:
class A: public B, virtual public C{
    // Order of execution of constructor --> First(C)- because it is a virtual class then (B) and then A()
}
*/


#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called."<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called."<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};


class Derived : public Base1, public Base2{
    int derived1, derived2;    // private data members of Derived class
    public:
        Derived(int a, int b, int c, int d): Base1(a) , Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }
};
int main(){
    Derived Abhiyank(1,2,3,4);
    Abhiyank.printDataBase1();
    Abhiyank.printDataBase2();
    Abhiyank.printDataDerived();
    return 0;
}