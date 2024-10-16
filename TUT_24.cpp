// STATIC DATA MEMBERS & METHODS IN C++

// Static variable is the variable that all objects can share inside the main function
// as here count variable share by all employees.

#include<iostream>
using namespace std;

// static varibale is also known as class varibale in OOPS

class Employee{
    int id;
    static int count;   // static variable
    // not to use static variable we have to write
    // int count = 0;
    // static variable is used beacuse -  as a problem that every object has its own count and it does not update to 1,2,3... it will always run as 1,1...
    // To overcome this problem we use static variables.
    public:
        void setData(void){
            cout<<"Enter the Id: "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of this employee is: "<<id<<" and this is employee number "<<count<<endl;
        }

        // Now we make a static function.
        static void getCount(void){
            cout<<"The value of count is: "<<count<<endl;
        }
};

// A static variable is by default initialize by 0.

int Employee :: count;  // default value is zero
// change default value as your choice as
// int Employee :: count = 1000;

// Static functions can only be accessed by other access variables.
// cant add simple variable like id inside the static function throws error.

int main(){
    Employee Abhiyank , Harsh, Bharat;
    // Count is the static data member of class Employee.
    // Abhiyank.id = 1;
    // Abhiyank.count = 1;  // Cant do this because id and count are private variables.
    Abhiyank.setData();
    Abhiyank.getData();
    Employee::getCount();

    Harsh.setData();
    Harsh.getData();
    Employee::getCount();

    Bharat.setData();
    Bharat.getData();
    Employee::getCount();

    return 0;
}
