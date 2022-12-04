#include <iostream>

const std::size_t MAX_CAPACITY = 1024;

int main ()
{
    const char str1[] = {'F', 'M', 'I', '\0'};
    
    const char str2[] = "Hello";
    
    char str3[MAX_CAPACITY];
    str3[0] = 'a';
    str3[1] = 'l';
    str3[2] = 'o';
    str3[3] = '\0';

    char str4[MAX_CAPACITY];
    std::cin >> str4;

    //std::cin.ignore();
    //std::cin.get();

    char str5[MAX_CAPACITY + 1];
    std::cin.getline(str5, MAX_CAPACITY);

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;
    std::cout << str4 << std::endl;
    std::cout << str5 << std::endl;

    return 0;
}