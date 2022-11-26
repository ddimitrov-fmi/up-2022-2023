#include<iostream>
using namespace std;

//Credits to Ilia Todorov

const int MAX_SIZE = 3;

void printMatrix(const int matrix[][MAX_SIZE], int rows, int cols){
  
  for(int i = 0; i < row; i++){
    for(int j = 0; j < cols; j++){
      cout << matrix[i][j];
    }
  }
  cout << endl;
}

void determinant (const int matrix[][MAX_SIZE]) {
    int determinant = (matrix[1][1] * matrix[2][2] * matrix[3][3]) + (matrix[1][2] * matrix[2][3] * matrix[3][1]) + (matrix[1][3] * matrix[2][1] * matrix[3][2])
            - (matrix[3][1] * matrix[2][2] * matrix[1][3]) - (matrix[3][2] * matrix[2][3] * matrix[1][1]) - (matrix[3][3] * matrix[2][1] * matrix[1][2]);
    cout << "The determinant is equal to: " << determinant << endl;
}

//2) transposition
void transponation (int matrix[][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

//3) addition
void addition (int matrix[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows, int columns) {
    int addedMatrix[MAX_SIZE][MAX_SIZE] = {0};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            addedMatrix[i][j] += (matrix[i][j] + matrix2[i][j]);
        }
    }
    printMatrix(addedMatrix, rows, columns);
}

//4) subtraction
void subtraction (int matrix[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows, int columns) {
    int subtractedMatrix[MAX_SIZE][MAX_SIZE] = {0};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            subtractedMatrix[i][j] = matrix[i][j] - matrix2[i][j];
        }
    }
    printMatrix(subtractedMatrix, rows, columns);
}

//5) multiplication
void multiplication (int matrix[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows, int columns) {
    int multiliedMatrix[MAX_SIZE][MAX_SIZE] = {0};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            for (int k = 0; k < columns; ++k) {
                multiliedMatrix[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }
    printMatrix(multiliedMatrix, rows, columns);
}

int main(){

cout << "---------BONUS0---------" << endl;
    int matrix1[MAX_SIZE][MAX_SIZE] = {{1, 2, 3},
                                      {4, 5, 6},
                                      {7, 8, 9}};
    int matrix2[MAX_SIZE][MAX_SIZE] = {{11, 12, 13},
                                       {14, 15, 16},
                                       {17, 18, 19}};
    cout << "Determinat of matrix 1 is equal to: ";
    determinant(matrix1);
    cout << endl;
    cout << "Determinat of matrix 1 is equal to: ";
    determinant(matrix2);
    cout << endl;

    cout << "Matrix1 transponationed: " << endl;
    transponation(matrix1, 3, 3);
    cout << endl;
    cout << "Matrix2 transponationed: " << endl;
    transponation(matrix2, 3, 3);
    cout << endl;

    cout << "Matri1 + Matrix2: " << endl;
    addition(matrix1, matrix2, 3, 3);
    cout << endl;

    cout << "Matri1 - Matrix2: " << endl;
    subtraction(matrix1, matrix2, 3, 3);
    cout << endl;

    cout << "Matri1 * Matrix2: " << endl;
    multiplication(matrix1, matrix2, 3, 3);
    cout << endl;

  return 0;
}
