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

/*
Ans 1. Multiple Inheritance
Ans 2. Public 
Ans 3. In int main()  function ---> Object = Calc
Ans 4. We make hybrid calculator with the help of simple and scientific calculator taht is used in both cases.
*/
#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a:"<<endl;
            cin>>a;
            cout<<"Enter the value of b:"<<endl;
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class ScientificCalculator{
    int a,b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a:"<<endl;
            cin>>a;
            cout<<"Enter the value of b:"<<endl;
            cin>>b;
        }
        void performOperationsScientific(){
            cout<<"The value of cos(a) and cos(b) is: "<<cos(a)<<", "<<cos(b)<<endl;
            cout<<"The value of sin(a) and sin(b) is: "<<sin(a)<<", "<<sin(b)<<endl;
            cout<<"The value of exp(a) and exp(b) is: "<<exp(a)<<", "<<exp(b)<<endl;
            cout<<"The value of tan(a) and tan(b) is: "<<tan(a)<<", "<<tan(b)<<endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main(){
    // SimpleCalculator Calc;
    // ScientificCalculator Calc;
    // Calc.getData();
    // Calc.performOperations();

    HybridCalculator Calc;
    Calc.getDataScientific();
    Calc.performOperationsScientific();
    Calc.getDataSimple();
    Calc.performOperationsSimple();
    return 0;
}