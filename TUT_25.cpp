// Arrays of Objects & Passing Objects as Function Argument.
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;  // set as default salary for every employee
            cout<<"Enter the id of employee: "<<endl;
            cin>>id; 
        }
        void getId(void){
            cout<<"The id of this employee is: "<<id<<endl;
        }
};

int main(){
    // Employee Abhiyank, Anshul, Bharat;
    // Abhiyank.setId();
    // Abhiyank.getId();

    // If you have more than 1000 employees then you can hold their data like this
    Employee fb[4];   // 4 =  no. of employees change upto 1000.

    // Or inside a for loop
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}