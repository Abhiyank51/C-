// What are arrays in C++

// An array is a collection of items of similar type stored in contiguous
// memory locations.

// Sometimes, a simple variable is not enough to hold all the data.

// For example, lets say we want to store the marks of 2500 students,
// having 2500 different variables for this task is not feasible.

// To solve this problem, we can define an array with size 2500 that can hold
// the marks of all students.

// #include<iostream>
// using namespace std;

// int main(){
//     // ARRAY EXAMPLE
//     int marks[] = {23,45,56,89};
//     marks[2] = 33;   // You can change the value of an array
//     // You have to change the value of array before printing it.
//     cout<<"These are english marks: "<<endl;
//     // cout<<marks[0]<<" ";
//     // cout<<marks[1]<<" ";
//     // cout<<marks[2]<<" ";
//     // cout<<marks[3]<<" "<<endl;

//     // printing of marks using for loop
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     // }cout<<endl;

//     // Print array using while loop
//     // int i =0 ;
//     // while (i<4)
//     // {
//     //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     //     i++;
//     // }

//     // Print array using do-while loop
//     // int i = 0;
//     // do
//     // {
//     //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     //     i++;
//     // } while (i<4);
    
    
    
    
//     int mathmarks[4];
//     mathmarks[0] = 90;
//     mathmarks[1] = 91;
//     mathmarks[2] = 92;
//     mathmarks[3] = 93;
//     cout<<"These are maths marks: "<<" ";
//     cout<<mathmarks[0]<<" ";
//     cout<<mathmarks[1]<<" ";
//     cout<<mathmarks[2]<<" ";
//     cout<<mathmarks[3]<<" ";
//     return 0;
// }








// C++ POINTERS AND ARRAYS
// marks array = {32  ,   99,    38,    51}
// index =        0        1      2      3

// marks =  address of first block
// &marks -  WRONG!

// first we define a pointer private

// p = marks;
// p++;

// if we increment the pointer then it gives incremented value at next index values

// if we dereference it we get
// *(p) = 32
// *(p+1) = 99
// *(p+2) = 38
// *(p+3) = 51

// int a = 3;
// &a <--- address of a 


// -->POINTER ARITHMETIC
// FORMULA-->

//******* address(new) = address(current) + i*sizeof(data type)*****//

// here,
// address(new) = p+i
// address(current) = p


// ex. old address = 32,   or current address
//     here i = 1, size of data type is 4
//     so new address is-->

//     32+1*(4) = 36
    
//     new address = 36,



// CODING

// Pointers and array 

#include<iostream>
using namespace std;

int main(){
    int marks[] =  {43,27,89,54,76};
    int* p = marks;
    cout<<*(p++)<<endl;  // print value at p i.e at first index(0) then increment 
    // if again print the value of p we get incrementd value at index 1
    cout<<*p<<endl;  //  print next with it
    cout<<*(++p)<<endl;   // first increment then print
    // cout<<"The value of marks[0] is: " <<*p<<endl;
    // cout<<"The value of marks[0] is: " <<*(p+1)<<endl;
    // cout<<"The value of marks[0] is: " <<*(p+2)<<endl;
    // cout<<"The value of marks[0] is: " <<*(p+3)<<endl;
    // cout<<"The value of marks[0] is: " <<*(p+4)<<endl;


    return 0;
}