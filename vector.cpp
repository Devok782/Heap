#include <iostream>
#include <iomanip>
#include <vector>   //template class
#include <ctime>    //time()
#include <cstdlib> //srand()

using namespace std;

void print_vector(vector<int>&);

int main()
{
    srand(time(0));
    vector<int> numbers;    //instantiation, compiler generates code for int type
                            //numbers is an empty vector without any data
                            //vector stores a collection of data items
    cout << "&numbers = " << &numbers << endl;
    for(int i = 0; i < 5; i++)
    {
        numbers.push_back(rand() % 100);    //push_back/pop_back --> make the vector a stack (LIFO)
        print_vector(numbers);
    }

    cout << "contents: ";

    for(int i = 0; i < 5; i++)
    {
        cout << setw(3) << numbers[i]; //accessing the i-th element in the vector
    }                               //numbers.operator[](i); //index oeprator

    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        numbers.pop_back();
        print_vector(numbers);
    }

}           

void print_vector(vector<int>& numbers)
{
    cout << "Inside print_vector: &numbers = " << &numbers << endl;
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << setw(3) << numbers[i];
    }
    cout << endl;
}