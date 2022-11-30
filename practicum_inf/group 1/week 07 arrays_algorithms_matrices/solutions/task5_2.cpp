#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::size_t;

const int MAX_COLS = 10;
const int MAX_ROWS = 10;

void read(int matrix[][MAX_COLS], size_t rows, size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void print(const int matrix[][MAX_COLS], size_t rows, size_t columns)
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

void transpose(int matrix[][MAX_COLS], size_t rows, size_t columns)
{
    int temp[MAX_ROWS][MAX_COLS]; // copy of the matrix

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            temp[i][j] = matrix[i][j]; 
        }
    }

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            matrix[j][i] = temp[i][j]; 
        }
    }
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];

    size_t rows, columns;
    cin >> rows >> columns;

    read(matrix, rows, columns);
    transpose(matrix, rows, columns);
    print(matrix, columns, rows);

    return 0;
}