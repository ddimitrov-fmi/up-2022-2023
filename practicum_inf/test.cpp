#include <iostream>

const std::size_t MAX_CAPACITY = 256;

void sort(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

int getProductOf(int matrix[][MAX_CAPACITY], std::size_t columns, std::size_t rowIndex);

void swap(int matrix[][MAX_CAPACITY], std::size_t columns, std::size_t row1, std::size_t row2);

std::size_t minFrom(int matrix[][MAX_CAPACITY], std::size_t columns, std::size_t from, std::size_t to);

int main ()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    sort(matrix, rows, columns);

    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int getProductOf(int matrix[][MAX_CAPACITY], std::size_t columns, std::size_t rowIndex)
{
    int product = 1;

    for (std::size_t i = 0; i < columns; ++i)
    {
        product *= matrix[rowIndex][i];
    }

    return product;
}

void swap(int matrix[][MAX_CAPACITY], std::size_t columns,
    std::size_t row1, std::size_t row2)
{
    int temp[MAX_CAPACITY];

    for (std::size_t i = 0; i < columns; ++i)
    {
        temp[i] = matrix[row1][i];
    }

    for (std::size_t i = 0; i < columns; ++i)
    {
        matrix[row1][i] = matrix[row2][i];
    }

    for (std::size_t i = 0; i < columns; ++i)
    {
        matrix[row2][i] = temp[i];
    }
}

std::size_t minFrom(int matrix[][MAX_CAPACITY], std::size_t columns, std::size_t from, std::size_t to)
{
    std::size_t min = from;
    int minProduct = getProductOf(matrix, columns, from);

    for (std::size_t i = from + 1; i < to; ++i)
    {
        int currentProduct = getProductOf(matrix, columns, i);

        if (currentProduct < minProduct)
        {
            min = i;
            minProduct = currentProduct;
        }
    }

    return min;
}

void sort(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows - 1; ++i)
    {
        std::size_t min = minFrom(matrix, columns, i, columns);
        swap(matrix, columns, i, min);
    }
}