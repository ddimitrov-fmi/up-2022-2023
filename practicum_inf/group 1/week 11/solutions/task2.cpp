#include <iostream>
using std::cout;
using std::endl;

size_t digitsPower(size_t number) {
    size_t count = 1;

    while (number > 0)
    {
        number /= 10;
        count *= 10;
    }
    
    return count/10;
}

size_t reverseHelper(size_t number, int power)
{
    if (number < 10) {
        return number;
    }
    return (number % 10) * power + reverseHelper(number / 10, power/10);
}

size_t reverse(size_t number)
{
    return reverseHelper(number, digitsPower(number));
}


int main()
{
    int n = 12345;
    cout << "n = "  << n << ", sum = " << reverse(n) << endl;
}