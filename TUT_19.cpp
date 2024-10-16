// FUNCTION OVERLOADING
// it is used when function have same name but different work
// the c++ language automatically use the particular function for output that should needed by match the arguments.

#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}

// DIFFERENT FUNCTIONS WITH SAME NAME(FUNCTION OVERLOADING) --->

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r* r * h);
}

// Calculate the volume of a cube
int volume(int a){
    return a*a*a;
}

// Rectangular box volume
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7,and 6 is: "<<sum(3,7,6)<<endl;
    cout<<"The volume of recatngular bos(cuboid) of 3,7,6 is: "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of r = 3, h = 4 is: "<<volume(3,4)<<endl;
    cout<<"The volume of cube of side = 5 is: "<<volume(5)<<endl;
    return 0;
}