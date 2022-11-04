#include <iostream>


int main()
{
    int num;
    std::cin >> num;
    
    int twoCnt = 0;
    while (num)
    {
        int digit = num % 10;

        if (digit < 2 || digit > 6)
        {
            std::cout << "Invalid input!\n";
            return 1;
        }
        
        twoCnt += (digit == 2);

        num /= 10;
    }
    
    std::cout << twoCnt << '\n';

    return 0;
}