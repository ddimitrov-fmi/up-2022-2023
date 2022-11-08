#include <iostream>

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimes(int n)
{
    std::cout << "Primes: " << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << std::endl;
        }
    }
}

long long factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }

    long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int square(int n)
{
    std::cout << "int" << std::endl;
    return n * n;
}

double square(double n)
{
    std::cout << "double" << std::endl;
    return n * n;
}

void printWelcome()
{
    std::cout << "Welcome to the program!" << std::endl;
}
void printHelp()
{
    std::cout << std::endl;
    std::cout << "How to use the program:" << std::endl;
    std::cout << "1. Print welcome message;" << std::endl;
    std::cout << "2. Print help message;" << std::endl;
    std::cout << "3. Calculate square of given integer [-10; 10];" << std::endl;
    std::cout << "4. Calculate factorial of given integer [0; 20];" << std::endl;
    std::cout << "5. Print prime numbers smaller than given integer [1; 100];" << std::endl;
    std::cout << "6. Exit the program." << std::endl;
}

int readInt(int min, int max)
{
    int num;
    do
    {
        std::cout << "Enter integer between " << min << " and " << max << " : ";
        std::cin >> num;
    } while (num < min || num > max);
    return num;
}

int main(int argc, char **argv)
{
    printWelcome();
    int command;
    do
    {
        printHelp();
        command = readInt(1, 6);
        switch (command)
        {
        case 1:
        {
            printWelcome();
            break;
        }
        case 2:
        {
            printHelp();
            break;
        }
        case 3:
        {
            int num = readInt(-10, 10);
            std::cout << "Squared: " << square(num) << std::endl;
            break;
        }
        case 4:
        {
            int num = readInt(0, 20);
            std::cout << "Factorial: " << factorial(num) << std::endl;
            break;
        }
        case 5:
        {
            int num = readInt(1, 100);
            printPrimes(num);
            break;
        }
        case 6:
        {
            std::cout << "Program exitting... Ciao!" << std::endl;
            return 0;
        }
        }
    } while (command != 6);

    return 0;
}
