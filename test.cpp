#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Heap.h"

using namespace std;

int main()
{   
    srand(time(0));
    Heap h;     //how many bytes will be reserved in the stack?
    cout << "sizeof(Heap) = " << sizeof(Heap) << endl;
    
    //insert data to the heap
    for(int i = 0; i < 10; i++)
    {
        h.insert(rand() % 100);
    }

    //sort the numbers in non-decreasing order
    for(int i = 0; i < 10; i++)
    {
        cout << setw(3) << h.removeMin();
    }
    cout << endl;

    return 0;
}