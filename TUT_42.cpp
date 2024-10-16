// Exercise
// #include<iostream>
// using namespace std;


/* Create two classes
    1. simple calculator - takes input of 2 numbers using a utility function and performs -->  +, -, *, /  ,
    and display the result using another utility function
    2. scientific calculator - takes input of 2 numbers using a utility function and performs
    any four scientific operations of your choice and display the result using another utility function

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using.
    Q2. Which mode of inheritance are you using.
    Q3. Create an object of Hybrid calculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented;
*/

// class SimpleCalculator{
//     int a;
//     int b;
//     public:
//         void input(int num1, int num2){
//             cout<<"Enter the first number :"<<num1<<endl;
//             cin>>num1;
//             cout<<"Enter the second number: "<<num2<<endl;
//             cin>>num2;
//         }
//         int add(int num1, int num2){
//            return (num1 + num2);
//         }
//         int subtract(int num1, int num2){
//             return (num1 - num2);
//         }
//         int multiply(int num1, int num2){
//             return (num1*num2);
//         }
//         int divide(int num1, int num2){
//             return(num1/num2);
//         }
//         void display(void){
//             if(add){
//                 cout<<"The sum is: "<<<<endl;
//             }
//         }

// }
// int main(){
    
//     return 0;
// }



// 1. Multiple inheritance.
// 2. Public display mode.
// 3. Reusability is implemented because we reuse the typed code in derived class.
// Code:

#include <iostream>
#include<cmath>
using namespace std;

class simple
{
protected:
    int a, b;

public:
    void set1Data(int num, int num1)
    {
        a = num;
        b = num1;
    }
    void display(void)
    {
        cout << "Addition is: " << a + b << endl;
        cout << "Substraction is: " << a - b << endl;
        cout << "Multiplication is: " << a * b << endl;
        cout << "Division is: " << a / b << endl;
    }
};
class scientific
{
protected:
    int x, y;

public:
    void set2Data(int num, int num1)
    {
        x = num;
        y = num1;
    }
    void process(void)
    {
        cout << "The square root of x is " << sqrt(x) << endl;
        cout << "The square root of y is " << sqrt(y) << endl;
        cout << "The cube root of x is  " << cbrt(x) << endl;
        cout << "The cube root of y is " << cbrt(y) << endl;
    }
};

class derived:public simple,public scientific{
    public:
    void set(int a,int b){
        simple::set1Data(a,b);
        simple::display();
        scientific::set2Data(a,b);
        scientific::process();

    }
};

int main()
{
    int p,q;
    cout<<"Enter two number: "<<endl;
    cin>>p>>q;

    derived der;
    der.set(p,q);
    return 0;
}