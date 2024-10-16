// Array of Objects using pointers in C++

#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }
};

int main(){
    // Shop *ptr = new Shop[10]   // OR LIKE THIS'
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];   // here we allocatememory that stores upto 34 integer 
    // here integer pointer (*ptr) stores the address of shop object
    

    // general store item
    // veggies item
    // hardware item

    ShopItem *ptr = new ShopItem[size];  // allocate memory upto size and give first index to pointer(*ptr).
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}