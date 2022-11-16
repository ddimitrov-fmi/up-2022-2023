#include <iostream>
using namespace std;

const int COUNT = 100;

int sum(int number)
{
    int sum = 0;

    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }

    return sum;
}

int product(int number1, int number2)
{
    int prod = 1;

    for (int i = number1; i <= number2; i++)
    {
        prod *= i;
    }

    return prod;
}

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for(int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void allPrimesIn(int min, int max)
{
    for(int i = min; i <= max; i++)
    {
        if(isPrime(i)) cout << i << " ";
    }
}

void floyd (int n)
{
    int number = 1;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int decToBin(int decimal)
{
    int remainder = 1;
    int product = 1;
    int binary = 0;

    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    return binary;
}

int main()
{
    int decimal = 0;
    cin >> decimal;
    decToBin(decimal);
}

int main()
{
    // int num;
    // cin >> num;

    // cout << sum(num) << endl;
    //cout << product(num, num2) << endl;
    // cout << "Number is prime: " << boolalpha << isPrime(num);

    // allPrimesIn(12, 25);

    // int n;
    // cin >> n;
    // floyd (n);

    int num;

    std::cout << sizeof(num) << endl;

    // std::cin >> num;

    int n[COUNT] = {};


    // int n1[] = {1, 2, 3, 4, 5};
    // int n2[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << n1[i] << std::endl;
    // }

    // 0 .. 9

    return 0;    
}