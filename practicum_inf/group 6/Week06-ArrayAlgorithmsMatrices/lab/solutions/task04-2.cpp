#include <iostream>

const std::size_t MAX_CAPACITY = 100;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void transpose(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

int main()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    transpose(matrix, rows, columns);

    printMatrix(matrix, columns, rows);

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

void transpose(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    int temp[MAX_CAPACITY][MAX_CAPACITY]; // copy of the matrix

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            temp[i][j] = matrix[i][j]; 
        }
    }

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            matrix[j][i] = temp[i][j]; 
        }
    }
}