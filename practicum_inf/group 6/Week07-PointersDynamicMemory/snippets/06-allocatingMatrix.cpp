#include <iostream>

void deallocate(int** matrix, std::size_t rows);

int main ()
{
    std::size_t rows, columns;
    std::cin >> rows >> columns;

    int** matrix = new (std::nothrow) int*[rows]; 
    if (!matrix)
    {
        std::cout << "Problem while allocating memory for the array of pointers" << std::endl;
        return 1;
    }

    for (std::size_t i = 0; i < rows; ++i)
    {
        matrix[i] = new (std::nothrow) int[columns];
        if (!matrix[i])
        {
            deallocate(matrix, i);
            std::cout << "Problem while allocating memory for column #" << i << std::endl;
            return 1;
        }

        for (std::size_t j = 0; j < columns; ++j)
        {
            matrix[i][j] = 6;
        }
    }

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    deallocate(matrix, rows);

    return 0;
}

void deallocate(int** matrix, std::size_t rows)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}