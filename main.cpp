#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include "stackTemp.h"
#include "spanFunc.h"
#include "showSpan.h"
#include "PeakFunction.h"

using namespace std;

int main()
{
 
    string temp;
    vector<float> stockPrice;
    ifstream Data("NikeStock.dat");

    if (!Data.is_open())
    {
        cout<<"not open";
        exit(44);
    }
    else
    {
        while(!Data.eof() and Data.is_open())
        {
            Data>>temp;
            stockPrice.push_back(stof(temp));
        }
    }
    Data.close();
    
    int *Span = span(stockPrice, int(stockPrice.size()) );
    int *Peaks = peaks(Span, int(stockPrice.size()));
    
    for (int a = 0; a < stockPrice.size(); a++)
    {
        cout << setprecision(2) << fixed << stockPrice[a] << ":" << setw(6) << Span[a];
        for(int l = 0; l < 72; l++)
        if(a == Peaks[l])
        {
            cout << setw(6) << "*";
        }
        cout << endl;
    }
    
    
    cout << endl << "The First Column Is The Closing Price Values" << endl;
    cout << "The Second Column Is The Span Values" << endl;
    cout << "The Stars Indicates Which Values Are A Peak" << endl;

    return 0;
}

