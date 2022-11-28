#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void spiral(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int result[]);

void printArray(const int array[], std::size_t size);

int main()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    int result[MAX_CAPACITY * MAX_CAPACITY];

    spiral(matrix, rows, columns, result);

    printArray(result, rows * columns);

    return 0;
}

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void spiral(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int result[])
{
    std::size_t counter = 0;
    int up = 0, down = rows - 1, left = 0, right = columns - 1;

    while (counter < rows * columns)
    {
        for (int i = left; i <= right; ++i)
        {
            result[counter++] = matrix[up][i];
        }
        ++up;

        for (int i = up; i <= down; ++i)
        {
            result[counter++] = matrix[i][right];
        }
        --right;

        for (int i = right; i >= left; --i)
        {
            result[counter++] = matrix[down][i];
        }
        --down;

        for (int i = down; i >= up; --i)
        {
            result[counter++] = matrix[i][left];
        }
        ++left;
    }
}

void printArray(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}