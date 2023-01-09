#include <iostream>

unsigned findNumberDigits(int number, unsigned digit, unsigned count) {
    if (number == 0) { return count; }
    if (number % 10 == digit) count++;
    return findNumberDigits(number / 10, digit, count);
}

unsigned findNumberDigits(int number, unsigned digit) {
    return findNumberDigits(number, digit, 0);
}

int main(int argc, char **argv)
{
    std::cout << findNumberDigits(20192512, 2) << std::endl;
    return 0;
}
