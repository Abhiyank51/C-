// Virtual function examples + creation rules in C++


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
        virtual void display(){} //if there is no display function found in it's derived class then the compiler run this display function.
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

// Rules for virtual function
// 1. A virtual function cannot be static.
// 2. They are accessed by objec pointers.
// 3. Virtual function an be a frined of another class.
// 4. A virtual function in base class moght not be used.
// 5. If a virtual function is defined in a nase class, there is no necessity of redifining
//    it in the derived class.
