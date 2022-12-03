#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 20;

int read(int from, int to)
{
    int input;

    do
    {
        cout << "Size: ";
        cin >> input;
    } while (input < from || input > to);

    return input;
}

void printMatrix(const int array[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void fillMatrix(int array[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                array[i][j] = i + 1;
            }
            else if (i < j)
            {
                array[i][j] = j - i;
            }
            else
            {
                array[i][j] = (i + 1) * (j + 1);
            }
        }
    }
}

int main()
{
    int arr[MAX_SIZE][MAX_SIZE];
    int size = read(1, MAX_SIZE);

    fillMatrix(arr, size);
    printMatrix(arr, size);
    
    return 0;
}