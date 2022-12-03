#include <iostream>

int* createArray(std::size_t size);

void readArray(int* array, std::size_t size);

void findSumMinMax(const int* array, std::size_t size, 
    int* sum, int* min, int* max);

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

    int sum, min, max;

    findSumMinMax(array, n, &sum, &min, &max);

    std::cout << sum << " " << min << " " << max << std::endl;

    delete[] array;

    return 0;
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

void findSumMinMax(const int* array, std::size_t size, 
    int* sum, int* min, int* max)
{
    *sum = *min = *max = array[0];

    for (std::size_t i = 1; i < size; ++i)
    {
        *sum += array[i];

        if (array[i] < *min)
        {
            *min = array[i];
        }

        if (array[i] > *max)
        {
            *max = array[i];
        }
    }    
}