// Virtual Base Class 

// We make a virtual class by this pattern here
//        -----> TEST   ----->
// STUDENT                       ----->RESULT
//        -----> SPORTS ----->

#include<iostream>
using namespace std;

// Make a class student used as virtual class
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is: "<<roll_no<<endl;
        }
};

// Inherit a virtual student class in test and sports
// or you can write like this also
// class Test : public virtual Student{}
class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }
            void print_marks(void){
                cout<<"Your result is here: "<<endl<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
            }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

// Make a derived class result from test and sports as a base class here
class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    Result Abhiyank;
    Abhiyank.set_number(4);
    Abhiyank.set_marks(94.4,96.7);
    Abhiyank.set_score(9);
    Abhiyank.display();

    return 0;
}