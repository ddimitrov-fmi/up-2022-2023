#include<iostream>

template<class T>
void InsertionSort(T array[], size_t size){
    size_t i, j;
    T key;

    for(i = 1; i < size; i++){
        key = array[i];
        j = i - 1;

        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;
           
        }
         array[j + 1] = key;
    }
}


template<class T>
void print(T array[], size_t size){
    size_t i;

    for(i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int arrayToBeSorted[] = {9, 7, 3, 6, 2};

    //printing unsorted array
    print(arrayToBeSorted, 5);

    //sorting array
    InsertionSort(arrayToBeSorted, 5);

    //printing sorted array
    print(arrayToBeSorted, 5);

    return 0;
}
