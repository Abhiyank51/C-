// Writing our first Template in C++

#include<iostream>
using namespace std;

// T is written where you want to use custo(many types of data types) data types.
template <class T>
class vector{
    public:
    // int *arr;  
    T * arr;
    int size;
        // constructor
        vector(int m){
            size = m;
            // arr = new int[size];
            arr = new T[size];
        }
    // int dotProduct(vector &v){}
    T dotProduct(vector &v){
        // int d = 0;
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 5;
    // v1.arr[2] = 6;

    // vector v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 6;
    // v2.arr[2] = 7;
    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;


    // FOR TEMPLATES
    // we can replace float with int,double,char and other data types with help of templates
    // Write <> in between this which vector you want to specify with which data type.
    vector <float>v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector <float>v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}