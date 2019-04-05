#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack {

};
class EmptyStack {

};

template <class T>
class StackType {
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
private:
    int top;
    T items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED