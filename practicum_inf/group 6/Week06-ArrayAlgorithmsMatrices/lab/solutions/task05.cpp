#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t size);

bool isPalindromic(const int matrix[][MAX_CAPACITY], std::size_t size);

int main()
{
    std::size_t size;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> size;
    readMatrix(matrix, size);

    std::cout << isPalindromic(matrix, size) << std::endl;

    return 0;
}

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        for (std::size_t j = 0; j < size; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

bool isPalindromic(const int matrix[][MAX_CAPACITY], std::size_t size)
{
    for (std::size_t diag = 1; diag < size; ++diag)
    {
        for (std::size_t row = 0; row < size; ++row)
        {
            int col = row + diag;
            if (col >= size)
            {
                break;
            }

            if (matrix[row][col] != matrix[col][row])
            {
                return false;
            }
        }
    }

    return true;
}