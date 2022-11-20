#include <iostream>

const std::size_t MAX_ROWS = 1000;
const std::size_t MAX_COLUMNS = 1000;

void readMatrix(int matrix[][MAX_COLUMNS], std::size_t rows, std::size_t columns);

void printMatrix(const int matrix[][MAX_COLUMNS], std::size_t rows, std::size_t columns);

int main ()
{
    int matrix[MAX_ROWS][MAX_COLUMNS];
    std::size_t rows, columns;

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    printMatrix(matrix, rows, columns);

    return 0;
}

void readMatrix(int matrix[][MAX_COLUMNS], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(const int matrix[][MAX_COLUMNS], std::size_t rows, std::size_t columns)
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