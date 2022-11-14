#include <iostream>

const unsigned int CAPACITY = 100;

int findBiggerNeighbors(int array[], unsigned int size) {
    int result = 0;

    for (unsigned int i = 1; i < size - 1; ++i) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            ++result;
        }
    }

    return result;
}

int main(int argc, char **argv)
{
    unsigned int size;

    do {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;
    } while (size < 1 || size > 100);

    int array[CAPACITY];

    std::cout << "Enter the elements of the array: ";
    
    for (unsigned int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "The result is: " << findBiggerNeighbors(array, size) << std::endl;
    return 0;
}
