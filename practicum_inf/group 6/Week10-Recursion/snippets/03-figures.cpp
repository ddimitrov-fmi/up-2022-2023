#include <iostream>

void printARow(char ch, std::size_t size);

void printTriangle(char ch, std::size_t rows);

int main ()
{
    printTriangle('@', 8);

    return 0;
}

void printTriangle(char ch, std::size_t rows)
{
    if (rows == 0)
    {
        return;
    }

    printARow(ch, rows);
    std::cout << std::endl;
    printTriangle(ch, rows - 1);
}

void printARow(char ch, std::size_t size)
{
    if (size == 0)
    {
        return;
    }

    std::cout << ch << " ";
    printARow(ch, size - 1);
}