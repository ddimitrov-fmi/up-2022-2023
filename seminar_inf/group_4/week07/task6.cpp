#include <iostream>

const std::size_t MAX_ARRAY_SIZE = 100;

void findElement(int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], std::size_t rows, std::size_t columns, int element, int &row, int &column)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            if (matrix[i][j] == element)
            {
                row = i;
                column = j;
                return; // Stop at first ocurrance
            }
        }
    }
}

int main(int argc, char **argv)
{
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 10}};
    int row = 100, column = 100;

    findElement(matrix, 3, 4, 4, row, column);

    std::cout << row << std::endl;
    std::cout << column << std::endl;

    return 0;
}
