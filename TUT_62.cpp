// File I/O in c++ : open() and eof() functions 

#include<iostream>
#include<fstream>
#include<string>   // getline function is present in string
using namespace std;

int main(){
    ofstream out;
    // With the help of open function you can open the file
    out.open("File60.txt");
    out<<"This is me"<<endl;
    out<<"This is me also"<<endl;
    out<<"This is how you can write many sentence in it";
    // the file opened with open() function is automatically close
    // but its a good practice to write a close function.
    out.close();


    ifstream in;
    // here two objects are written to print the next word
    
    string st, st2;
    in.open("File60.txt");
    // in>>st>>st2;
    // getline(in,st);
    // getline(in,st);
    // getline(in,st);
    
    // While loop to print the text in file
    // eof = end of file 
    // jab tak end of file nahi hua he tab tak while loop chalana hai
    while (in.eof() ==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    // cout<<st<<st2;

    in.close();
    return 0;
}