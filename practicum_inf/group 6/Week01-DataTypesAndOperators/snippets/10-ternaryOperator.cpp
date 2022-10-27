#include <iostream>

int main ()
{
    int a, b;

    std::cout << "Enter a value for 'a': ";
    std::cin >> a;

    std::cout << "Enter a value for 'b': ";
    std::cin >> b;

    // <condtion> ? <true-statement> : <false-statement>
    int max = (a >= b) ? a : b;

    std::cout << "The bigger number is " << ((a >= b) ? "'a'" : "'b'") << ". The value is: " << max << std::endl; 

    return 0;
}