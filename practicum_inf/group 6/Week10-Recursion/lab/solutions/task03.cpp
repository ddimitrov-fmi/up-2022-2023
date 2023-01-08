#include <iostream>

bool isPrime(unsigned int n);

int main ()
{
    std::cout << std::boolalpha << isPrime(1) << std::endl;
    std::cout << std::boolalpha << isPrime(2) << std::endl;
    std::cout << std::boolalpha << isPrime(3) << std::endl;
    std::cout << std::boolalpha << isPrime(11) << std::endl;
    std::cout << std::boolalpha << isPrime(41) << std::endl;

    return 0;
}

bool isPrimeHelper(unsigned int n, unsigned int divider)
{
    if (divider * divider > n)
    {
        return true;
    }

    if (n % divider == 0)
    {
        return false;
    }

    return isPrimeHelper(n, divider + 2);
}

bool isPrime(unsigned int n)
{
    if (n == 2)
    {
        return true;
    }
    
    if (n < 2 || n % 2 == 0)
    {
        return false;
    }


    return isPrimeHelper(n, 3);
}