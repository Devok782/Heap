#ifndef HEAP_H
#define HEAP_H
#include <vector>


using namespace std;

class Heap
{   
    private:
    vector<int>numbers;

    public:
        Heap();
        ~Heap();
        void insert(int);
        int removeMin();

};

#endif