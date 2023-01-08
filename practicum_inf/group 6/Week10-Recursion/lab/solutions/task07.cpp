#include <iostream>

void printSpaces(unsigned int n);

void printIncreasingSequence(unsigned int to);

void printIncreasingSequenceHelper(unsigned int to, unsigned int current);

void printDecreasingSequence(unsigned int from);

void printNumericTriangle(unsigned int n);

void printNumericTriangleHelper(unsigned int n, unsigned int currentRow);

int main ()
{
    unsigned int n;

    std::cin >> n;

    printNumericTriangle(n);

    return 0;
}

void printSpaces(unsigned int n)
{
    if (n == 0)
    {
        return;
    }

    std::cout << " ";
    printSpaces(n - 1);
}

void printIncreasingSequence(unsigned int to)
{
    printIncreasingSequenceHelper(to, 1);
}

void printIncreasingSequenceHelper(unsigned int to, unsigned int current)
{
    if (current > to)
    {
        return;
    }

    std::cout << current << " ";
    printIncreasingSequenceHelper(to, current + 1);
}

void printDecreasingSequence(unsigned int from)
{
    if (from == 0)
    {
        return;
    }

    std::cout << from << " ";
    printDecreasingSequence(from - 1);
}

void printNumericTriangle(unsigned int n)
{
    printNumericTriangleHelper(n, 1);
}

void printNumericTriangleHelper(unsigned int n, unsigned int currentRow)
{
    if (currentRow > n)
    {
        return;
    }

    printSpaces((n - currentRow) * 2);
    printIncreasingSequence(currentRow);
    printDecreasingSequence(currentRow - 1);
    std::cout << std::endl;
    printNumericTriangleHelper(n, currentRow + 1);
}