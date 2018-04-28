//Author: Ian Nevills, Garret Hay
//Date: 4/25/2018
//Program: Heap Program
//File: main.cpp


#include <iostream>
#include <cstdlib>
#include "heap.h"

using namespace std;

int main()
{
    heap userheap;
    cout<< "Starting heap<int>" << endl;
    cout <<"For Loop to use Insert for series of numbers" << endl;
    cout << endl;
    for(int x = 0; x < 10 ; x++)
      userheap.insert(x);
    cout << "Print Heap" << endl;
    userheap.print();
    cout << endl;

    cout << "heap size is: " << userheap.size() << endl;

    cout << "heap max is: " << userheap.max() << endl;

    cout << "Removing Max " << endl;
    userheap.remove_max();

    cout << "Next Max: " << userheap.max() << endl;
    
    return 0;
}











