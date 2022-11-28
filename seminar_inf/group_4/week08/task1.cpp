#include <iostream>

const std::size_t MAX_ARRAY_SIZE = 100;

int getMaxElementInArray(int arr[], std::size_t size)
{
    int max = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void fillArrayWithMaxElements(int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], std::size_t rows, std::size_t columns, int *arr)
{
    for (std::size_t i = 0; i < rows; i++)
    {
        arr[i] = getMaxElementInArray(matrix[i], columns);
    }
}

void matrixMultiply(int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], std::size_t rows, std::size_t columns, int multiplier)
{
    for (std::size_t i = 0; i < rows; i++)
    {
        for (std::size_t j = 0; j < columns; j++)
        {
            // matrix[i][j] *= 10;
            *(*(matrix + i) + j) *= 10;
        }
    }
}

int main(int argc, char **argv)
{
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 10}};
    int arrayMax[MAX_ARRAY_SIZE];
    fillArrayWithMaxElements(matrix, 3, 4, arrayMax);

    for (size_t i = 0; i < 3; i++)
    {
        std::cout << arrayMax[i] << std::endl;
    }

    matrixMultiply(matrix, 3, 4, 10);

    return 0;
}
