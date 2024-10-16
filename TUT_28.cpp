//  More on C++ Friends Function.
#include<iostream>
using namespace std;

// Forward declaration of Y class for class X for friend function

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X,Y);  // Friend function
};
class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X,Y);   // Friend function
};

void add(X o1, Y o2){
    cout<<"Summing datas of X and Y gives me "<<o1.data + o2.num;
}


int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1,b1);

    return 0;
}