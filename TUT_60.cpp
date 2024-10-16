// File I/O in c++  Reading and writing files

#include<iostream>
#include<fstream>  // used to import classes

// The useful classes for working with files in C++ are
// 1. fstreambase
// 2. ifstream   ---> derived from fstreambase
// 3. ofstream   ---> derived from fstreambase

// In order to work with files in C++, you will have to open it. 
// Primarily there are two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main(){
    string st = "Hey how are you";
    string st2;
    // Opening file FILE_60.txt using constructor and writing it
    // make an object of ofstream name out to open file
    ofstream out("File60.txt");  // Write operation
    out<<st;

    // Opening file FILE_60.txt using constructor and reading from it
    ifstream in("File60b.txt");  // Read operation
    in>>st2;
    // spaces and new lines are not come when we read the text usinf ifstream
    //that's wht from file TUT60b.txt we only get This as output.
    //TO RESOLVE IT
    // the no of time you run getline function you get a new line of the text in output.
    getline(in,st2);
    // getline(in,st2);
    cout<<st2;  
    return 0;
}