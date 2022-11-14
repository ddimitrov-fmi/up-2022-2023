#include <iostream>

const unsigned MAX_ARRAY_SIZE = 100;

void printMatrix(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printPrimary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printBelowPrimary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i > j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printAbovePrimary(unsigned size, int matrix[][MAX_ARRAY_SIZE])

{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i < j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}
void printSecondary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i + j == size - 1)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printBelowSecondary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i + j > size - 1)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printAboveSecondary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i + j < size - 1)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printTransposedMatrix(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

void printTransposedBySecondary(unsigned size, int matrix[][MAX_ARRAY_SIZE])
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = size - 1; j >= 0; j--)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << "\n";
    }
}

int main(int argc, char **argv)
{
    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    unsigned sizeOfMatrix;
    std::cin >> sizeOfMatrix;
    for (int i = 0; i < sizeOfMatrix; ++i)
    {
        for (int j = 0; j < sizeOfMatrix; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix" << std::endl;
    printMatrix(sizeOfMatrix, matrix);
    std::cout << "Primary diagonal" << std::endl;
    printPrimary(sizeOfMatrix, matrix);
    std::cout << "Above primary diagonal" << std::endl;
    printAbovePrimary(sizeOfMatrix, matrix);
    std::cout << "Below primary diagonal" << std::endl;
    printBelowPrimary(sizeOfMatrix, matrix);
    std::cout << "Secondary diagonal" << std::endl;
    printSecondary(sizeOfMatrix, matrix);
    std::cout << "Above secondary diagonal" << std::endl;
    printAboveSecondary(sizeOfMatrix, matrix);
    std::cout << "Below secondary diagonal" << std::endl;
    printBelowSecondary(sizeOfMatrix, matrix);
    std::cout << "Transposed by primary diagonal" << std::endl;
    printTransposedMatrix(sizeOfMatrix, matrix);
    std::cout << "Transposed by secondary diagonal" << std::endl;
    printTransposedBySecondary(sizeOfMatrix, matrix);

    return 0;
}
