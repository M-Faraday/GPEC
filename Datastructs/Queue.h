//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_QUEUE_H
#define GPEC_QUEUE_H

#include <iostream>
#include "Node.h"
#include <string>

template<class T>
class Queue;

template<class T>
std::ostream& operator<<(std::ostream&,const Queue<T>&);

template<class T>
class Queue {
public:
    void push(T element);

    Queue(const Queue<T>& other);

    Queue();

    friend std::ostream &operator<< <T>(std::ostream &os, const Queue<T> &queue);

    T pop();

    bool isEmpty();

    std::string toString();

private:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;
};

template<class T>
Queue<T>::Queue() {
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::Queue(const Queue<T>& other) {
    if (other.head) {
        head = new Node<T>(other.head->element);
        Node<T>* nodePtr1 = head;
        Node<T>* nodePtr2 = other.head;
        while (nodePtr2->next != nullptr) {
            nodePtr1->next = new Node<T>(nodePtr2->next->element);
            nodePtr2 = nodePtr2->next;
            nodePtr1 = nodePtr1->next;
        }
        tail = nodePtr1;
    } else {
        head = nullptr;
        tail = nullptr;
    }
}

template<class T>
void Queue<T>::push(T element) {
    Node<T>* nNode = new Node<T>(element);
    if (tail) {
        tail->next = nNode;
    } else
        head = nNode;
    tail = nNode;
}

template<class T>
T Queue<T>::pop(){
    if (head) {
        T temp = head->element;
        Node<T>* tempPtr = head;
        head = head->next;
        delete tempPtr;
        if (!head) {
            tail = nullptr;
        }
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
std::ostream &operator<<(std::ostream &os, const Queue<T> &queue) {
    Node<T>* nodePtr = queue.head;
    while (nodePtr != nullptr) {
        os << nodePtr->element << " ";
        nodePtr = nodePtr->next;
    }
    return os;
}

template<class T>
std::string Queue<T>::toString() {
    std::string out;
    Node<T>* nodePtr = head;
    while (nodePtr != nullptr) {
        out += nodePtr->element + " ";
        nodePtr = nodePtr->next;
    }
    return out;
}

#endif //GPEC_QUEUE_H
