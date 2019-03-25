#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include<iostream>
using namespace std;

class ListEmpty{};

class PositionOutOfBound {};

template<class T>
struct node{
    T data;
    node<T> *next;
};

template<class T>
class SinglyLinkedList{
protected:
    node<T> *head, *curptr;
    int length;
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    virtual bool isEmpty();
    virtual int listSize();

    virtual void display();
    //return position (starting from 1) of key if found, otherwise return 0
    virtual int searchItem(T key);

    virtual void insertAtStart(T value);
    virtual void insertAtEnd(T value);
    virtual void insertAtPosition(T value, int pos);//position starts from 1

    virtual void deleteStart();
    virtual void deleteEnd();
    virtual void deleteAtPosition(int pos);

    virtual int getValue(int pos);
    virtual void setValue(int pos, T val);

    virtual bool hasNext();
    virtual T nextItem();
    virtual void reset();
};

template <class T>
class SinglyLinkedListWithTail : public SinglyLinkedList<T> {
protected:
    node<T> *tail;
public:
    SinglyLinkedListWithTail();
    ~SinglyLinkedListWithTail();

    virtual void insertAtStart(T value);
    virtual void insertAtEnd(T value);
    virtual void deleteEnd();
};

#endif // LIST_H_INCLUDED
