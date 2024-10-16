// OOPs - Classes and objects
// C++ ---> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      --> members are public
//      --> No methods
// classes --> structures + more
// classes --> can have methods(functions) and properties(values)
// classes --> can make few members as private & few as public.
// structures in C++ are typedefed
// you can decalre objects along with the class declaration like this.
// class Employee{
//     // Class definition
// }harry, rohan, lovish;

// can't set private varibales directly.
// harry.salary = 8 makes no sense if salary is private.


// NESTING OF MEMBER FUNCTIONS IN C++
#include <iostream>
#include <string>
using namespace std;

class binary{
private: 
    string s;
    // chk_bin();  // we can make a function private so no one can access it
    // if use in int main it get error

public:
    void read(void);                 // read number from user
    void chk_bin(void);              // check binary is or not
    void ones_complement(void);      // ones complement function
    void display(void);              // display binary number
};

void binary :: read(void){
    cout<<"Enter a Binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
// One's compliment of binary function
void binary :: ones_complement(void)
{   
    chk_bin();   // Nested function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

// Display the binary number

void binary :: display(void){
    cout<<"Displaying your binary number: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }cout<<endl;
    
}

int main()
{
    // Nesting of member functions
    binary b;
    b.read();
    // b.chk_bin();  we have nested it in ones_complement so don't want to write it again 
    b.display();   // before ones complement
    b.ones_complement();
    b.display();    // after ones complement
    return 0;
}