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

void multiplyWithScalar(int matrix[][MAX_COLS], size_t rows, size_t columns, int scalar)
{
    for (size_t row = 0; row < rows; ++row)
    {
        for (size_t col = 0; col < columns; ++col)
        {
            matrix[row][col] *= scalar;
        }
    }
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];

    size_t rows, columns;
    cin >> rows >> columns;

    read(matrix, rows, columns);
    
    int scalar;
    cin >> scalar;
    
    multiplyWithScalar(matrix, rows, columns, scalar);
    print(matrix, rows, columns);

    return 0;
}