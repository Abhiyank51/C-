// Function Objects(Functors) in C++ STL
// Function Objects: Function wrapped in a class so that it available like an object

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,13,4,2,54,7};
    // This sort an array in ascending order
    sort(arr,arr+6); // sort from 1 to 5th position not index

    // Passing a function object as an argument to sort() function
    // This sort the array in descending order
    sort(arr,arr+6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// C++ CODE WITH HARRY 74/74
// OFF PLAYLIST 22-01-2024 (12:46 AM)