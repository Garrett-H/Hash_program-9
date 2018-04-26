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
    heap<int> userheap;
    cout<< "Starting heap<int>" << endl;
    cout <<"For Loop to use Insert for series of numbers" << endl;
    cout << endl;
    for(int x = 0; x < 50 ; x++){

        userheap.insert(rand()%100);
    }

    cout << "Print Heap" << endl;

    userheap.print();

    cout << endl;

    cout << "heap size is: " << userheap.size();

    cout << endl;

    cout << "heap max is: " << userheap.max();

    cout << endl;

    cout << "Removing Max " << endl;

    userheap.remove_max();

    cout << "Next Max " << userheap.max();

    heap<char> userheap;
    cout<< "Starting heap<int>" << endl;
    cout <<"For Loop to use Insert for series of numbers" << endl;
    cout << endl;
    for(int x = 0; x < 50 ; x++){

        userheap.insert(rand()%100 + 32);
    }

    cout << "Print Heap" << endl;

    userheap.print();

    cout << endl;

    cout << "heap size is: " << userheap.size();

    cout << endl;

    cout << "heap max is: " << userheap.max();

    cout << endl;

    cout << "Removing Max " << endl;

    userheap.remove_max();

    cout << "Next Max " << userheap.max();


    return 0;
}











