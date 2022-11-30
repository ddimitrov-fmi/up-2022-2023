#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int ARR_MAX_SIZE = 100;

int read(int from, int to)
{
    int input;

    do
    {
        cout << "Size: ";
        cin >> input;
    } while (input < from || input > to);

    return input;
}

// returns the size of the array
int read(unsigned numbers[])
{
    int size = read(1, ARR_MAX_SIZE);

    for (size_t i = 0; i < size; ++i)
    {
        cin >> numbers[i];
    }

    return size;
}

void print(unsigned numbers[], int size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void swap(unsigned numbers[], int pos1, int pos2)
{
    unsigned temp = numbers[pos1];
    numbers[pos1] = numbers[pos2];
    numbers[pos2] = temp;
}

void reverse(unsigned numbers[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(numbers, start, end);
        ++start;
        --end;
    }
    // the body of the loop is equal to this:
    // swap(numbers, start++, end++);
}

int main()
{
    unsigned numbers[ARR_MAX_SIZE];
    int size = read(numbers);

    reverse(numbers, size);
    print(numbers, size);
}