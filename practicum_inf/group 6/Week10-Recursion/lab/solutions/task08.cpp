#include <iostream>

const std::size_t MAX_N = 100;

void generateAllResultStrings(std::size_t n);

void generator(std::size_t n, char* current, std::size_t currentLength);

int main ()
{
    std::size_t n;

    std::cin >> n;

    generateAllResultStrings(n);

    return 0;
}

void generateAllResultStrings(std::size_t n)
{
    char temp[MAX_N];

    temp[0] = '0';
    generator(n, temp, 1);

    temp[0] = '1';
    generator(n, temp, 1);
}

void generator(std::size_t n, char* current, std::size_t currentLength)
{
    if (n == currentLength)
    {
        current[currentLength] = '\0';
        std::cout << current << std::endl;
        return;
    }

    current[currentLength] = '0';
    generator(n, current, currentLength + 1);
    if (current[currentLength - 1] == '0')
    {
        current[currentLength] = '1';
        generator(n, current, currentLength + 1);
    }
}