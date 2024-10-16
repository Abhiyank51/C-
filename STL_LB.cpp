// STL IN C++

/*
C++ STL - > ALGORITHMS, CONTAINERS

CONTAINERS - > Sequence Container, Container Adaptars, Associative Containers, Unordered Associative

Sequence Container -> Array, Vector, Deque, List, forward_list
Container Adaptars -> Stack, Queue, Priority Queue
Associative Containers -> Set,Map,MultiSet,MultiMap
Unordered Associative ->Unorderd Set, Unordered Map, Unordered Multiset, Unordered MultiMap

Algorithms -> Binary Search
              Lower/Upper bound
              MIN/MAX
              Reverse/Rotate
              Sort/Swap etc.
*/





// The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc.
// It is a library of container classes, algorithms, and iterators. 
// It is a generalized library and so, its components are parameterized. 

// #include<iostream>
// using namespace std;


// ARRAY DATA STRUCTURE
// #include<array>  // standard template library for array
// int main(){
//     // int basicarray[3] = {1,2,3}; basic array looks like
//     array<int,4> a = {1,2,3,4};    //<int> = datatype, 4 = size
//     int size = a.size();
//     for(int i = 0; i<size; i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd index-> "<<a.at(2)<<endl; // at() function gives value at particular index

//     cout<<"Empty or not-> "<<a.empty()<<endl;  // empty() function checks if the array is empty or not // Output = 0 means False

//     cout<<"First Element-> "<<a.front()<<endl;  // front() function returns the first value of the array

//     cout<<"Last Element-> "<<a.back()<<endl;   //back() function returns the last value of the array
// }


// VECTOR DATA STRUCTURE
// Vector is a dynamic array
// Vector can dynamically increase or decrease size according to need
// If a vector whose size is full then it will create another vector of double of the size and store the previous vector element into it and make the previous vector empty for other storage.
// #include<vector>
// int main(){

//     // vector<int> a(5,1);   5 = size, 1 = initialize all elements with 1
//     // cout<<"Print a-> "<<endl;
//     // for(int i:a){
//     //    cout<<i<<" "; 
//     //}

//     // Create a vector that contains all the elements of a

//     // vector<int> last(a);
//     // cout<<"Print last-> "<<endl;
//     // for(int i:last){
//     //    cout<<i<<" "; 
//     //}

//     vector<int> v;
//     cout<<"Capacity -> "<<v.capacity()<<endl;  // checks the size of the vector
//     // We use push_back function to add an element in vectors
//     v.push_back(1); // 1 is element at index 0
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(2); // 2 is element at index 1
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(3); // 3 is element at index 2
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(4); // 4 is element at index 4
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(5); // 5 is element at index 5
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     //Size
//     cout<<"Size-> "<<v.size()<<endl;

//     // Element at index
//     cout<<"Element at 2nd Index-> "<<v.at(2)<<endl;

//     cout<<"Element at front-> "<<v.front()<<endl; // return element at front or we use v.begin() [begin function] for getting starting element 
//     cout<<"Element at back-> "<<v.back()<<endl;   // return element at last
 
//     cout<<"Before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back(); // delete the last element in vector

//     cout<<"After pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     //Clear the size means delete the elements not the capacity assign to it
//     cout<<"Before clear size-> "<<v.size()<<endl;
//     v.clear();
//     cout<<"After clear size-> "<<v.size()<<endl;
// }




// DEQUE DATA STRUCTURE
// A DATA STRUCTURE IN EHICH WE CAN PERFORM INSERTION AND DELETION FROM BOTH ENDS

// #include<deque>
// int main(){
//     deque<int> d;     // DEFINE DEQUE WITH DATA TYPE INT
//     d.push_back(1);   // ADD ELEMENT 1 USING PUSH_BACK FUNCTION AT LAST
//     d.push_front(2);  // ADD ELEMENT 2 USIG PUSH_FRONT FUNCTION AT FRONT

//     for(int i:d){     // PRINT THE DEQUE
//         cout<<i<<" ";
//     }cout<<endl;

//     // POP_BACK FUNCTION POP OUT THE LAST ELEMENT
//     // d.pop_back();
//     // cout<<endl;
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }

//     // POP FRONT FUNCTION POP OUT TE=HE FIRST ELEMENT
//     // d.pop_front();
//     // cout<<endl;
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }

//     // PRINT ELEMENT AT FIRST INDEX
//     cout<<"Print first element-> "<<d.at(1)<<endl;

