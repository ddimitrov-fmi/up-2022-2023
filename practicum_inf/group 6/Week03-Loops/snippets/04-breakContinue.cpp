#include <iostream>

int main ()
{
    int x = 5, y = 3;
    
    do
    {
        if (!(x % y))
            continue;

        x -= 1;
        y = y + 1;
    } while (x > 0);
    
    std::cout << y << std::endl;

    return 0;
}