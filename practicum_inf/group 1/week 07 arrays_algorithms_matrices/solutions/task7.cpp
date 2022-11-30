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

void printSpiral(const int matrix[][MAX_COLS], size_t rows, size_t columns)
{
    int up = 0, down = rows - 1, left = 0, right = columns - 1;

    for (size_t cnt = 0; cnt < rows*columns; cnt++)
    {
        for (int i = left; i <= right; ++i)
        {
            cout << matrix[up][i] << " ";
        }
        ++up;

        for (int i = up; i <= down; ++i)
        {
            cout << matrix[i][right] << " ";
        }
        --right;

        for (int i = right; i >= left; --i)
        {
            cout << matrix[down][i] << " ";
        }
        --down;

        for (int i = down; i >= up; --i)
        {
            cout << matrix[i][left] << " ";
        }
        ++left;
    }
    
    cout << endl;
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS * MAX_COLS];

    size_t rows, columns;
    cin >> rows >> columns;

    read(matrix, rows, columns);
    printSpiral(matrix, rows, columns);

    return 0;
}