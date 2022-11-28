#include <iostream>

void storeMinMax(int array[], std::size_t size, int &max, int &min) {
    if (array == nullptr || size == 0) {
        std::cout << "Invalid arguments for the function!";
        return;
    }
    
    max = array[0];
    min = array[0];

    for (std::size_t i = 0; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }
}

int main(int argc, char **argv)
{
    std::cout << "Hello World" << std::endl;
    
    std::size_t size = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int array[size];

    std::cout << "Enter the elements of the array: ";

    for (std::size_t i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    int minMain = 0;
    int maxMain = 0;

    storeMinMax(array, size, maxMain, minMain);

    std::cout << "The min element is: " << minMain << std::endl;
    std::cout << "The max element is: " << maxMain << std::endl;    
    
    return 0;
}
