#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Invalid number" << std::endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            std::cout << " ";
        }
        
        for (int j = 1; j < i * 2; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            std::cout << " ";
        }
        
        for (int j = 1; j < i * 2; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    

    return 0;
}
