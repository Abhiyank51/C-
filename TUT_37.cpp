#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}  // Default constructor for class Employee
};

// Derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     members/methods/etc..
// }

// Note:  VISIBILITY MODE
// 1. Default visibility mode is private.
// 2. Public visibility Mode: Public members of the base class becomes
//     Public members of the derived class.
// 3. Private visibility Mode: Public members of the base class becomes
//     Private members of the derived class.
// 4. Private members of the base class are never inherited.


// For creating public visibility mode type..
// class Programmer: public Employee
// {

// }
// Creating a Programmer class derived from Employee Base class
// This class if by default privately inherited.
class Programmer : Employee{
    public:
    int languageCode;
        // CONSTRUCTOR
        Programmer(int inpId){
            id = inpId;
            languageCode = 9;
        } 
        void getData(){
            cout<<id<<endl;
        }
};



int main(){
    Employee Abhi(1), John(2);
    cout<<Abhi.salary<<endl;
    cout<<John.salary<<endl;
    Programmer skillf(10);  // derived class
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    return 0;
}