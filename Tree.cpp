//
// Created by penel on 3/9/2023.
//
#include <iostream>
#include "Tree.h"
using namespace std;

template <typename T>
Tree<T>::Tree(Node<T> node) : root(nullptr){

}

template <typename T>
void Tree<T>::insert(T item1, T item2)
{
    if (root == nullptr)
    {
        root = new Node<T>;
        root->item1 = item1;
        root->item2 = item2;
        root->left = nullptr;
        root->right = nullptr;
    }
    else
    {
        Node<T>* current = root;
        while (current != nullptr)
        {
            if (item1 < current->item1)
            {
                if (current->left == nullptr)
                {
                    current->left = new Node<T>;
                    current->left->item1 = item1;
                    current->left->item2 = item2;
                    current->left->left = nullptr;
                    current->left->right = nullptr;
                    //break;
                    return;
                }
                else
                {
                    current = current->left;
                }
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = new Node<T>;
                    current->right->item1 = item1;
                    current->right->item2 = item2;
                    current->right->left = nullptr;
                    current->right->right = nullptr;
                    //break;
                    return;
                }
                else
                {
                    current = current->right;
                }
            }
        }
    }
}




template <typename T>
void Tree<T>::printTreeInOrder()
{
    if (root == NULL)
        return;
    root->left.printTreeInOrder();
    cout << root->item1 << ": " << root-> item2 << " ";
    root->right.printTreeInOrder();
}

template <typename T>
uint32_t Tree<T>::countType1(T val){
    uint32_t count = 0;
    if (root == nullptr)
        return 0;

    if (root->item1 == val)
        count = 1;

    count += root->left.countType1(val);
    count += root->right.countType1(val);

    return count;
}

template <typename T>
uint32_t Tree<T>::countType2(T val){
    uint32_t count = 0;
    if (root == nullptr)
        return 0;

    if (root->item2 == val)
        count = 1;

    count += root->left.countType2(val);
    count += root->right.countType2(val);

    return count;
}

//
//template <typename T>
//void Tree<T>::removeNode(Node<T> node, Node<T> removeThis){
//
//}