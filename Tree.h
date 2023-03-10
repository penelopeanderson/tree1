//
// Created by penel on 3/9/2023.
//

#ifndef PERSONALP_TREE_H
#define PERSONALP_TREE_H
#include "Node.h.tmp"

template <typename T>
class Tree {
public:
    Tree(Node<T> node);
    void insert(T item1, T item2);
    uint32_t countType1(T val);
    uint32_t countType2(T val);
    void printTreeInOrder();

private:
    Node<T> *root;
};


#endif //PERSONALP_TREE_H
