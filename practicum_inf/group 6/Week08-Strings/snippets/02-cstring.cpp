#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 1024;

void swap(char* str1, char* str2[]);

int main ()
{
    char str1[MAX_CAPACITY] = "Pesho";
    char str2[MAX_CAPACITY] = "Lyubo";

    std::cout << strlen(str1) << std::endl;
    std::cout << strcmp(str1, str2) << std::endl;
    std::cout << strcmp(str1, str1) << std::endl;
    std::cout << strcmp(str2, str1) << std::endl;

    std::cout << str1 << " " << str2 << std::endl;
    swap(str1, str2);
    std::cout << str1 << " " << str2 << std::endl;

    char str3[MAX_CAPACITY] = {'\0', };
    strcat(str3, "My favourite ");
    strcat(str3, "pop-folk singer ");
    strcat(str3, "is Preslava");

    std::cout << str3 << std::endl;

    return 0;
}

void swap(char* str1, char* str2)
{
    char temp[MAX_CAPACITY];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}