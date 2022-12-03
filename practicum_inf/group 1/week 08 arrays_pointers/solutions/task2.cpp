#include <iostream>

const int* findElement(const int *start, const int *end, int element)
{
    while (start != end)
    {
        if (*start == element)
        {
            return start;
        }
        ++start;
    }
    return nullptr;
}

int main()
{
    int arr[] = {1, 1, 7, 4, 3, 5, -1, 3};
    std::cout << "Index of first occurence of 3: "
              << findElement(arr, arr + sizeof(arr) / sizeof(int), 3) - arr
              << std::endl;
}