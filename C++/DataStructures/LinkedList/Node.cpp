#include <iostream>
#include "linkedlist.hpp"
using namespace std;

template <typename T>
Node<T>* LinkedList<T>::Get(int index){
    if (index<0 || index > m_count) {
        return NULL;
    }
}