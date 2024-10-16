// Maps in C++ STL
// Map is used to store key value pairs
// Map is an associative array

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Abhiyank"] = 98;
    marksMap["Shiwang"] = 99;
    marksMap["Ayush"] = 90;

    // To insert another key value pair
    marksMap.insert({{"Mudit",78},{"Kohli",89}});

    // Now we make an iterator to print it
    map<string,int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
        // from first we get the key, from second we get the value
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}