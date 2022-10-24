#include <iostream>

int main ()
{
    unsigned int year;

    std::cin >> year;

    bool isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    std::cout << "The leap " << (isLeap ? "is" : "isn't") << " leap" << std::endl;

    return 0;
}