#include "queue.h"

template<class T> QueueLL<T>::QueueLL(){}

template<class T> QueueLL<T>::~QueueLL(){}

template<class T> void QueueLL<T>::enqueue(T value)
{
    ls.insertAtEnd(value);
}

template<class T> T QueueLL<T>::dequeue()
{
    T value = ls.getValue(1);
    ls.deleteStart();
    return value;
}

template<class T> T QueueLL<T>::frontItem()
{
    T value = ls.getValue(1);
    return value;
}

template<class T>
bool QueueLL<T>::isEmpty()
{
    return ls.isEmpty();
}
