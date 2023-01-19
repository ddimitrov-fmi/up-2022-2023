#include <iostream>
#define MAXSIZE 50
using namespace std;

//task 1 A
int fib(int number)
{
    int lastNumber = 1;
    int beforeLastNumber = 0;
    int currentNumber = lastNumber + beforeLastNumber;
    if (number <= 0)
    {
        return 0;
    }
    if (number == 1 || number == 2)
    {
        return 1;
    }

    for (int i = 0; i < number - 3; i++)
    {
        beforeLastNumber = lastNumber;
        lastNumber = currentNumber;
        currentNumber = lastNumber + beforeLastNumber;
    }
    return currentNumber;
}


//task 1 B

bool stopInput(int number)
{
    return number == 0 || (number > 0 && number % 10 == 7);
}

int countOfNegativeNumbers()
{
    int number;
    int countOfNegatives = 0;
    do {
        cin >> number;
        if (number < 0)
        {
            countOfNegatives++;
        }
    } while (!stopInput(number));
    return countOfNegatives;
}

//task 2

void numberOperations(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            switch (i)
            {
            case 1: b == 1 ? cout << "one " : cout << "one, ";
                break;
            case 2: b == 2 ? cout << "two" : cout << "two, ";
                break;
            case 3: b == 3 ? cout << "three" : cout << "three, ";
                break;
            case 4: b == 4 ? cout << "four " : cout << "four, ";
                break;
            case 5: b == 5 ? cout << "five" : cout << "five, ";
                break;
            case 6: b == 6 ? cout << "six " : cout << "six, ";
                break;
            case 7: b == 7 ? cout << "seven " : cout << "seven, ";
                break;
            case 8: b == 8 ? cout << "eight " : cout << "eight, ";
                break;
            case 9: b == 9 ? cout << "nine " : cout << "nine, ";
                break;
            }
        }
        else if (i % 2 == 0)
        {
            i == b ? cout << "even" : cout << "even, ";
        }
        else
        {
            i == b ? cout << "odd" : cout << "odd, ";

        }
    }
}

bool isEveryRhombusElemnentOdd(int matrix[][MAXSIZE], int size)
{
    //upper part
    for (int i = 0; i < size / 2; i++) // Deviding odd inputs will return the smaller number 
    {
        if (matrix[i][i + size / 2] % 2 == 0 || matrix[i][size / 2 - i] % 2 == 0)
        {
            return false;
        }
    }

    //down part
    for (int i = size / 2; i < size; i++)
    {
        if (matrix[i][i - size / 2] % 2 == 0 || matrix[i][size - 1 - (i - size / 2)] % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

#include <iostream>

int main()
{
    //cout << fib(4);
    //cout << countOfNegativeNumbers();
    //numberOperations(2, 4);
    int matrix[MAXSIZE][MAXSIZE] =
    {
     {0, 0, 3, 0, 0},
     {0, 1, 0, 1, 0},
     {7, 0, 0, 0, 21},
     {0, 9, 0, 3, 0},
     {0, 0, 1, 0, 0}
    };
     cout << boolalpha << isEveryRhombusElemnentOdd(matrix, 5);
}
