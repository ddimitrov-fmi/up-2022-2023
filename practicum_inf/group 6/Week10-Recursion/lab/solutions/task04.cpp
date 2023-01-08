#include <iostream>

std::size_t strlen(const char* str);

int main ()
{
    std::cout << strlen("alabala") << std::endl;

    return 0;
}

std::size_t strlen(const char* str)
{
    if (!*str)
    {
        return 0;
    }

    return 1 + strlen(str + 1);
}