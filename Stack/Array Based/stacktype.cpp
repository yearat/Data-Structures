#include "stacktype.h"
template <class T>
StackType<T>::StackType() {
    top = -1;
}

template <class T>
bool StackType<T>::IsEmpty()
{
    return (top==-1);
}

template <class T>
bool StackType<T>::IsFull()
{
    return (top==MAX_ITEMS-1);
}

template <class T>
void StackType<T>::Push(T newItem)
{
    if(IsFull()) {
        throw FullStack();
    }
    top++;
    items[top] = newItem;
}

template <class T>
void StackType<T>::Pop()
{
    if(IsEmpty()) {
        throw EmptyStack();
    }
    top--;

}

template <class T>
T StackType<T>::Top()
{
    if (IsEmpty()) {
    throw EmptyStack();
    }
    return items[top];

}