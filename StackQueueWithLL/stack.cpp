#include "stack.h"

template <class T> StackLL<T>::StackLL() {}
template <class T> StackLL<T>::~StackLL() {}
template <class T> void StackLL<T>::push(T value)
{
    ls.insertAtStart(value);
}

template <class T> T StackLL<T>::pop()
{
    T value = ls.getValue(1);
    ls.deleteStart();
    return value;
}

template<class T> T StackLL<T>::top()
{
    T value = ls.getValue(1);
    return value;
}

template <class T> bool StackLL<T>::isEmpty()
{
    return ls.isEmpty();
}
