//
// Created by Rudolph on 2018/07/13.
//

#include "Queue.h"
#include <string>
#include <iostream>

template<class T>
Queue<T>::Queue() {
    head = nullptr;
    tail = nullptr;

}

template<class T>
Queue<T>::Queue(const Queue<T>& other) {
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

template<class T>
void Queue<T>::push(T* element) {
    Node<T>* nNode = new Node<T>(element);
    if (head) {
        nNode->next = head;
    }
    head = nNode;
}

template<class T>
T* Queue<T>::pop(){
    if (head) {
        T* temp = head->element;
        Node<T>* tempPtr = head;
        head = head->next;
        delete tempPtr;
        return temp;
    } else {
        throw "Popped empty Queue";
    }
}

template<class T>
bool Queue<T>::isEmpty(){
    if (head)
        return false;
    else
        return true;
}

template<class T>
std::ostream &operator<<(std::ostream &os, const Queue<T> &Queue) {
    Node<T>* nodePtr = Queue.head;
    while (nodePtr != nullptr) {
        os << *(nodePtr->element) << " ";
        nodePtr = nodePtr->next;
    }
    return os;
}
