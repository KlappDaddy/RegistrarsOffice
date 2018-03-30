#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

//<---------------------QUEUE IMPLEMNTATION-------------------------->
template <class T>
class GenQueue {
    private:

    public:

        DoublyLinkedList<T> myList; 
        unsigned int numElements;

        GenQueue();
        ~GenQueue();

        void enqueue(T d);
        T dequeue();

        T vFront(); 

        void printQ();
        bool isEmpty();
        unsigned int getSize();
};

template <class T>
GenQueue<T>::GenQueue() 
{
    numElements = 0;
}

template <class T>
GenQueue<T>::~GenQueue()
{

}

template <class T>
void GenQueue<T>::enqueue(T d)
{
    myList.insertBack(d);
}

template <class T>
T GenQueue<T>::dequeue()
{
    myList.removeFront();   
}

template <class T>
T GenQueue<T>::vFront() {
    return myList.getFront();
}

template <class T>
void GenQueue<T>::printQ()
{
    myList.printList();
}

template <class T>
bool GenQueue<T>::isEmpty() {
    return (numElements == 0);
}

template <class T>
unsigned int GenQueue<T>::getSize() {
    return numElements;
}