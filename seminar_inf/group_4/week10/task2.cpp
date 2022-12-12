#include <iostream>

void maxElementInColumn(int matrix[][256], std::size_t size, std::size_t columnIndex, int &maxElement, int &maxElementIndex)
{
    // Iterate over the rows
    for (size_t i = 0; i < size; i++)
    {
        if (matrix[i][columnIndex] > maxElement)
        {
            maxElement = matrix[i][columnIndex];
            maxElementIndex = i;
        }
    }
}

bool isMaxElementGreater(int matrix[][256], std::size_t size, std::size_t columnIndex)
{
    int result = 0;
    int maxElement = 0;
    int maxElementIndex = 0;
    maxElementInColumn(matrix, size, columnIndex, maxElement, maxElementIndex);
    // Iterate over rows
    for (size_t j = 0; j < size; j++)
    {
        if (j != maxElementIndex)
        {
            result += matrix[j][columnIndex];
        }
    }
    return maxElement > result;
}

void checkMatrixAndPrint(int matrix[][256], std::size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Column " << i << " satisfies the condition? " << std::boolalpha << isMaxElementGreater(matrix, size, i) << std::endl;
    }
}

int main(int argc, char **argv)
{
    int matrix[][256] = {{1, 2, 3, 4}, {0, 9, 5, 0}, {1, 1, 6, 0}, {7, 1, 11, 0}};

    checkMatrixAndPrint(matrix, 4);
    return 0;
}
