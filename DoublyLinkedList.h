#include <iostream>
#include "ListNode.h"


using namespace std;

//<--------------------LIST INTERFACE--------------------->
template <class T>
class DoublyLinkedList {
    private:

    public:
        unsigned int Size;
        ListNode<T> *Front;
        ListNode<T> *Back;

        DoublyLinkedList(); //Constructor
        ~DoublyLinkedList(); //Destructor

        void insertBack(T data);
        T removeFront();
        T getFront();
        void Print();
        void printList();
        void deletePos(int pos);

        bool isEmpty();
        unsigned int getSize();
};

template <class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    Size = 0;
    Front = NULL;
    Back = NULL;
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList() {}

template <class T>
void DoublyLinkedList<T>::insertBack(T d) {
    ListNode<T> *node = new ListNode<T>(d);

    //Empty
    if(Size == 0) {
        Front = node;
    }
    //Not Empty
    else {
        Back->next = node;
        node->prev = Back;
    }

    Back = node;
    ++Size;
}

template <class T>
T DoublyLinkedList<T>::removeFront() {
    if(!isEmpty()) {
        ListNode<T> *node = Front;
        //Only Node in List
        if(Front->next == NULL) {
            Front = NULL;
            Back = NULL;
        }
        //More than One
        else {
            Front->next->prev = NULL;
            Front = Front->next;
        }

        //node->next = NULL;

        T temp = node->data;

        delete node;
        --Size;
        return temp;
    }
    else {
        return T();
    }
}

template <class T>
T DoublyLinkedList<T>::getFront() {
    return Front->data;
}

template <class T>
void DoublyLinkedList<T>::printList() {
    ListNode<T> *curr = Front;

    while(true) {
        if(curr == NULL) {
            break;
        }

        cout << curr->data << endl;
        curr = curr->next;
    }
}

template <class T>
void DoublyLinkedList<T>::deletePos(int pos) {
    int idx = 0;
    ListNode<T> *curr = Front;
    ListNode<T> *prev = Front;

    while(idx != pos) {
        prev = curr;
        curr = curr->next;
        ++idx;
    }

    prev->next = curr->next;
    curr->next->prev = prev;
    curr->next = NULL;
    curr->prev = NULL;
    curr->data = NULL;

    --Size;
    delete curr;
}

template <class T>
bool DoublyLinkedList<T>::isEmpty() {
    return(Size == 0);
}

template <class T>
unsigned int DoublyLinkedList<T>::getSize() {
    return Size;
}

template <class T>
void DoublyLinkedList<T>::Print()
{
    /*
    ListNode* temp = Front;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    */
    ListNode<T>* temp = Front;
    cout << "Forward: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}