//     // PRINT FIRST AND LAST ELEMENT USING FRONT ANS BACK FUNCTION
//     cout<<"Element at first-> "<<d.front()<<endl;
//     cout<<"Element at last-> "<<d.back()<<endl;

//     // CHECK IF DEQUE IS EMPTY OR NOT
//     // Return 0(false) if not empty
//     cout<<"Empty or not->"<<d.empty()<<endl;

//     // TO ERASE OR DELETE THE SIZE
//     cout<<"Before erase-> "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);    // WE have to give erase function a certain range otherwise it will not work here we give it range from first index to first+1 index.
//     cout<<"After erase-> "<<d.size()<<endl;
//     for(int i:d){
//         cout<<i<<endl;  
//     }
// }


// int printing for(int i:l)  here(i:l) means for i belongs to l




// LIST DATA STRUCTURE
// LIST STL IS MADE WITH THE HELP OF DOUBLY LINKED LIST
// #include<list>
// int main(){
//     list<int> l;

//     //list<int> n(l);  // copied the list

//     list<int> n(5,100);  // 5 baar 100 
//     cout<<"New list-> ";
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     for(int i:l){
//         cout<<i<<" ";
//     }

//     cout<<endl;
//     l.erase(l.begin());  // erase element from beginning here it erase 2
//     cout<<"After erase-> ";
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     // size of list
//     cout<<"Size of list-> "<<l.size()<<endl;
// }



// STACK DATA STRUCTURE
// #include<stack>

// int main(){
//     stack<string> s;
//     s.push("Abhiyank");
//     s.push("Yadav");
//     s.push("Etah");

//     cout<<"Top Element-> "<<s.top()<<endl;

//     s.pop();
//     cout<<"Top Element-> "<<s.top()<<endl;  // after pop 

//     cout<<"Size of Stack-> "<<s.size()<<endl;

//     cout<<"Empty or not-> "<<s.empty()<<endl;  // return 0 as nto empty
// }




// QUEUE DATA STRUCTURE
// #include<queue>
// int main(){
//     queue<string> q;
    
//     q.push("Abhiyank");
//     q.push("Yadav");
//     q.push("22MIP10074");

//     cout<<"Size before pop-> "<<q.size()<<endl;

//     cout<<"First Element-> "<<q.front()<<endl;
//     q.pop();
//     cout<<"First Element after Pop-> "<<q.front()<<endl;

//     cout<<"Size of queue after pop-> "<<q.size()<<endl;

//     cout<<"Empty or not-> "<<q.empty()<<endl;
// }




// PRIORITY QUEUE-> A priority queue is a type of queue that arranges elements based on their priority values. 
//                  Elements with higher priority values are typically retrieved before elements with lower priority values.

// A Queue In which it's First element always greater in priority queue
// The element whose value os smallest have higher priority
//E.G-> 4,8,12,20,35,45  here 4 has the highest priority as it has smallest value
// Default priority queue is max heap
 
// #include<queue>
// int main(){
//     // max heap creation
//     priority_queue<int> maxi;
//     // min heap creation
//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(4);  // bigger print first

//     cout<<"Size-> "<<maxi.size()<<endl;
//     int n = maxi.size();
//     cout<<"Maxi heap Elements-> ";
//     for(int i = 0; i<n; i++){
//         cout<<maxi.top()<<" ";
//         // The pop() operation is used to remove the top element from the priority queue after printing it.
//         maxi.pop();   // we use here pop to get element out of heap for printing
//     }cout<<endl;

//     mini.push(5);
//     mini.push(6);
//     mini.push(7);
//     mini.push(8);

//     int m = mini.size();
//     cout<<"Mini heap Elements-> ";
//     for(int i = 0; i<m; i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     cout<<"Mini is Empty or not-> "<<mini.empty()<<endl; 
//     cout<<"Maxi is Empty or not-> "<<maxi.empty()<<endl; 
// }




// SET DATA STRUCTURE
// STORES ONLY A UNIQUE ELEMENT IF YOU ENTER 5 TIMES 3 THEN IT CONSIDER THEM AS ONLY ONE 
// ELEMENTS RETURN IN SORTED ORDER.
// #include<set>
// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(4);
//     s.insert(2);
//     s.insert(7);
//     s.insert(9);

//     //s.insert(5);
//     //s.insert(5);
//     //s.insert(4);
//     //s.insert(4);
//     //s.insert(2);
//     //s.insert(1);

//     // After printing output is 1,2,4,5 as it removes duplicate element and print in ascending order 
    

// //  we use auto as to autodetect the data type that the set hold instead of auto we can use int
//     cout<<"Elements in set-> ";
//     for(auto i:s){    
//         cout<<i<<" ";
//     }cout<<endl;

//     // We can alse use this code to remove at index 1 in form of loop elements using iterator
//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);
//     for(auto i:s){    
//         cout<<i<<" ";
//     }cout<<endl;

// //  OR

//     // cout<<"After Erase-> ";
//     // s.erase(s.begin());
//     // for(auto i:s){    
//     //     cout<<i<<" ";
//     // }cout<<endl;


//     // count() function checks if the element is present ot not
//     cout<<"9 is present or not-> "<<s.count(9)<<endl;
//     // Output = 1 means true (9 is present)

//     // find() function returns the iterator of the element
//     set<int>::iterator itr = s.find(9);
//     cout<<"Value present at itr-> "<<*it<<endl;

// // an iterator is an object that enables a programmer to traverse a container, particularly lists
//     for(auto it = itr; it!=s.end(); it++){
//         cout<<*it<<" "; // *it is used to access the value at the current iterator position.
//     }cout<<endl;
// }


// In C++, an iterator is an object that allows you to traverse through the elements of a container, 
// such as an array, vector, or list, in a sequential manner. It provides a way to access the elements
// one at a time without exposing the underlying details of the container.



// MAP DATA STRUCTURE
// Map contains key and values and key is uniques only one key is assign to a particular value
// #include<map>
// int main(){
//     map<int,string> m;    // int =  key, string = value
//     m[1] = "Abhiyank";    // m is the key and abhiyank is the value
//     m[2] = "Yadav";
//     m[5] = "Etah";
//     m[7] = "22MIP10074";
//     // OR WE CAN INSERT THE ELEMENT IN MAP AS
//     m.insert({4,"bheem"});

//     // Print the key in Map DS
//     for(auto i:m){
//         cout<<i.first<<" ";
//     }cout<<endl;

//     // Print the values in Map DS
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     // count() function
//     cout<<"Finding 5-> "<<m.count(5)<<endl;

//     cout<<"Before Erase-> "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" ";
//     }cout<<endl;

//     cout<<"After Erase-> "<<endl;
//     // m.erase(m.begin());
//     m.erase(4);
//     for(auto i:m){
//         cout<<i.first<<" ";
//     }cout<<endl;

//     // find() function return iterator
//     auto it = m.find(5);  // find 5 then print 5 and elements after 5
//     for(auto i = it; i!=m.end(); i++){
//         cout<<(*i).first<<" ";
//     }
// }


// Using STL Standard Template library , We do not want to write the whole code again and again of algorithms like bunary search and bubble sort etc we can easily access them with stl.

// A CODE THAT USE STL TO USE BINARY SEARCH IN PROBLEM
// #include<vector>
// #include<algorithm> // import all the algorithm
// int main(){
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(8);

//     cout<<"Finding 8 using binary search-> "<<binary_search(v.begin(),v.end(),8)<<endl;
//     // Return 1 as it is present their

//     cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;
//     cout<<"Upper bound-> "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
//     // Iterator lower_bound (Iterator first, Iterator last, const val)  
//     // lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’  and if the value is not present in the vector then it returns the end iterator.

//     // Iterator upper_bound (Iterator first, Iterator last, const val)
//     // upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’  and if the value is not present in the vector then it returns the end iterator.

//     //OTHER USEFUL FUNCTIONS
//     int a = 3;
//     int b = 5;
//     // MIN & MAX
//     cout<<"Max of A and B-> "<<max(a,b)<<endl;;
//     cout<<"Min of A and B-> "<<min(a,b)<<endl;;
//     // SWAP
//     swap(a,b);
//     cout<<"Value of a after swap-> "<<a<<endl;
//     cout<<"Value of b after swap-> "<<b<<endl;
//     // REVERSE
//     string abcd = "abcd";
//     reverse(abcd.begin(),abcd.end());
//     cout<<"String after revese-> "<<abcd<<endl;
//     //ROTATE
//     rotate(v.begin(),v.begin()+1,v.end());  // 1 rotate and come to right
//     cout<<"After rotate-> "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     //SORT 
//     cout<<"After sorting-> ";
//     sort(v.begin(),v.end());
//     for(int i:v){
//     cout<<i<<" ";
//     }
// }