#include <iostream>
#include <cmath>

const std::size_t MAX_CAPACITY = 100;
const double EPS = 0.0001;

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

bool islinearDependent(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns);

bool areRowsLinearDependant(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, 
                            std::size_t row1, std::size_t row2);

bool areColumnsLinearDependant(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, 
                            std::size_t column1, std::size_t column2);

void printRow(const int matrix[][MAX_CAPACITY], std::size_t rowIndex, std::size_t columns);

void printColumn(const int matrix[][MAX_CAPACITY], std::size_t columnIndex, std::size_t rows);

int main()
{
    std::size_t rows, columns;
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::cin >> rows >> columns;
    readMatrix(matrix, rows, columns);

    std::cout << std::boolalpha << islinearDependent(matrix, rows, columns) << std::endl;

    return 0;
}

void readMatrix(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < columns; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool areRowsLinearDependant(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, 
                            std::size_t row1, std::size_t row2)
{
    double currentCoefficient = (std::fabs(matrix[row2][0]) < EPS) ? 0 : (matrix[row1][0] / matrix[row2][0]);

    for (std::size_t k = 1; k < columns; ++k)
    {
        double currentCalculation = (std::fabs(matrix[row2][k]) < EPS) ? 0 : (matrix[row1][k] / matrix[row2][k]);
        if (std::fabs(currentCoefficient - currentCalculation) >= EPS)
        {
            return false;
        }
    }

    return true;
}

bool areColumnsLinearDependant(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns, 
                            std::size_t column1, std::size_t column2)
{
    double currentCoefficient = (std::fabs(matrix[0][column2]) < EPS) ? 0 : (matrix[0][column1] / matrix[0][column2]);

    for (std::size_t k = 1; k < columns; ++k)
    {
        double currentCalculation = (std::fabs(matrix[k][column2]) < EPS) ? 0 : (matrix[k][column1] / matrix[k][column2]);
        if (std::fabs(currentCoefficient - currentCalculation) >= EPS)
        {
            return false;
        }
    }

    return true;
}

bool islinearDependent(const int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t columns)
{
    // ROWS
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = i + 1; j < rows; ++j)
        {
            if (areRowsLinearDependant(matrix, rows, columns, i, j))
            {
                std::cout << "Row 1: ";
                printRow(matrix, i, columns);
                std::cout << "Row 2: ";
                printRow(matrix, j, columns);
                return true;
            }
        }
    }

    // COLUMNS
    for (std::size_t i = 0; i < columns; ++i)
    {
        for (std::size_t j = i + 1; j < columns; ++j)
        {
            if (areColumnsLinearDependant(matrix, rows, columns, i, j))
            {
                std::cout << "Column 1: ";
                printColumn(matrix, i, rows);
                std::cout << "Column 2: ";
                printColumn(matrix, j, rows);
                return true;
            }
        }
    }

    return false;
}

void printRow(const int matrix[][MAX_CAPACITY], std::size_t rowIndex, std::size_t columns)
{
    for (std::size_t i = 0; i < columns; ++i)
    {
        std::cout << matrix[rowIndex][i] << " ";
    }
    std::cout << std::endl;
}

void printColumn(const int matrix[][MAX_CAPACITY], std::size_t columnIndex, std::size_t rows)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        std::cout << matrix[i][columnIndex] << " ";
    }
    std::cout << std::endl;
}