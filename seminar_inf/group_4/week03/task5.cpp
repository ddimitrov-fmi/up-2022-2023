#include <iostream>

int main(int argc, char** argv)
{
    int n, factorial = 1;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << factorial << std::endl;

    return 0;
}
