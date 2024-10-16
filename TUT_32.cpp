//  Constructors with default arguments in C++

#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a, int b=9, int c = 8)  // give 'b and c' a default value
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData();
};

// Define print data function 
void Simple::printData(){
    cout<<"The value of data1,data2 & data3 is: "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main(){
    Simple s1(1,4);
    s1.printData();

    // if we didn't give the value of b then it will print the default value of it as here 9.
    Simple s2(5);
    s2.printData();

    Simple s3(1,2,3);
    s3.printData();

    Simple s4(7);
    s4.printData();

    return 0;
}