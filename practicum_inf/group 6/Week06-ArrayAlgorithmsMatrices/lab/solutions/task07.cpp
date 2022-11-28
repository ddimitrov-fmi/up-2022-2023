#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void zigZag(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int result[]);

void printArray(const int array[], std::size_t size);

int main()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    int result[MAX_CAPACITY * MAX_CAPACITY];

    zigZag(matrix, rows, columns, result);

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

void zigZag(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int result[])
{
    std::size_t counter = 0;

    for (std::size_t i = 0; i < rows; ++i)
    {
        if (i % 2 == 0)
        {
            for (std::size_t j = 0; j < columns; ++j)
            {
                result[counter++] = matrix[i][j];
            }
        }
        else
        {
            for (int j = columns - 1; j >= 0; --j)
            {
                result[counter++] = matrix[i][j];
            }
        }
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