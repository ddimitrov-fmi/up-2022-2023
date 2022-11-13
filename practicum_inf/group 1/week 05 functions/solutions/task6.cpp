#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void printNumberSequence(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
    }
}
void printTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        printNumberSequence(i);
        cout << endl;
    }
}

int main()
{
    int size;
    
    cout << "Size: ";
    cin >> size;

    printTriangle(size);
    return 0;
}