#include <iostream>

int* createArray(std::size_t size);

int** allocateTriangularMatrix(std::size_t size);

void fillTriangularMatrix(int** matrix, std::size_t size);

void printTriangularMatrix(int** matrix, std::size_t size);

void deallocate(int** matrix, std::size_t rows);

int main ()
{
    std::size_t n;
    std::cin >> n;

    int** triangularMatrix = allocateTriangularMatrix(n);
    if (!triangularMatrix)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    fillTriangularMatrix(triangularMatrix, n);

    printTriangularMatrix(triangularMatrix, n);

    deallocate(triangularMatrix, n);

    return 0;
}

int* createArray(std::size_t size)
{
    int* result = new (std::nothrow) int[size];
    if (!result)
    {
        return nullptr;
    }

    return result;
}

void deallocate(int** matrix, std::size_t rows)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

int** allocateTriangularMatrix(std::size_t size)
{
    int** result = new (std::nothrow) int*[size]; 
    if (!result)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < size; ++i)
    {
        result[i] = createArray(size - i);
        if (!result[i])
        {
            deallocate(result, i);
            return nullptr;
        }
    }  

    return result; 
}

void fillTriangularMatrix(int** matrix, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        for (std::size_t j = 0; j < size - i; ++j)
        {
            matrix[i][j] = j + 1;
        }
    }
}

void printTriangularMatrix(int** matrix, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        for (std::size_t j = 0; j < size - i; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}