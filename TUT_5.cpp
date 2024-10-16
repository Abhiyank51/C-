//  BASIC INPUT/OUTPUT IN C++

// C++ comes with libraries which helps us in performing input/output.
// In C++ sequence of bytes corresponding to input and output are commonly known as streams.

// Input Stream: Direction of flow of bytes takes place from input device(for ex. Keyboard) to the main memory.

// Output Stream: Direction of flow of bytes takes place from main memory to the
// output device (for example Display)

// iostream =  input/output Stream
// stream means =  sequence of bytes
// input stream = direction of flow of bites form output device to the main memory
// output stream = after programm the result come is output stream/ main memory to output device


#include<iostream>
using namespace std;

// '<<' is called insertion operator
// '>>' is called Extraction operator
int main(){
    int num1, num2;
    cout<<"Enter the value of num1:\n";
    cin>>num1;

    cout<<"Enter the value of num2:\n";
    cin>>num2;

    cout<<"The sum is "<< num1+num2;
    return 0;
}


// DID NOT USE RESEARVED KEYWORD AS VARIABLE NAME 