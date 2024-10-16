// Derive class privately
// SINGLE INHERITANCE

#include<iostream>
using namespace std;

class Base{
    int data1;  // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
} 
int Base :: getData1(void){
    return data1;
}
int Base :: getData2(void){
    return data2;
}

class Derived : private Base  // Class is being derived privately
{
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(void){
    setData();
    data3 = data2 * getData1();
}
void Derived :: display(void){
    cout<<"Value of data 1 is "<<getData1()<<endl;  // data 1 written like this because it is private in base class and can be access by any function only.
    cout<<"Value of data 2 is "<<data2<<endl;   // data 2 and 3 are write like this because they are public they can be directly accessed by name.
    cout<<"Value of data 3 is "<<data3<<endl;
}

int main(){
    Derived der;
    // der.setData();  // cannot call it as it becomes now private so call it under process function
    der.process();
    der.display();
    return 0;
}