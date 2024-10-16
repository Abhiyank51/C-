// INLINE FUNCTIONS, DEFAULT ARGUMENTS & CONSTANT ARGUMENTS.

#include<iostream>
using namespace std;


// inline function
// inline is the form of request to the compiler if he wants to accept or reject depend on the compiler.
// shortened the time of execution with the help of inline function.
// when function is too small only then use inline function not use for function made for big work.
// inline int product(int a, int b){
//     // not recommended to use below lines with inline function . (static)
//     // static int c = 0;  // always the value of c is 0 and never run again after executable calls.
//     // after c call start below this as in next call c become 1 and in next it be 2.
//     // c = c+1;
//     return a*b;
// }

// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b: "<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     return 0;
// }




// DEFAULT ARGUMENTS
// default arguments are the values which you will get at the time of calling by default that you have set them in your function parameter,
// here, default argument is factor set with default value.
// this can be change at time of calling as below.

// float moneyReceived(int currentMoney, float factor = 1.04){
//     return currentMoney * factor;
// }
// int main(){
//     int money = 100000;
//     cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
//     cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl;
//     return 0;
// }




// CONSTANT ARGUMENTS
// --> arguments that the function cannot change.
// ---> it use when we did not want any change in the arguments of our function.

// int strlen(const char *p){

// }





