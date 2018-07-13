//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_STACK_H
#define GPEC_STACK_H

#include "Node.h"

template<class T>
class Stack {
public:
    Stack();

    void push(Node<T> node);

    Stack(const Stack<T>& other);

    T* pop();

    bool isEmpty();
private:
    Node<T> *head = nullptr;
};


#endif //GPEC_STACK_H
