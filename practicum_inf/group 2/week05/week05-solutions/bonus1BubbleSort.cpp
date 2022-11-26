#include<iostream>

template<class T>
void swap(T& left, T& right){
    left = right ^ left;
    right = right ^ left;
    left = right ^ left;
}


template<class T>
void print(T array[], size_t size){
    
    size_t i;

    for(i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

template<class T>
void bubbleSort(T array[], size_t size){

    size_t i,j;

    for(i = 0; i < size; i++){
        for(j = 0; j < size - i - 1; j++){
            //> -> ascending order; < -> descending order;
            if(array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}


int main(){
    int arrToBeSorted[] = {3, 7, 9, 4, 2};
    int a = 5, b = 10;

    //unsorted data
    print(arrToBeSorted, 5);

    //sorting data
    bubbleSort(arrToBeSorted, 5);

    //sorted data
    print(arrToBeSorted, 5);

    return 0;
}
