
//
// Created by penel on 3/7/2023.
//

#ifndef PERSONALP_NODE_H_TMP
#define PERSONALP_NODE_H_TMP
#include <stdexcept>


template <typename T> class Node {
public:
    Node(T item1 = T(), T item2 = T()); //default to nothing

private:
    T first;
    T second;
    Node *left;
    Node *right;

};


#endif //PERSONALP_NODE_H_TMP

