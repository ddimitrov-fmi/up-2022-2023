#include <iostream>

int** allocateMatrix(std::size_t rows, std::size_t columns);

void readMatrix(int** matrix, std::size_t rows, std::size_t columns);

void deallocateMatrix(int** matrix, std::size_t rows);

int** generateNewMatrix(int** matrix, std::size_t rows, std::size_t columns, int K, 
                            const int* counters, std::size_t newRows);

// the array saves the count of numbers divisible by K on each row of the matrix
int* generateArrayOfCounters(int** matrix, std::size_t rows, std::size_t columns, int K, std::size_t& newRows);

void printNewMatrix(int** newMatrix, std::size_t oldRows, const int* counters);

int main ()
{
    std::size_t rows, columns;
    std::cin >> rows >> columns;

    int** originalMatrix = allocateMatrix(rows, columns);
    if (!originalMatrix)
    {
        std::cout << "Memory prblem!" << std::endl;
        return 1;
    }

    readMatrix(originalMatrix, rows, columns);

    int K;
    std::cin >> K;

    std::size_t newRows;
    int* counters = generateArrayOfCounters(originalMatrix, rows, columns, K, newRows);
    if (!counters)
    {
        std::cout << "Memory prblem!" << std::endl;
        deallocateMatrix(originalMatrix, rows);
        return 1;
    }

    int** newMatrix = generateNewMatrix(originalMatrix, rows, columns, K, counters, newRows);
    if (!newMatrix)
    {
        std::cout << "Memory prblem!" << std::endl;
        deallocateMatrix(originalMatrix, rows);
        delete[] counters;
        return 1;
    }

    printNewMatrix(newMatrix, rows, counters);

    deallocateMatrix(originalMatrix, rows);
    delete[] counters;
    deallocateMatrix(newMatrix, newRows);

    return 0;
}

int** allocateMatrix(std::size_t rows, std::size_t columns)
{
    int** matrix = new (std::nothrow) int*[rows];
    if (!matrix)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < rows; ++i)
    {
        matrix[i] = new (std::nothrow) int[columns];
        if (!matrix[i])
        {
            deallocateMatrix(matrix, i);
            return nullptr;
        }
    }

    return matrix;
}

void readMatrix(int** matrix, std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void deallocateMatrix(int** matrix, std::size_t rows)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** generateNewMatrix(int** matrix, std::size_t rows, std::size_t columns, int K, 
                            const int* counters, std::size_t newRows)
{
    int** newMatrix = new (std::nothrow) int*[newRows];
    if (!newMatrix)
    {
        return nullptr;
    }

    std::size_t currentRowIndex = 0;
    for (std::size_t i = 0; i < rows; ++i)
    {
        if (counters[i] != 0)
        {
            newMatrix[currentRowIndex] = new (std::nothrow) int[counters[i]];
            if (!newMatrix[currentRowIndex])
            {
                deallocateMatrix(newMatrix, currentRowIndex);
                return nullptr;
            }

            std::size_t currentColumnIndex = 0;
            for (std::size_t j = 0; j < columns; ++j)
            {
                if (matrix[i][j] % K == 0)
                {
                    newMatrix[currentRowIndex][currentColumnIndex++] = matrix[i][j];
                }
            }

            ++currentRowIndex;
        }
    }

    return newMatrix;
}

int* generateArrayOfCounters(int** matrix, std::size_t rows, std::size_t columns, int K, std::size_t& newRows)
{
    newRows = 0;

    int* counters = new (std::nothrow) int[rows] {0};
    if (!counters)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            if (matrix[i][j] % K == 0)
            {
                ++counters[i];
            }
        }

        if (counters[i] > 0)
        {
            ++newRows;
        }
    }

    return counters;
}

void printNewMatrix(int** newMatrix, std::size_t oldRows, const int* counters)
{
    std::size_t currentRowIndex = 0;
    for (std::size_t i = 0; i < oldRows; ++i)
    {
        if (counters[i] != 0)
        {
            for (std::size_t j = 0; j < counters[i]; ++j)
            {
                std::cout << newMatrix[currentRowIndex][j] << " ";
            }
            std::cout << std::endl;

            ++currentRowIndex;
        }
    }
}

