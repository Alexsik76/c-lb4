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
    int arr_3[100];
    fill_array(arr_3, 100);
    cout << search_sequence(arr_1, 10, sequence, 3) << endl;
    cout << search_sequence(arr_2, 10, sequence, 3) << endl;
    cout << "big array:\n";
    print_array(arr_3, 100);
    cout << search_sequence(arr_3, 100, sequence, 3) << endl;
}

void fill_array(int *array, int lenght)
{
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 3;
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
                return result;
            }
        }
    }
    return result;
}