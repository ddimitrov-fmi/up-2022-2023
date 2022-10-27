#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n = 0;
    cin >> n;

    for (int i = 1; i * i <= n; i++) {
        cout << i * i << " ";
    }

    // int j = 1;
    // while (j * j <= n) {
    //     cout << j * j << " ";
    //     j++;
    // }

    // int i = 1;
    // do {
    //     cout << i * i << " ";
    //     i++;
    // } while (i * i <= n);

    // Infinite loop
    // for(;;) {}

    // int a = 0;
    // for (;a < 5; ++a) {
    //     std::cout << "yes" << std::endl;
    // }

    // int a = 5;

    // cout << a++ << endl;
    // cout << ++a << endl;

    return 0;
}
