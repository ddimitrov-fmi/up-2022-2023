#include <iostream>

// Решете си я сами!

const int MAX_ARRAY_SIZE = 3;

bool allDifferent(int arr[], int size);
bool diffDiagonal(int arr[][MAX_ARRAY_SIZE], int size);

// Транспониране
//void swap(int& a, int& b);
// void transpone(int arr[][MAX_ARRAY_SIZE], int size);
//void printMatrix(int arr[][MAX_ARRAY_SIZE], int size);

int main(){

    int matrixTrue[][3] = {{1, 2, 3},
                           {2, 2, 4},
                           {1, 4, 3}};

    int matrixFalse[][3] = {{1, 4, 3},
                            {4, 2, 4},
                            {3, 4, 2}};

    std::cout << std::boolalpha << diffDiagonal(matrixTrue, 3) << ' '  << std::boolalpha << diffDiagonal(matrixFalse, 3);
    return 0;
}

bool diffDiagonal(int arr[][MAX_ARRAY_SIZE], int size) {

    int primary[MAX_ARRAY_SIZE];
    int secondary[MAX_ARRAY_SIZE];
    int count = 1;

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

            // Принтирам си диаголаните
            // for(int i = 0; i < arrIndex; i++)
            //     std::cout << primary[i] << " " << secondary[i] << "\n";
            return true;
        }


        count++;
    }

    return false;

}

bool allDifferent(int arr[], int size){


    for (int i = 0; i < size - 1; i++) {
        
        for (int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) 
                return false;
         }

    }

    return true;
    
}

// void swap(int& a, int& b){

//     int temp = a;
//     a = b;
//     b = temp;
// }

// void transpone(int arr[][MAX_ARRAY_SIZE], int size){

//     for(int i = 0; i < size; i++){

//         for(int j = i; j < size; j++){
//                 swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// void printMatrix(int arr[][MAX_ARRAY_SIZE], int size){

//     for(int i = 0; i < size; i++){

//         for(int j = 0; j < size; j++){
//             std::cout << arr[i][j] << ' ';
//         }

//         std::cout << '\n';

//     }

// } 