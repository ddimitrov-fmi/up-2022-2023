#include <iostream>

int sumElementsRow(int matrix[][6], unsigned int size, unsigned int indexRow) {
    int sumElementsRow = 0;

    for (unsigned int i = 0; i < size; ++i) {
        sumElementsRow += matrix[indexRow][i];
    }

    return sumElementsRow;
}

int sumElementsColumn(int matrix[][6], unsigned int size, unsigned int indexColumn) {
    int sumElementsColumn = 0;

    for (unsigned int i = 0; i < size; ++i) {
        sumElementsColumn += matrix[i][indexColumn];
    }

    return sumElementsColumn;
}

int findSumElementsPrimeDiagonal(int matrix[][6], unsigned int size) {
    int sumElementsPrimeDiagonal = 0;

    for (unsigned int i = 0; i < size; ++i) {
        sumElementsPrimeDiagonal += matrix[i][i];
    }

    return sumElementsPrimeDiagonal;
}

int findSumElementsSecondaryDiagonal(int matrix[][6], unsigned int size) {
    int sumElementsSecondaryDiagonal = 0;

    for (unsigned int i = 0; i < size; ++i) {
        sumElementsSecondaryDiagonal += matrix[i][size - i - 1];
    }

    return sumElementsSecondaryDiagonal;
}

bool isMatrixMagic(int matrix[][6], unsigned int size) {
    int arrayValues[2 * size + 2] = {0};
    
    for (unsigned int i = 0; i < size; ++i) {
        arrayValues[i] = sumElementsColumn(matrix, size, i);
        arrayValues[i + size] = sumElementsRow(matrix, size, i);
    }

    arrayValues[2 * size] = findSumElementsPrimeDiagonal(matrix, size);
    arrayValues[2 * size + 1] = findSumElementsSecondaryDiagonal(matrix, size);

    for (unsigned int i = 0; i < 2 * size + 1; ++i) {
        if (arrayValues[i] != arrayValues[i + 1]) {
            return false;
        }
    }

    return true;
}

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

}

void transpose(int matrix[][6]) //size = 6
{
    
    for(int i = 0; i < 6; i++)
    {
        for(int j = i; j < 6; j++)  
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

}

void printMatrix(int matrix[][6])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main() {

    /*int matrix[6][6] = {
        {11, 12, 13, 14, 15, 16}, 
        {21, 22, 23, 24, 25, 26}, 
        {31, 32, 33, 34, 35, 36}, 
        {41, 42, 43, 44, 45, 46}, 
        {51, 52, 53, 54, 55, 56}, 
        {61, 62, 63, 64, 65, 66}
    };

    int matrix2[6][6] {
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1}
    };

    std::cout << sumElementsRow(matrix, 6, 0) << std::endl;
    std::cout << sumElementsColumn(matrix, 6, 0) << std::endl;
    std::cout << findSumElementsPrimeDiagonal(matrix, 6) << std::endl;
    std::cout << findSumElementsSecondaryDiagonal(matrix, 6) << std::endl;
    std::cout << std::boolalpha << isMatrixMagic(matrix, 6) << std::endl;
    std::cout << std::boolalpha << isMatrixMagic(matrix2, 3) << std::endl;

    transpose(matrix);
    printMatrix(matrix);*/

    int array[] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i < 6; i++)
    {
        std::cout << array[i] << " " << &array[i] << " " << array + i << " ";
        // std::cout << *(array + i) << " " << array + i << " ";
    }

    std::cout << std::endl;

    int a = 5;

    int b = a;

    int &ref = a;

    std::cout << a << " " << b << " " << ref;    

    a = 10;

    std::cout << "\n" << a << " " << b << " " << ref; 

    std::cout << std::endl;

    std::cout << &a << " " << &ref ;  




    return 0;
}