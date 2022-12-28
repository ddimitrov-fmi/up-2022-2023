#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int readPositive(const char* inputMessage = "")
{
    int input;
    
    cout << inputMessage;
    cin >> input;

    while (input <= 0)
    {
        cout << "Invalid input! Try again: ";
        cin >> input;
    }
    return input;
}

bool allocate(int*& array, int length)
{
    array = new (std::nothrow) int[length];

    if (!array) { //check whether the allocation succeeded
        std::cerr << "Couldn't allocate memory!";
        array = nullptr;
        return false;
    }

    return true;
}

bool readRowLengths(int*& rowLengths, int rows)
{
    if (!allocate(rowLengths, rows))
        return false;
    
    for (size_t i = 0; i < rows; i++)
    {
        cout << "Length of row " << i << ": ";
        rowLengths[i] = readPositive();
    }

    return true;
}

void clearMatrix(int**& matrix, int rows) {
    for (size_t i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

void readArray(int* array, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        cin >> array[i];
    }
}

bool allocateMatrix(int**& matrix, const int* rowsLength, int rows)
{
    matrix = new (std::nothrow) int*[rows];

    if (!matrix) {
        std::cerr << "Couldn't allocate memory!";
        return false;
    }

    for (size_t i = 0; i < rows; i++)
    {
        if (!allocate(matrix[i], rowsLength[i])) {
            clearMatrix(matrix, rows);
            return false;
        }
    }
    return true;
}

void readMatrix(int**& matrix, const int* rowsLength, int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        readArray(matrix[i], rowsLength[i]);
    }
}

void swapRows(int**& matrix, int* rowLengths, int row1, int row2)
{
    int* temp = matrix[row1];
    matrix[row1] = matrix[row2];
    matrix[row2] = temp;

    int tmp = rowLengths[row1];
    rowLengths[row1] = rowLengths[row2];
    rowLengths[row2] = tmp;
}


int getMinIndex(const int* rowLengths, int from, int rows)
{
    int minIndex = from;
    for (size_t i = from + 1; i < rows; i++)
    {
        if (rowLengths[i] < rowLengths[minIndex]) {
            minIndex = i;
        }
    }
    
    return minIndex;
}

void sortMatrix(int** matrix, int* rowLengths, int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        swapRows(matrix, rowLengths, i, getMinIndex(rowLengths, i, rows));
    }
}

void printMatrix(int* const * matrix, int* rowLengths, int rows) 
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < rowLengths[i]; ++j)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int rows = readPositive("Size: ");

    int* rowLengths;
    int** matrix;

    if (!readRowLengths(rowLengths, rows) || !allocateMatrix(matrix, rowLengths, rows)) //checks whether the allocation succeeded
    {
        delete[] rowLengths;
        return 1; //terminates the program
    }

    cout << "Enter a matrix with the given size!\n";
    readMatrix(matrix, rowLengths, rows);
    sortMatrix(matrix, rowLengths, rows);

    cout << "Sorted matrix:\n";
    printMatrix(matrix, rowLengths, rows);

    clearMatrix(matrix, rows);
    delete[] rowLengths;
}