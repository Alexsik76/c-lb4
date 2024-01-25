#include <iostream>
#include <algorithm>

using namespace std;

void fill_array(int *array, int lenght);
void print_array(int *array, int lenght);
bool search_sequence(int *array, int n, int *sequence, int n_s);

int main()
{
    int sequence[3] = {0, 0, 0};
    int arr_1[10] = {1, 0, 0, 3, 4, 6, 8, 5, 4, 99};
    int arr_2[10] = {1, 0, 0, 0, 4, 6, 8, 5, 4, 99};
    int r_a_s = 100; // random array size
    int arr_3[r_a_s];
    fill_array(arr_3, r_a_s);
    cout << boolalpha;
    cout << "Found in arr_1: "<< search_sequence(arr_1, 10, sequence, 3) << endl;
    cout << "Found in arr_2: "<< search_sequence(arr_2, 10, sequence, 3) << endl;
    cout << "Random array:\n";
    print_array(arr_3, r_a_s);
    cout << "Found in random array: "<< search_sequence(arr_3, r_a_s, sequence, 3) << endl;
}

void fill_array(int *array, int lenght)
{
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 5;
    }
}
void print_array(int *array, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << i << ".\t" << array[i] << endl;
    }
}
bool search_sequence(int *array, int n, int *sequence, int n_s)
{
    bool result = false;
    for (int i = 0; i < n; i++)
    {
        if ((array[i] == sequence[0]) && (n - i >= n_s))
        {
            result = true;
            for (int j = 0; j < n_s; j++)
            {
                if (array[i + j] != sequence[j])
                {
                    result = false;
                    break;
                }
            }
            if (result)
            {
                cout << "Position = " << i << " ";
                return result;
            }
        }
    }
    return result;
}