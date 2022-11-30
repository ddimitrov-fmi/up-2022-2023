#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int ARR_MAX_SIZE = 100;

double read(double from, double to)
{
    double input;

    do
    {
        cout << "Size: ";
        cin >> input;
    } while (input < from || input > to);

    return input;
}

// returns the size of the array
int read(double numbers[])
{
    int size = read(1, ARR_MAX_SIZE); // max size is 100

    for (size_t i = 0; i < size; ++i)
    {
        cin >> numbers[i];
    }

    return size;
}

// returns the index of the smallest number
int min(double numbers[], int size)
{
    int currMin = 0;

    for (size_t i = 1; i < size; i++)
    {
        if (numbers[currMin] > numbers[i])
        {
            currMin = i;
        }
    }

    return currMin;
}

// returns the index of the largest number
int max(double numbers[], int size)
{
    int currMax = 0;

    for (size_t i = 1; i < size; i++)
    {
        if (numbers[currMax] < numbers[i])
        {
            currMax = i;
        }
    }

    return currMax;
}

double sum(double numbers[], int size)
{
    double result = 0;

    for (size_t i = 0; i < size; i++)
    {
        result += numbers[i];
    }

    return result;
}

double avg(double numbers[], int size)
{
    return sum(numbers, size) / size;
}

int main()
{
    double numbers[ARR_MAX_SIZE];
    int size = read(numbers);

    cout << "Min number: " << numbers[min(numbers, size)] << endl;
    cout << "Max number: " << numbers[max(numbers, size)] << endl;
    cout << "Sum: " << sum(numbers, size) << endl;
    cout << "Average: " << avg(numbers, size) << endl;
}