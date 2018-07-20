//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_STACK_H
#define GPEC_STACK_H

#include <iostream>
#include "Node.h"
#include <string>

template<class T>
class Stack {
public:
    void push(T element);

    Stack(const Stack<T>& other);

    Stack();

    template<class T>
    friend std::ostream &operator<<(std::ostream &os, const Stack<T> &stack);

    T pop();

    bool isEmpty();
private:
    Node<T> *head = nullptr;
};

template<class T>
Stack<T>::Stack() {
    head = nullptr;
}

template<class T>
Stack<T>::Stack(const Stack<T>& other) {
    if (other.head) {
        head = new Node<T>(other.head->element);
        Node<T>* nodePtr1 = head;
        Node<T>* nodePtr2 = other.head;
        while (nodePtr2->next != nullptr) {
            nodePtr1->next = new Node<T>(nodePtr2->next->element);
            nodePtr2 = nodePtr2->next;
            nodePtr1 = nodePtr1->next;
        }
    } else
        head = nullptr;
}

template<class T>
void Stack<T>::push(T element) {
    Node<T>* nNode = new Node<T>(element);
    if (head) {
        nNode->next = head;
    }
    head = nNode;
}

template<class T>
T Stack<T>::pop(){
    if (head) {
        T temp = head->element;
        Node<T>* tempPtr = head;
        head = head->next;
        delete tempPtr;
        return temp;
    } else {
        throw "Popped empty stack";
    }
}

template<class T>
bool Stack<T>::isEmpty(){
    if (head)
        return false;
    else
        return true;
}

template<class T>
std::ostream &operator<<(std::ostream &os, const Stack<T> &stack) {
    Node<T>* nodePtr = stack.head;
    while (nodePtr != nullptr) {
        os << nodePtr->element << " ";
        nodePtr = nodePtr->next;
    }
    return os;
}

#endif //GPEC_STACK_H
