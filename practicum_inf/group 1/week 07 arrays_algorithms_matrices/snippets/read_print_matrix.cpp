#include <iostream>
using std::cin;
using std::cout;

const unsigned MAX_ROWS = 128;
const unsigned MAX_COLUMNS = 128;

void read(int matrix[][MAX_COLUMNS], unsigned rows, unsigned columns);

void print(const int matrix[][MAX_COLUMNS], unsigned rows, unsigned columns);

int main ()
{
    int matrix[MAX_ROWS][MAX_COLUMNS];
    
    unsigned rows, columns;
    cin >> rows >> columns;

    read(matrix, rows, columns);
    print(matrix, rows, columns);

    return 0;
}

void read(int matrix[][MAX_COLUMNS], unsigned rows, unsigned columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}

void print(const int matrix[][MAX_COLUMNS], unsigned rows, unsigned columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}