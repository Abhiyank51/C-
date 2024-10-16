// STL - Standard Template Library
// Components of STL: 1. Containers - > An object that stores data
//                         1.Vectors
//                         2.Array
//                         3 .... etc.
//                    2. Algorithm-> procedure to process data
//                         1. Searching
//                         2. Sorting
//                         3 .... etc.
//                     3. Iterators-> Object which points to an element of a container

// Containers in C++
// Types

// 1. Sequence containers
//    -Stores data in linear fashion(ELEM1->ELEM2->ELEM3->ELEM4->...)
//    -Eg. Vectors, List, Dequeue


// 2. Associative containers
//    - Direct Access the data stores in them.
//    - Eg. set, map, multiset, multimap
//    - stores data in structure form like tree

// 3. Derived containers
//    - These containers are derived form sequence and associative containers
//    - Real world modelling
//    - Eg. Queue, Stack, Priority Queue


// WHEN TO USE WHICH

// Sequence containers
/*
1. Vector - Random Access = Fast
            Insertion/ Deletion in Middle = Slow
            Insertion at the end = Fast

2. List -   Random Access = Slow
            Insertion in Middle = Fast
            Insertion at the end = Fast
*/


// Associative Containers
/*
All operations are fast
// Except Random Access
*/            


// Derived containers
/*
Depends ->On Data structure 
*/

