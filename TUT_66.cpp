// C++ template : CLss Templates with default parameters

#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Abhiyank{
    public:
        T1 a;
        T2 b;
        T3 c;
        // Constructor
        Abhiyank(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;

        }
};

int main(){
    // by using already defined default parameters in template
    Abhiyank<> A(4,6,'a');
    A.display();
    cout<<endl;

    // by specify data types yourself
    Abhiyank<float,char,char> g(1.4,'s','r');
    g.display();

    return 0;
}