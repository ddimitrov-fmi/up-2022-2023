#include <iostream>

int main(int argc, char** argv)
{

    long long result = 1;

    int n;
    std::cin >> n;
    int k;
    std::cin >> k;

    for (int i = k + 1; i <= n; ++i) {
        result *= i;
    }
    
    std::cout << result << std::endl;
    return 0;
}
