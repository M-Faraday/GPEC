//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_QUEUE_H
#define GPEC_QUEUE_H

#include <iostream>
#include "Node.cpp"
#include <string>

template<class T>
class Queue {
public:
    void push(T* element);

    Queue(const Queue<T>& other);

    Queue();

    template<class T>
    friend std::ostream &operator<<(std::ostream &os, const Queue<T> &stack);

    T* pop();

    bool isEmpty();
private:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;
};

#endif //GPEC_QUEUE_H
