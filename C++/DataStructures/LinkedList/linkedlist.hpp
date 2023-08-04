#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
    private:
       int val_count;
       
    public:
       Node<T>* Head;
       Node<T>* Tail;

       LinkedList();

       Node<T> * Get(int index);

       void InsertHead(T val);
       void InsertTail(T val);
       void Insert(int index, T val);

       void RemoveHead();
       void RemoveTail();
       void Remove(int index);

       
}