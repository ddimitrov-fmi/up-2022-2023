#include<iostream>

template<class T>
void swap(T& left, T& right){
    left = left ^ right;
    right = left ^ right;
    left = left ^ right;
}


template<class T>
void selectionSort(T array[], size_t size){
    size_t i,j, min;

    for(i = 0; i < size - 1; i++){
        min = i;

        for(j = i + 1; j < size; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }

        if(min != i){
            swap(array[min], array[i]);
        }

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
    int arrayToBeSorted[] = {64, 25, 12, 22, 11};

    print(arrayToBeSorted, 5);

    selectionSort(arrayToBeSorted, 5);

    print(arrayToBeSorted, 5);

    return 0;
}
