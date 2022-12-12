#include <iostream>

using namespace std;

const int MAX_SIZE_ARRAY = 256;

void enterArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int *pointerToElement(int array[], int size)
{
    for (int i = 1; i < size - 1; i++)
    {
        // Can be extracted in separate functions
        if (array[i] % 2 == 0)
        {
            if (array[i - 1] > array[i] && array[i] < array[i + 1])
            {
                return array + i;
            }
        }
    }
    return nullptr;
}

int main(int argc, char **argv)
{
    int array[MAX_SIZE_ARRAY];
    int size = 0;

    cin >> size;
    while (size > MAX_SIZE_ARRAY || size < 0)
    {
        cin >> size;
    }

    enterArray(array, size);
    cout << pointerToElement(array, size);
}
