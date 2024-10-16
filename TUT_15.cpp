// FUNCTIONS AND FUNCTION PROTOTYPES IN C++

#include<iostream>
using namespace std;

// //FUNCTION TO SUM
// int sum(int a, int b){
//     int c = a+b;
//     return c;
// }
// int main(){
//     int num1, num2;
//     cout<<"Enter the first number: ";
//     cin>>num1;
//     cout<<"Enter the second number: ";
//     cin>>num2;
//     cout<<"The sum of the numbers are: "<<sum(num1,num2);
//     return 0;
// }





// Function prototype

// Function prototype syntax
// type function-name (argument);


// if we want to add the function after the int main() then we have to use function prototype otherwise error come.
// it gives full structure to the program what to use when and what come next.

// With the help of function prototype we can write the upper code as

// Function prototype
int sum(int a, int b);
void g();
// or can write as
// void g(void)



int main(){
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    // num1 and num2 are actual parameters that are pass to the function
    // a and b are formal parameter which are used in function as a referenece,.
    cout<<"The sum of the numbers are: "<<sum(num1,num2);
    g();
    return 0;
}
//FUNCTION TO SUM
int sum(int a, int b){
    int c = a+b;
    return c;
}
void g() {
    cout<<"\nHello, Good Morning."<<endl;
}

// with help of this we can write main function first then the sum function.
// in function prototype
// int sum(int a, int b) <---- acceptable

// int sum(int, int) <---- acceptable

// int sum(int a, b) <---- not-acceptable