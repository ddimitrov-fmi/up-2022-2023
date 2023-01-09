#include <iostream>
#include <cmath>

void findGreatestCommonSuffix(int firstNum, int secondNum, int &result, int power = 0)
{
    const int digitFirst = firstNum % 10;
    const int digitSecond = secondNum % 10;

    if (digitFirst != digitSecond)
    {
        return;
    }

    result += digitFirst * std::pow(10, power);

    findGreatestCommonSuffix(firstNum / 10, secondNum / 10, result, power + 1);
}

int main(int argc, char **argv)
{
    int result;
    findGreatestCommonSuffix(1234, 45234, result);
    std::cout << result << std::endl;
    return 0;
}
