#include <iostream>
using std::cout;
using std::endl;

void markMultiplesOfN(bool numbers[], int size, int n)
{
    for (size_t i = n * 2; i <= size; i += n)
    {
        numbers[i] = true;
    }
}

void generatePrimeNumbers(bool isComposite[], int to)
{
    isComposite[0] = true; // 0 is not prime
    isComposite[1] = true; // 1 is not prime

    for (size_t i = 2; i < to; i++)
    {
        if (!isComposite[i])
        {
            markMultiplesOfN(isComposite, to, i);
        }
    }
}

void printPrimeNumbers(bool isComposite[], int size)
{
    cout << "Prime numbers between " << 1 << " and " << size << ":\n";

    for (size_t i = 0; i < size; i++)
    {
        if (!isComposite[i])
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    const int MAX_NUM = 15;
    bool isComposite[MAX_NUM + 1] = {};

    generatePrimeNumbers(isComposite, MAX_NUM);
    printPrimeNumbers(isComposite, MAX_NUM);
}