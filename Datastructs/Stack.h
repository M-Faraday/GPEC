//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_STACK_H
#define GPEC_STACK_H

#include <iostream>
#include "Node.cpp"
#include <string>

template<class T>
class Stack {
public:
    void push(T* element);

    Stack(const Stack<T>& other);

    Stack();

    template<class T>
    friend std::ostream &operator<<(std::ostream &os, const Stack<T> &stack);

    T* pop();

    bool isEmpty();
private:
    Node<T> *head = nullptr;
};

#endif //GPEC_STACK_H
