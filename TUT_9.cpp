// C++ : IF-ELSE & CONTROL STRUCTURES

// Control structures are of 3 types
// 1. Sequence structure
// 2. Selection structure
// 3. Loop structure
// These all are basic structures


// 1. Sequence structure flow

//    Entry---> Action1----->Action2----->Exit

// 2. Select structure flow
//                      ---->True----->A1
//    Entry--->Condition                   ----->EXIT
//                      ---->False---->A2


// 3. Loop structure format 
//                                                        --->If true--->Again loop
//    Entry---->Enter inside the loop---->Check condition
//                                                        --->If False--->Exit loop

// if - else statement
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 0;
//     if(i<3){
//         cout<<i<<endl;
//     }
//     return 0;
// }        

// if-else ladder

//switch case statements  
// switch(expression){
//     case1:
//     {
//         action1;
//     }
//     default:
//        {
//            action4;
//        }
// }  




#include<iostream>
using namespace std;

// IF - ELSE STATEMENT/ Selection control structure/ IF-ELSE LADDER 
// int main(){
//     // cout<<"This is tutorial 9."<<endl;
//     int age;
//     cout<<"Tell me your age: ";
//     cin>>age;
//     if((age<18) && (age<0)){
//         cout<<"You cannot come to my party"<<endl;
//     }
//     else if(age==18){
//         cout<<"You are a kid."<<endl;
//     }
//     else if(age<1){
//         cout<<"You are not yet born";
//     }
//     else{
//         cout<<"You can come to the party"<<endl;
//     }

//     return 0;
// }


// Selection control structure: Switch case statement
int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch cases"<<endl;
    return 0;
}