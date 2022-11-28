#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void multiplyBy(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int x);

int main()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    std::size_t x;
    std::cin >> x;

    multiplyBy(matrix, rows, columns, x);

    printMatrix(matrix, rows, columns);

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

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplyBy(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, int x)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            matrix[i][j] *= x;
        }
    }
}