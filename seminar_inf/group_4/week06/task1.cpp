#include <iostream>

const int MAX_ARRAY_SIZE = 100;

int main(int argc, char **argv)
{
    int arr[MAX_ARRAY_SIZE];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        // std::cin >> i[arr];
    }

    std::cout << "The even elements are: ";

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    
    std::cout << std::endl;

    return 0;
}
