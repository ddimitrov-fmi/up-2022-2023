#include <iostream>

int main ()
{
    int temp;
    int min, max;

    std::cin >> temp;
    if (temp == 0)
    {
        std::cout << "There isn't any alcohol in the shop" << std::endl;
        return 1;
    }
    else if (temp < 0)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    else
    {
        min = temp;
        max = temp;
    }

    std::cin >> temp;
    while (temp != 0)
    {
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }

        std::cin >> temp;
    }

    std::cout << "Nikola will buy alcohol for " << min << " levs" << std::endl;
    std::cout << "Nikola will tell his friends that the alcohol is " << max << " levs" << std::endl;
    
    return 0;
}