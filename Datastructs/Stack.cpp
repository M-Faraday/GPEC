//
// Created by Rudolph on 2018/07/13.
//

#include "Stack.h"
template<class T>
Stack<T>::Stack(const Stack<T>& other) {
    if (other.head) {
        T* temp = new T(other.head->element());
        head = new Node<T>(temp);
        Node<T>* nodePtr1 = head;
        Node<T>* nodePtr2 = other.head;
        while (nodePtr2->next != nullptr) {
            temp = new T(nodePtr2->next->element());
            nodePtr1->next = new Node<T>(temp);
            nodePtr2 = nodePtr2->next;
            nodePtr1 = nodePtr1->next;
        }
    } else
        head = nullptr;
}