//  Friend Classes & Member Functions in C++

#include<iostream>
using namespace std;

// You can guarrantee the compiler that class sumComplex used in calculator is in existence in forward code.
// Forward declaration
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a + b);
        }
        // firstly declare the definition of the function which could not define yet.
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);

};

class Complex{
    int a,b;
    // declare friends function for calculator class sumComples function to access private data of Complex class (data: a,b).
    // Individually declare every function as friend here.
    // friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

    // Alter:
    
    // If function>100's then we make afriend class that give access to all inputs from Complex class to calculator class.
    // declaring the entire calculator classa s friend
    friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
            return((o1.a + o2.a));
};

int Calculator :: sumCompComplex(Complex o1, Complex o2){
            return((o1.b + o2.b));
};


int main(){
    Complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part o1 and o2 is "<<res<<endl;
    int cop = calc.sumCompComplex(o1,o2);
    cout<<"The sum of complex part o1 and o2 is "<<cop<<endl;
    return 0;
}