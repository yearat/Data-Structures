#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

class FullQueue
{

};
class EmptyQueue
{

};

template <class T>

class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(T newItem);
    void Dequeue(T& item);
private:
    int front;
    int rear;
    T* items;
    int maxQue;
};

#endif // QUETYPE_H_INCLUDED
