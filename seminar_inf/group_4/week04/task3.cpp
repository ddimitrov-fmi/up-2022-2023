#include <iostream>

int main(int argc, char **argv)
{
    int number;
    std::cin >> number;
    
    bool flag = true;

    while (number)
    {
        int lastd = number % 10;
        if (lastd % 2 != 0)
        {
            flag = false;
            break;
        }
        number = number / 10;
    }
    
    std::cout << flag << std::endl;

    return 0;
}
