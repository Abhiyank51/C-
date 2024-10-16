#include<iostream>
using namespace std;


// Class Syntax
// class TUT_21
// {
// private:
//     /* data */
// public:
//     TUT_21(/* args */);
//     ~TUT_21();
// };

// TUT_21::TUT_21(/* args */)
// {
// }

// TUT_21::~TUT_21()
// {
// }


// we can't access private class directly, we access it using a define function as here setData is that function.
// public class data can be accessed.

// Ex.
class Employee
{
    private:
        int a,b,c;    // private variables did not want to see by anyone, eg. employee salary
    public:
        int d,e;      // public variables anyone can see it. ex. id number, car pass.
        void setData(int a1,int b1,int c1);    // make function to set data
        void getData(){                      // make function to get data
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"THE value of c is: "<<c<<endl;
            cout<<"THE value of d is: "<<d<<endl;
            cout<<"THE value of e is: "<<e<<endl;
        }
};                   

// Define setData function outside the class or you can make it inside the class your's choice.
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

// Main function
int main(){
    // make an object
    Employee harry;
    harry.setData(1,2,4);
    // harry.a = 134;   //  give error as a is private can't access directly.
    harry.d = 34;
    harry.e = 43;
    harry.getData();
    return 0;
}