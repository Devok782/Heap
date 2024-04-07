#include <iostream>
#include <algorithm>
#include "Heap.h"

using namespace std;

Heap::Heap()
{
    numbers.push_back(-1);
}

Heap::~Heap()
{
    cout << "~Heap() called: " << this << endl;
}

void Heap::insert(int val)
{
    numbers.push_back(val);
    //heapify up
    //1. check if value is the root
    if(numbers.size() == 2) return;

    int pos = numbers.size() -1;
    //2. at least two items in the vector--> possible swap
    while(numbers[(pos-1)/2] > numbers[pos]) //
    {
        //finding the correct index for the new value
      //1.  
        int temp = numbers[(pos-1)/2];
        numbers[(pos-1)/2] = numbers[pos];
        numbers[pos] = temp;
      //2.
        //swap(numbers[(pos-1)/2], numbers[pos]);
        //pos = numbers[(pos-1/2)];
        
    }
    numbers[pos] = val;
}

int Heap::removeMin()
{
    // if(numbers.size() == 0) 
    // {
    //     return;
    // }

    numbers[0] = numbers[numbers.size() -1];
    numbers.pop_back();

    int lChild = 2*numbers.size() + 1;
    int rChild = 2*numbers.size() + 2;

    //if(lChild >= numbers.size()) return;

    int minIndex = 0;

    if(numbers[0] > numbers[lChild])
    {
        minIndex = lChild;
    }

    if(rChild < numbers.size() && (numbers[minIndex] > numbers[rChild]))
    {
        minIndex = rChild;
    }

    if(minIndex != 0)
    {
        int temp = numbers[0];
        numbers[0] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
    // else if(numbers.size() == 1)
    // {
    //     numbers.size() - 1; 
    //     return numbers[0];
    // }
    // else
    // {

    // }
    // numbers[0] = numbers[numbers.size() - 1];
    // numbers.pop_back();
    return 0;
}