//
// Created by Rudolph on 2018/07/13.
//

#include "Node.h"
template<class T>
Node<T>::Node(T *Element):element(Element) {}

template<class T>
Node<T>::~Node() {
    element = nullptr;
    next = nullptr;
}
