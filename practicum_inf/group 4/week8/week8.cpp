#include <iostream>

const int MAX_ARRAY_SIZE = 6;

bool allDifferent(int arr[], int size);
bool diffDiagonal(int arr[][3], int size);
void swap(int& a, int& b);
void transpone(int arr[][MAX_ARRAY_SIZE], int size);
void printMatrix(int arr[][MAX_ARRAY_SIZE], int size);

int main(){

    int matrix[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE] = {
    {11, 12, 13, 14, 15, 16}, 
    {21, 22, 23, 24, 25, 26}, 
    {31, 32, 33, 34, 35, 36}, 
    {41, 42, 43, 44, 45, 46}, 
    {51, 52, 53, 54, 55, 56}, 
    {61, 62, 63, 64, 65, 66}};

    int matrix2[][3] = {{1, 2, 3},
                        {2, 2, 4},
                        {1, 4, 3}};

    //std::cout << diffDiagonal(matrix2, 3);
    transpone(matrix, 6);
    printMatrix(matrix, 6);
    return 0;
}

bool diffDiagonal(int arr[][3], int size) {

    int primary[MAX_ARRAY_SIZE];
    int secondary[MAX_ARRAY_SIZE];
    int count = 0;

    while(count < 2*(size - 1)){
        int arrIndex = 0;

        for(int i = 0; i < size; i++){

            for(int j = 0; j < size; j++){
                if(i + j == count){
                    primary[arrIndex] = arr[i][j];
                    secondary[arrIndex] = arr[i][ size - j - 1];
                    arrIndex++;
                }
            }
        }

        if(allDifferent(primary, arrIndex) || allDifferent(secondary, arrIndex)){
            for(int i = 0; i < arrIndex; i++)
                std::cout << primary[i] << " " << secondary[i] << "\n";
            return true;
        }


        count++;
    }

    return false;

}

bool allDifferent(int arr[], int size){

    if(size < 2)
        return false;

    for (int i = 0; i < size - 1; i++) {
        
        for (int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) 
                return false;
         }

    }
    return true;
    
}

void swap(int& a, int& b){

    int temp = a;
    a = b;
    b = temp;
}

void transpone(int arr[][MAX_ARRAY_SIZE], int size){

    for(int i = 0; i < size; i++){

        for(int j = i; j < size; j++){
                swap(arr[i][j], arr[j][i]);
        }
    }
}

void printMatrix(int arr[][MAX_ARRAY_SIZE], int size){

    for(int i = 0; i < size; i++){

        for(int j = 0; j < size; j++){
            std::cout << arr[i][j] << ' ';
        }

        std::cout << '\n';

    }

} 