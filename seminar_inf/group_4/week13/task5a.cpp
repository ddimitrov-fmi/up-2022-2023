#include <iostream>

unsigned findDigitCount(unsigned number, unsigned digit)
{
    if(number == 0)
    {
        return 0;
    }

    if (number % 10 == digit)
    {
        return 1 + findDigitCount(number / 10, digit);
    }
    return 0 + findDigitCount(number / 10, digit);
}

int main(int argc, char **argv)
{
    std::cout << findDigitCount(20230109, 0) << std::endl;
    return 0;
}
