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

void sumMatrices(int matrix_1[][MAX_COLS], int matrix_2[][MAX_COLS], int result[][MAX_COLS], size_t rows, size_t columns)
{
    for (size_t row = 0; row < rows; ++row)
    {
        for (size_t col = 0; col < columns; ++col)
        {
            result[row][col] = matrix_1[row][col] + matrix_2[row][col];
        }
    }
}
int main()
{
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];

    size_t rows, columns;
    cin >> rows >> columns;

    read(matrix1, rows, columns);
    read(matrix2, rows, columns);
    sumMatrices(matrix1, matrix2, result, rows, columns);
    print(result, rows, columns);

    return 0;
}