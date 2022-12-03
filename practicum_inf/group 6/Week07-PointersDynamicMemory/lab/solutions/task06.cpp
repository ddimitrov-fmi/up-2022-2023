#include <iostream>

void swap(int* a, int* b);

int* createArray(std::size_t size);

void readArray(int* array, std::size_t size);

void modifyArray(int* array, std::size_t size);

const int* minElement(const int* array, std::size_t size);

const int* maxElement(const int* array, std::size_t size);

void selectionSortAsc(int array[], std::size_t size);

void selectionSortDesc(int array[], std::size_t size);

void printArray(const int* array, std::size_t size);

int main ()
{
    std::size_t n;

    std::cin >> n;

    int* array = createArray(n);
    if (!array)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    readArray(array, n);

    int mid = n / 2;
    int* firstHalf = array;
    int* secondHalf = array + mid;

    selectionSortAsc(firstHalf, mid);
    selectionSortDesc(secondHalf, n - mid);

    printArray(array, n);

    delete[] array;

    return 0;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* createArray(std::size_t size)
{
    int* result = new (std::nothrow) int[size];
    if (!result)
    {
        return nullptr;
    }

    return result;
}

void readArray(int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

const int* minElement(const int* array, std::size_t size)
{
    const int* min = array;
    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] < *min)
        {
            min = array + i;
        }
    }
    return min;
}

const int* maxElement(const int* array, std::size_t size)
{
    const int* max = array;
    for (std::size_t i = 1; i < size; ++i)
    {
        if (array[i] > *max)
        {
            max = array + i;
        }
    }
    return max;
}

void selectionSortAsc(int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        const int* min = minElement(array + i, size - i);
        swap(array + i, array + (min - array));
    } 
}

void selectionSortDesc(int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        const int* max = maxElement(array + i, size - i);
        swap(array + i, array + (max - array));
    } 
}

void printArray(const int* array, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}