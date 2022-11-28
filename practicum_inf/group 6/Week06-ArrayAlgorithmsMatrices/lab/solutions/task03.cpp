#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t size);

void getMainDiagonal(const int matrix[][MAX_CAPACITY], std::size_t size, int mainDiagonal[]);

void getSecondaryDiagonal(const int matrix[][MAX_CAPACITY], std::size_t size, int secondaryDiagonal[]);

void swapDiagonals(int matrix[][MAX_CAPACITY], std::size_t size, 
        const int mainDiagonal[], const int secondaryDiagonal[]);

void printArray(const int array[], std::size_t size);

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t size);

int main()
{
    std::size_t size;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> size;
    readMatrix(matrix, size);

    int mainDiagonal[MAX_CAPACITY], secondaryDiagonal[MAX_CAPACITY];

    getMainDiagonal(matrix, size, mainDiagonal);
    getSecondaryDiagonal(matrix, size, secondaryDiagonal);

    std::cout << "Main diagonal: ";
    printArray(mainDiagonal, size);
    std::cout << "Secondary diagonal: ";
    printArray(secondaryDiagonal, size);

    swapDiagonals(matrix, size, mainDiagonal, secondaryDiagonal);

    std::cout << "New matrix: " << std::endl;
    printMatrix(matrix, size);

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

void getMainDiagonal(const int matrix[][MAX_CAPACITY], std::size_t size, int mainDiagonal[])
{
    for (std::size_t i = 0; i < size; ++i)
    {
        mainDiagonal[i] = matrix[i][i];
    }
}

void getSecondaryDiagonal(const int matrix[][MAX_CAPACITY], std::size_t size, int secondaryDiagonal[])
{
    for (std::size_t i = 0; i < size; ++i)
    {
        secondaryDiagonal[i] = matrix[i][size - 1 - i];
    }
}

void swapDiagonals(int matrix[][MAX_CAPACITY], std::size_t size, 
        const int mainDiagonal[], const int secondaryDiagonal[])
{
    for (std::size_t i = 0; i < size; ++i)
    {
        matrix[i][i] = secondaryDiagonal[i];
        matrix[i][size - 1 - i] = mainDiagonal[i];
    }
}

void printArray(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        for (std::size_t j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}