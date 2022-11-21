#include <iostream>

unsigned int CAPACITY = 100;

void printArrayElements(const int array[], unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

// Right way:
void readArray(int array[], unsigned size)
{
    std::cout << "Enter the elements of the array: ";

    for (unsigned int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

// Wrong way:
int *readArrayWRONG(unsigned size)
{
    int array[CAPACITY];

    std::cout << "Enter the elements of the array: ";

    for (unsigned int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    return array;
}

int main(int argc, char **argv)
{
    unsigned int size = 0;

    do
    {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;
    } while (size < 1 || size > CAPACITY);

    int array[CAPACITY];
    readArray(array, size);
    printArrayElements(array, size);

    int *arrayWrong = readArrayWRONG(size);
    int b = 1; // Just to mess things up a bit more
    printArrayElements(arrayWrong, size);

    std::cout << std::endl;

    return 0;
}
