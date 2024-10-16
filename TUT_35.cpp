// Destructors in C++
// Use to free up the memory that has been occupied by constructors by destroy it in memory.
// Destructor never takes an argument nor does it return any value.
// It is implicitely run by compiler.

#include<iostream>
using namespace std;

int count = 0;  // global variable

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }

        // Making a destructor  ~ sign used to make a destructor with name of the class to destruct.
        ~num(){
            cout<<"This is the time when my destructoe is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    // The thing that made inside this block would destroy when come outside the block.
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;

    return 0;
}