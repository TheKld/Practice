#include "list.h"

template <typename type>
class Stack : public DoubleList<type>
{
    
public:
    //Push: Adds an element to the top(front) of the stack
    void push(type r)
    {
        return DoubleList<type> :: addFront(r);
    }
    //Pop: Removes the element at the top(front) of the stack
    void pop()
    {
        return DoubleList<type> :: removeFront();
    }
    //Top: Returns the element at the top(front) of the stack
    type top()
    {
        return DoubleList<type> :: showFront();
    }
    //Bottom: Returns the element at the bottom(end) of the stack
    void bottom()
    {
        return DoubleList<type> :: showBack();
    }
    
    int size()
    {
        return DoubleList<type> :: getSize();
    }
    
    void check()
    {
        return DoubleList<type> :: empty();
    }
    
};

/**************************************************************************************************************/


template <typename type>
class Queue : public DoubleList<type>
{
    
    
public:
    
    //ENQUEUE: Adds an element to the end of the queue
    void enQueue(type r)
    {
        return DoubleList<type> :: addEnd(r);
    }
    //DEQUEUE: Removes the element at the front of the queue
    void deQueue()
    {
        return DoubleList<type> :: removeFront();
    }
    //Show Front: Returns the element at the front of the queue
    void front()
    {
        return DoubleList<type> :: showFront();
    }
    //Show Back: Returns the element at the end of the queue
    void back()
    {
        return DoubleList<type> :: showBack();
    }
    
    int size()
    {
        return DoubleList<type> :: getSize();
    }
    
    void check()
    {
        return DoubleList<type> :: empty();
    }
};
