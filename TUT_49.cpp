// Initialization List in Constructors

/*
Syntax for initialization list in constructor:
constructor(argument-list) : initialization-section{
    assignment + other code;
}
EX.
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}   // here a is assigned to i and b is assigned to j directly with the use of this syntax.
}
*/

#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i) , b(i+j)
        // Test(int i, int j) : a(i) , b(2 * j)
        // Test(int i, int j) : a(i) , b(a + j)  // executed as a written earlier and now the value of a is given if a is not written earlier then b ,get error.
        // The variable that declare first should execute first as we see in Test class a is initialize first so it should execute first then b .
        // In lower code b execute first then a so in output we get garbage value.
        // Test(int i, int j) : b(j), a(i+b)/
        Test(int i, int j) // : a(i)
        {
            a = i; // also the value of a is initialize like this
            b = j; // we can also initialize value of b inside the fxn
            cout<<"Constructor Executed"<<endl;
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }
};
int main(){
    Test t(4,6);
    return 0;
}