#include <vector>

int *peaks( int x[], int n )
{

    vector<int> temp;
    int b = 0;
    int c = 2;
    
    for (int k = 1; k < n - 1 ; k++)
    {
        if(x[k] > x[b] && x[k] > x[c])
        {
            temp.push_back(k);
        }
        
        b++;
        c++;
    }
    
    int *results = new int[(temp.size())];
    
    for(int r = 0; r < temp.size(); r++)
    {
        results[r] = temp.at(r);
    }

    return results;
}
