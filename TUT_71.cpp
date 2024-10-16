// Vector in C++
// We cant use array as i does not resize automatically 
// We cant add new element to array without extend its size

// Vectors have the functionality that the resize themselves accordingly to the need of add data to them.
// It automatically manage its size

#include<iostream>
#include<vector>  // to import vector library
using namespace std;

template <class T>
void display(vector <T> &v){
    cout<<"Displayig this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main(){
    // here we create a vector
    // Ways to create a vector
    vector<int> vec1;  // zero length vector
    // display(vec1);    // display nothing as vec1 is empty

    vector<char> vec2(4);  // 4-element integer vector
    vec2.push_back('5');
    display(vec2);

    vector<char> vec5(vec2);  // 4-element integer vector from vec2

    vector<char> vec3(4);  // 4-element character vector
    vec3.push_back('a');
    display(vec3);

    vector<double> vec4(4);  // 4-element double vector

    vector<int> vec6(6,3);  // means a 6- element vector or 3s
    display(vec6);
    cout<<vec6.size();


    // int element, size = 5;
 

    // cout<<"Enter the size of your vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     // push_back() function to push elements into the vector
    //     vec1.push_back(element);
    // }
    // // pop_back() to pop or delete the last element in vector
    // // vec1.pop_back();
    // display(vec1);
    
    // insert method
    // first make an iterator
    // vector<int> :: iterator iter = vec1.begin(); // we point our iterator to the first element of the vector
    // vec1.insert(iter,566);
    // vec1.insert(iter+1,566);  // need to add number after 0 at 1 

    //to insert copies of number ex 5 copies of 566
    // vec1.insert(iter+1,5,566);
    // display(vec1);
    return 0;
}