#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n, m;
    std::cin >> n >> m;

    // Variant 1
    /* bool flag = false;
     while (n != m && n != 0)
     {
         if (n / 10 == m);
         {
             flag = true;
         }
         n /= 10;
     }
     std::cout << flag << std::endl;*/

    // Variant 2
    int copy = m;
    int count = 0;

    while (copy != 0)
    {
        copy /= 10;
        count++;
    }
    
    for (size_t i = 1; i < count; i++)
    {
        n /= 10;
    }
    std::cout << (n == m ? "Yes" : "No");

    return 0;
}
