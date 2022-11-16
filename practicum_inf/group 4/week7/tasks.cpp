#include <iostream>

static int MAX_SIZE = 64;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int array[], int size)
{
    // 3 2 1
    // 2 1 | 3
    // 1 | 2 3

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j + 1], array[j]);
            }
        }
    }
}

void reverse(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(array[i], array[size - i - 1]);
    }
}

void shift(int arr[], int size)
{
    if (size < 2)
        return;
    int save = arr[0];
    int save2 = 0;
    arr[0] = arr[size - 1];
    for (int i = 1; i < size; i++)
    {
        save2 = arr[i];
        arr[i] = save;
        save = save2;
    }
}

void shiftVesko(int array[], int size, int k)
{
    if (k % size == 0)
        return;

    k %= size;
    
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < size; i++)
        {
            swap(array[0], array[i]);
        }
    }
}

void shiftK(int arr[], int size, int k)
{

    if (k % size == 0)
        return;

    for (int i = 0; i < k; i++)
        shift(arr, size);
}

int findInString(char str[], char find)
{
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == find)
        {
            counter += 1;
        }
    }
    return counter;
}

int longestSequence(int arr[], int size)
{
    int counter = 1;
    int maxCount = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            counter++;
        }
        else
        {
            if (counter > maxCount)
            {
                maxCount = counter;
            }

            counter = 1;
        }
    }
    return maxCount;
}

int main()
{
    // int arr[] = {3, 6, 8, 1, 9};

    // char str[MAX_SIZE];
    // char find;

    // std::cin >> str;
    // std::cin >> find;

    // std::cout << str << std::endl;
    // std::cout << findInString(str, find);

    int arr[] = {1, 7, 9, 3, 4, 5, 6, 3, 2, 8, 1};
    std::cout << longestSequence(arr, 11) << std::endl;

    
    // shiftVesko(arr, 5, 6);
    
    // printArray(arr, 5);
    // printArray(arr, 5);

    // bubbleSort(arr, 5);

    // printArray(arr, 5);

    // reverse(arr, 5);

    // printArray(arr, 5);

    return 0;
}
