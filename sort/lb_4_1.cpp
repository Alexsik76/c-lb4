#include <iostream>
#include "utils.h"
#include <unistd.h>

using namespace std;

int main()
{
    const int size1 = 10;
    const int size2 = 10;
    const int big_size = size1 + size2;
    // create array 1
    int array_1[size1];
    fill_array(array_1, size1);
    cout << "Unsorted array 1:\n";
    print_array(array_1, size1);
    // create array 2
    int array_2[size2];
    cout << "We need pause more than 1 c for correct srand function works...\n";
    sleep(2);
    fill_array(array_2, size2);
    cout << "Unsorted array 2:\n";
    print_array(array_2, size2);
    // sort array 1
    selection_sort(array_1, size1);
    cout << "Sorted array 1:\n";
    print_array(array_1, size1);
    // sort array 2
    selection_sort(array_2, size2);
    cout << "Sorted array 2:\n";
    print_array(array_2, size2);
    // create one array from 1 and 2 arrays
    int big_array[big_size];
    copy(array_1, array_1 + size1, big_array);
    copy(array_2, array_2 + size2, big_array + size1);
    cout << "Unsorted big array:\n";
    print_array(big_array, big_size);
    // sort big array
    selection_sort(big_array, big_size);
    cout << "Sorted big array:\n";
    print_array(big_array, big_size);
}
