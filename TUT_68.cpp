// Member Function Templated & Overloading Template Function
#include<iostream>
using namespace std;

template <class T>
class Abhiyank{
    public:
        T data;
        Abhiyank(T a){
            data = a;
        }
        // void display(){
        //     cout<<data;
        // }
        
        // write display function outside the class using scope resolution operator
        void display();

};

// display function
template <class T>
void Abhiyank<T> :: display(){
    cout<<data;
}

// Now see function overloading
void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func1()"<<a<<endl;
}

int main(){
    // Abhiyank<int> h(5);
    // Abhiyank<float> h(5.6);
    // Abhiyank<char> h('c');

    // cout<<h.data<<endl;  // same as display function
    // h.display();


    // which func() function is called from both of them
    func(4);  // Exact match takes the highest priority
    func1(4);
    return 0;
}