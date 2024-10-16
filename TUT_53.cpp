// this pointer in C++
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a)
        // A & setData(int a)  // now returns an object with help of this
        {
            // a = a;  // can't write same name as declared in private variables as it produce garbage value
            // use this pointer to resolve it
            this->a = a;
            // return *this;
        }
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main(){
    A a;
    // a.setData(4).getData();  // because set data now return an object so we can put getdata function on it .
    a.setData(5);
    a.getData();
    return 0;
}

// this is a keyword which is a pointer which points to the object which invokes the member function.
// this keyword is also used to return that particluar object otherwise there is no another way.
// this pointer points to that object that calls member function.