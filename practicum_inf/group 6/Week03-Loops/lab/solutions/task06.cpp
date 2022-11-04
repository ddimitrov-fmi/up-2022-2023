#include <iostream>
#include <climits>
#include <cmath>


int main()
{
    int current, min = INT_MAX, max = INT_MIN;
    
    while ((std::cin >> current) && current != 0)
    {
        min = std::min(min, current);
        max = std::max(max, current);
    }
    
    std::cout << "Nikola will buy alcohol for " << min << " levs\n";
    std::cout << "Nikola will tell his friends that the alcohol is " << max << " levs\n";

    return 0;
}