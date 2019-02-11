#include "node.h"


template <typename name>
class DoubleList
{
    
public:
    int size = 0;

    DoubleList()                  //Constructor
    {
        header -> next = trailer;
        trailer -> prev = header;
        
    }
    
    ~DoubleList()                 //Destructor
    {
        while(!empty())
        {
            removeFront();
        }
    }
    
    bool empty()                  //Check if the list is empty
    {
        return (header -> next == trailer) && (trailer -> prev == header);
    }
    
    name showFront()               //Return the first item in the list
    {
        return header -> next -> elem;
    }
    
    void showBack()               //Return the first item in the list
    {
        if(!empty())
        {
            cout << trailer -> prev -> elem << endl;
        }
        else
        {
            cout << "Empty List!" << endl;
        }
    }
    
    void addFront(const name& e)      //Add node to front
    {
        size += 1;
        if(empty())
        {
            stringNode<name>* v = new stringNode<name>();
            v -> elem = e;
            v -> prev = header;
            v -> next = trailer;
            header -> next = v;
            trailer -> prev = v;
        }
        else
        {
            stringNode<name>* y = new stringNode<name>();
            stringNode<name>* oldFront = header -> next;
            y -> elem = e;
            y -> next = header -> next;
            y -> prev = header;
            header -> next = y;
            oldFront -> prev = y;
        }
    }
    
    void addEnd(const name& e)
    {
        size += 1;

        stringNode<name>* n = new stringNode<name>();
        stringNode<name>* oldBack = trailer -> prev;
        n -> elem = e;
        n -> prev = oldBack;
        n -> next = trailer;
        oldBack -> next = n;
        trailer -> prev = n;
    }
    
    void removeFront()
    {
        if(!empty())
        {
            stringNode<name> *old = header;
            header = old -> next;
            delete old;
        }
        else
        {
            cout << "LIST IS EMPTY! " << endl;
        }
    }
    
    void removeEnd()
    {
        if(!empty())
        {
            stringNode<name>* old = trailer -> prev;
            trailer -> prev = old -> prev;
            trailer -> prev -> next = trailer;
            delete old;
        }
        else
        {
            cout << "LIST IS EMPTY! " << endl;
        }
    }
    
    int getSize()
    {
        return size;
    }
protected:
    stringNode<name>* header = new stringNode<name>();
    stringNode<name>* trailer = new stringNode<name>();
    
};

