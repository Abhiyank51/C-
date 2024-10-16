// NEW example
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(void){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }
        friend void distance(Point x, Point y);
};

// To calculate distance between points.
// void distance(int x, int y){
//         cout<<"The distance between the points are: "<<sqrt((pow((x2-x1),2)+(pow((y2-y1),2))))<<endl;
//     }



//Ques.
// Create a function (Hint: Make a friend function for it ) which takes 2 point objects and computes the distance between them.

void distance(Point o1 ,Point o2){
    float dist;
    dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
    cout<<"The distance between the points are: "<<dist<<endl;
}



int main(){
    Point p(1,0);
    p.displayPoint();

    Point q(70,0);
    q.displayPoint();
    distance(p,q);

    return 0;
}
