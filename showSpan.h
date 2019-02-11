#include <iostream>
using namespace std;

int checkHighest(float check[], int size)
{
    float highest = 0;
    
    for(int i = 0; i < size; i++)
    {
        if( highest < check[i])
        {
            highest = check[i];
        }
    }
    
    return highest;
}


void starGraph(float val[], int size)
{
    int start = checkHighest(val, size);
    
    cout << endl << endl;
    
    int r = size;
    while( size >= 0 )
    {
        
        for(int i = 0; i < r; i++)
        {
            if(val[i] == start )
            {
                cout << "***\t";
            }
            
            else
            {
                cout <<"\t";
            }
            
        }
        cout << endl;
        start--;
        size--;
        
    }
    
    
    cout << endl << "____________________________________________________" << endl;
    cout << "\t1\t" << "\t2\t" << "\t3\t" << "\t4\t" << "\t5\t" << "\t6\t" << endl;
    
}


//For the graph to show the span as a bar graph
