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

void printZigZag(const int matrix[][MAX_COLS], size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; ++i)
    {
        if (i % 2 == 0)
        {
            for (size_t j = 0; j < columns; ++j)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = columns - 1; j >= 0; --j)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << endl;
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];

    size_t rows, columns;
    cin >> rows >> columns;

    read(matrix, rows, columns);
    printZigZag(matrix, rows, columns);

    return 0;
}