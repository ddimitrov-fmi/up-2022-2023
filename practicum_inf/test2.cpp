#include <iostream> 

const int MAX_NUMS_IN_ARR = 100;

void inputArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i]; 
    }
}

void outputArr (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void numsWithSumEqualToM(const int arr[], int size, int m)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == m)
            {
                std::cout << "("<< arr[i] << " , "  << arr[j] <<")" ;
            }
        }
    }

    std::cout << std::endl;
}
int main()
{
    int arr[MAX_NUMS_IN_ARR];
    
    int size;
    std::cout << "Enter size of arr: ";
    std::cin >> size;

    inputArr(arr, size);

    int m;
    std::cout << "Enter random number m: ";
    std::cin >> m;

    numsWithSumEqualToM(arr, size, m);

    return 0;

}