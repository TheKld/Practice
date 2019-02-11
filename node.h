#include <string>
using namespace std;

template <typename name>
class stringNode
{
    
public:
    
    name elem;
    stringNode<name> *next;
    stringNode<name> *prev;
    
    friend class stringLinkedList;
};


template <typename name>
class myIterator
{                // an iterator for the list
public:
    name& operator*();            // reference to the element
    bool operator==(const myIterator& p) const    // compare positions
    { return v == p.v; }
    
    bool operator!=(const myIterator& p) const
    { return v != p.v; }
    
    myIterator& operator++()            // move to next position
    { v = v->next; return *this; }
    
    myIterator& operator--()            // move to previous position
    { v = v->prev; return *this; }
    
    myIterator& operator+(int n)             // move up by some positions
    { for (int i = 0; i < n ; i++) v = v->next; return *this; }
    
    myIterator& operator-(int n)             // move down by some positions
    { for (int i = 0; i < n; i++) v = v->prev; return *this; }
    friend class stringNode<name>;            // give NodeList access
private:
    stringNode<name>* v;                    // pointer to the node
    myIterator(stringNode<name>* u);            // create from node
};
