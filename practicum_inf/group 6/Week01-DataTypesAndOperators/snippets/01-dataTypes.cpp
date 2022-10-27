#include <iostream>

int main ()
{
    // Character type
    char ch = 'a'; // At least 8 bits
    char ch2 = '!', ch3 = '3';

    // Integer types (signed)
    short a = 10; // Not smaller thar `char`. At least 16 bits
    int b = 10000; // Not smaller thar `short`. At least 16 bits
    long c = -100000; // Not smaller thar `int`. At least 32 bits
    long long d = 10000000; // Not smaller thar `long`. At least 64 bits

    // Integer types (unsigned)
    unsigned int x = 100000;
    // unsigned int invalidValue = -5;
    // std::cout << invalidValue << std::endl;

    // If you want to fix the size of the integer types, you can use these:
    int8_t e = 200;
    uint16_t f = 60000;
    int32_t g = 4000000000;

    // Floating-point types	
    float h = 2.222;
    double i = 3.333333; // Precision not less than `float`
    long double j = 4.44444444444; // Precision not less than `double`

    // Boolean type
    bool true1 = true;
    bool true2 = 1;
    bool false1 = false;
    bool false2 = 0;

    std::cout << true1 << " " << true2 << " " << false1 << " " << false2 << std::endl;
    
    // std::boolaplha will print `true` and `false` instead of `1` and `0`
    std::cout << std::boolalpha << true1 << " " << true2 << " " << false1 << " " << false2 << std::endl;

    return 0;
}