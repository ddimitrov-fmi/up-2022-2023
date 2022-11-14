#include <iostream>
using namespace std;

//task 01
int max(int numA, int numB)
{
    return numA > numB ? numA : numB;
}

//task 02
double discounted(double price, double discount)
{
    price = price - (price * (discount / 100)); //getting the % of the price and then removing it from the overall price
    return price;
}

//task 03
bool isLetter(char symbol)
{
    return (symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z');
}

//task 04
bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

//task 05 a)
int pow(int number, int power)
{
    if (number == 0 || number == 1)
    {
        return number;
    }


    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= number;
    }

    return result;
}

//task 05 b)
int sqrt(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }

    for (int i = 2; i <= number / 2; i++) //sqrt from n is always less or equal to n/2 so we dont need to check each number to n
    {
        if (pow(i, 2) == number)
        {
            return i;
        }
    }

    return -1;
}

//task 06
bool isTriangle(double sideA, double sideB, double sideC)
{
    return (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);
}

void triangleType(double sideA, double sideB, double sideC)
{
    if (!isTriangle(sideA, sideB, sideC)) //equivalent to if(isTriangle(sideA, sideB, sideC) == false)
    {
        cout << "There is no such triangle\n";
        return;
    }

    int temp;
    if (sideA > sideB)
    {
        temp = sideB;
        sideB = sideA;
        sideA = temp;
    }
    if (sideB > sideC)
    {
        temp = sideC;
        sideC = sideB;
        sideB = temp;
    }
    //after these to ifs we are sure that sideC is the biggest one

    if (pow(sideA, 2) + pow(sideB, 2) == pow(sideC, 2))
    {
        cout << "Right-angled triangle\n";
    }
    else if (pow(sideA, 2) + pow(sideB, 2) > pow(sideC, 2))
    {
        cout << "Acute-angled triangle\n";
    }
    else
    {
        cout << "Obtuse-angled triangle\n";
    }
}

//task 07
int digitsSum(int number)
{
    int result = 0;

    while (number)
    {
        result += number % 10;
        number /= 10;
    }

    return result;
}

//task 08
void decToBin(int decimal)
{
    int binary = 0;
    int digitPlacer = 1;

    while (decimal)
    {
        binary += (decimal % 2) * digitPlacer;
        digitPlacer *= 10;
        decimal /= 2;
    }

    cout << binary << endl;
}

int main()
{
    cout << "task 01: " << max(81, 23) << endl;
    cout << "task 02: " << discounted(300, 25) << endl;
    cout << "task 03: " << boolalpha << isLetter('K') << endl;
    cout << "task 04: " << boolalpha << isDigit('8') << endl;
    cout << "task 05 a): " << pow(5, 3) << endl;
    cout << "task 05 b): " << sqrt(1024) << endl;
    cout << "task 06: ";
    triangleType(7, 8, 9);
    cout << "task 07: " << digitsSum(123456789) << endl;
    cout << "task 08: ";
    decToBin(20);
}