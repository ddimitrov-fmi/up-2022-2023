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

void readMatrix(int array[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "array[" << i << "][" << j << "]=";
            cin >> array[i][j];
        }
    }
}

void multiply(const int first[][MAX_SIZE], const int second[][MAX_SIZE], int result[][MAX_SIZE], const int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
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

int main()
{
    int arr1[MAX_SIZE][MAX_SIZE], arr2[MAX_SIZE][MAX_SIZE];
    int size = read(1, MAX_SIZE);

    readMatrix(arr1, size);
    readMatrix(arr2, size);

    int result[MAX_SIZE][MAX_SIZE];

    multiply(arr1, arr2, result, size);
    printMatrix(result, size);

    return 0;
}