// Abstract Base class & Pure Virtual Functions in C++
// Pure virtual functions are used to make abstract base class
// abstarct base class are the class which only have the motive to be use as a base class on which many derived classes are made
// as here CWH is an abstract base class that do nothing only used to make derived classes with the help of it.
// A absolute base class is that base class that at least have one pure virtual function

#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        // Make a constructor CWH
        CWH(string s, float r){
            title= s;
            rating = r;
        }
        // Make a virtual function
        // this impose you to overwrite the display function in derived classes
        // without them code give error
        virtual void display() = 0; // do-nothing function -> pure virtual function
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s,r){
            videoLength = vl;
        }
    void display(){
        cout<<"This is an amazing video with title: "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;

    }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s,r){
            words = wc;
        }
        void display(){
        cout<<"This is an amazing text tutorial with title: "<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No. of words in this text tutorial is: "<<words<<" words"<<endl;

    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code with harry video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();

    // for Code with harry text
    title = "Web Development";
    words = 500;
    rating = 4.5;
    CWHText WebD(title,rating,words);
    // WebD.display();

    // make two pointers that used to display the code
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &WebD;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}