// LIST IN C++ STL

#include<iostream>
#include<list>
using namespace std;

// instead of done all this in main function to print list make a display function
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1;    // Create a list of 0 length

    // To add element push_back() is used
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(1);
    list1.push_back(8);
    list1.push_back(2);
    display(list1);

    // To delete element pop_back() is used - delete element at the end
    // list1.pop_back();  // delete element at last
    // list1.pop_back();

    // To delete from front
    // list1.pop_front();

    // To delete element from front
    // list1.remove(1);

    // sorting the list
    // list1.sort();


    // Now make an iterator
    // list<int> :: iterator iter;
    // iter =list1.begin();    // here iterator iter points to the first element of list1.
    // cout<<* iter<<" ";  // to know the value present at first index position.

    // iter++;             // for next value
    // cout<<*iter<<" "; 

    // iter++;             // for next value
    // cout<<*iter<<" "; 

    // iter++;             // for next value
    // cout<<*iter<<" "; 

    // iter++;             // for next value
    // cout<<*iter<<" "; 

    // display(list1);


    // here in this list we have elements but dont have value of them now give them values
    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;  // set value 45 at index 0 of list using iterator
    iter++;      // increment iter for fill up the next value
    *iter = 6;
    iter++;
    *iter = 9;

    display(list2);

    // To merge both the lists
    list1.merge(list2);
    cout<<"List 1 After merging: ";
    display(list1);

    // sorting both lists and merge
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 After merging: ";
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);



    return 0;
}