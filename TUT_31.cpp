// Constructor overloading in C++
// Make different constructors of same name is known as constructor overloading.
// The function choose that constructor which is best fit for their parameters.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    // By default if we do not pass any arguments inside the function Complex() it returns 0+0i in output with the help of this constructor.
    Complex()   // Default constructor 
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)  // Parameterized Constructor declaration
    {
        a = x;
        b = y;
    }
    // Whenever the below constructor is invoked value of b by default become 0 if you only pass a in function in main function.
    Complex(int x){
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4,6);
    c1.printNumber();

    // Here b become by default 0;
    Complex c2(6);
    c2.printNumber();

    Complex c3;   // Default constructor 
    c3.printNumber();

    return 0;
}