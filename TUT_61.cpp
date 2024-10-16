// File I/O in C++ : Read/Write in the same program & closing Files

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our file with hout stream
    // hout is the name of the file
    // offstream is used to write in the file

    ofstream hout("File60.txt");

    // Creating a name string and filling it with the string enterd by the user
    cout<<"Enter your name: ";
    // make a string type variabe name that store the input of user
    string name;
    cin>>name;

    // Write in the file
    hout<<"My name is: " + name;

    // close the file 
    // this close function will cut up the link between code file and text file
    hout.close();

    // To read file
    ifstream hin("File60.txt");
    string content;
    hin>>content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}