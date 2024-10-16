// C++ Objects Memory Allocation and using arrays in Classes
#include<iostream>
using namespace std;

// By default all input inside the class is private 

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter Id for your item no: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price for your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<< " is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}