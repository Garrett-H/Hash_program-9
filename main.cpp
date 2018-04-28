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
    char a;
    //userheap =  new heap<int>;
    cout<< "Starting heap<int>" << endl;
    cout <<"For Loop to use Insert for series of numbers" << endl;
    int y = 0;
    cout << endl;
    for(int x = 0; x < 50 ; x++){

        y = rand()%100;
        userheap.insert(y);
        //userheap.print();

    }

    cin >> a;

    cout << "Print Heap" << endl;
    userheap.print();
    cout << endl;

    cin >> a;

    cout << "heap size is: " << userheap.size() << endl;
    cin >> a;

    cout << "heap max is: " << userheap.max() << endl;
    cin >> a;

    cout << "Removing Max " << endl;
    userheap.remove_max();
    cin >> a;

    cout << "Next Max " << userheap.max() << endl;
    cin >> a;

    heap<char> charHeap;
    cout<< "Starting heap<char>" << endl;
    cout <<"For Loop to use Insert for series of characters" << endl;
    cout << endl;
    for(int x = 0; x < 50 ; x++){

        charHeap.insert(rand()%100 + 32);
    }
    cin >> a;


    cout << "Print Heap" << endl;
    charHeap.print();
    cout << endl;
    cin >> a;

    cout << "heap size is: " << charHeap.size() << endl;
    cin >> a;

    cout << "heap max is: " << charHeap.max() << endl;
    cin >> a;

    cout << "Removing Max " << endl;
    charHeap.remove_max();
    cin >> a;

    cout << "Next Max " << charHeap.max();

    return 0;
}











