// C++ Templates: Templates with multiple parameters
/*
syntax for more then one data type template
// CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE, TWO OR MORE THEN TWO)

template<class T1, class T2.... and many more>  // (COMMA SEPERATED)
class nameOfClass{
    // body
}
*/
#include<iostream>
using namespace std;

template<class T1, class T2> // (COMMA SEPERATED)
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    // myClass<int,char> obj(1,'c');
    myClass<int,float> obj(1,1.25);
    // myClass<char,float> obj('k',7.9);
    // myClass<char,char> obj('a','b');

    obj.display();
    return 0;
}