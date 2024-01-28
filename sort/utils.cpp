#include <iostream>
#include <algorithm> 

using namespace std;

void fill_array(int *array, int lenght)
{
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 1000;
    }
}

void selection_sort(int *array, int lenght)
{
    for (int startIndex = 0; startIndex < lenght - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < lenght; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(array[startIndex], array[smallestIndex]);
    }
}
void print_array(int *array, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << i << ".\t" << array[i] ;
    }
}
