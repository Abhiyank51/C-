// C++ Function Templates & Function Templates with Parameters 

#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;   // for get output in float
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;   // for get output in float
//     return avg;
// }

// To not make these functions again and again we define a template function

// Template function to swap 
// as Name swap is already present in STP so we have to change its name to make a function of it.

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

// By me
// template<class T1, class T2>
// void swapp2(T1 &a, T2 &b){
//     T1 temp = a;
//     a = b;
//     b = temp;
// }


// Function to find average 
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;   // for get output in float
    return avg;
}


int main(){
    float a;
    float b;
    // With the help of Template function we can add 
    // different data types to the function without defining them seperately.

    // a = funcAverage(5.3,2.5);
    // a = funcAverage(2,3);
    a = funcAverage(3.2,5);
    cout<<"The average of these two numbers are: "<<a<<endl;
    // b = funcAverage2(5,2.4);
    // cout<<"The average of these two numbers are: "<<b<<endl;
    // int x = 5, y = 7;
    float x = 3.4, y =8.2;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    swapp(x,y);
    cout<<"After Swap: "<<endl;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;

    // cout<<endl;
    // // BY ME
    // float u = 8.3,  v = 9;
    // cout<<"Value of u: "<<x<<endl;
    // cout<<"Value of v: "<<y<<endl;
    // swapp2(x,y);
    // cout<<"After Swap: "<<endl;
    // cout<<"Value of u: "<<x<<endl;
    // cout<<"Value of v: "<<y<<endl;

    return 0;
}