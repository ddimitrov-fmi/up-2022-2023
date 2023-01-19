#include <iostream>
#define MAXSIZE 50
using namespace std;

//task 1 A
int factorial(int number)
{
    int result =1;
    for (int i = 1; i <= number ; i++)
    {
        result *=i;
    }
    return result;
}


//task 1 B

bool stopInput(int number)
{
    return number == 0 || (number < 0 && number % 10 == -6);
}

int countOfNonNegativeNumbers()
{
    int number;
    int countOfNegatives = 0;
    do {
        cin >> number;
        if (number >= 0)
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
            case 1:  b == 1 ? cout << "I " : cout << "I, ";
                break;
            case 2:  b == 2 ? cout << "II " : cout << "II, ";
                break;
            case 3:  b == 3 ? cout << "III " : cout << "III, ";
                break;
            case 4:  b == 4 ? cout << "IV " : cout << "IV, ";
                break;
            case 5:  b == 5 ? cout << "V " : cout << "V, ";
                break;
            case 6:  b == 6 ? cout << "VI " : cout << "VI, ";
                break;
            case 7:  b == 7 ? cout << "VII " : cout << "VII, ";
                break;
            case 8:  b == 8 ? cout << "VIII " : cout << "VIII, ";
                break;
            case 9: b == 9 ? cout << "IX " : cout << "IX, ";
                break;
            }
        }
        else
        {
            i == b ? cout << i * i : cout << i * i << ", ";
        }


    }
}

bool isEveryRhombusElemnentEven(int matrix[][MAXSIZE], int size)
{
    //upper part
    for (int i = 0; i < size / 2; i++) // Deviding odd inputs will return the smaller number 
    {
        if (matrix[i][i + size / 2] % 2 != 0 || matrix[i][size / 2 - i] % 2 != 0)
        {
            return false;
        }
    }

    //down part
    for (int i = size / 2; i < size; i++)
    {
        if (matrix[i][i - size / 2] % 2 != 0 || matrix[i][size - 1 - (i - size / 2)] % 2 != 0)
        {
            return false;
        }
    }
    return true;
}

#include <iostream>

int main()
{
    //cout << factorial(5);
    //cout << countOfNonNegativeNumbers();
    //numberOperations(2,14);
    int matrix[MAXSIZE][MAXSIZE] =
    {
     {1, 1, 2, 1, 1},
     {1, 4, 1, 2, 1},
     {8, 1, 1, 1, 12},
     {1, 4, 1, 4, 1},
     {1, 1, 2, 1, 1}
    };
    cout << boolalpha << isEveryRhombusElemnentEven(matrix, 5);
}
