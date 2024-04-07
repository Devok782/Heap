a.exe: Heap.o test.o
	g++ Heap.o test.o

Heap.o: Heap.h Heap.cpp
	g++ -c -g Heap.cpp

test.o: Heap.h test.cpp
	g++ -c -g test.cpp

clean:
	delete *.o a.exe