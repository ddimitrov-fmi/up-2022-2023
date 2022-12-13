#include <iostream>
#include <cmath>
using namespace std;

//task 01
void getCoords(double a, double b, double& x, double& y)
{
    //x + 2y = A //x = A - 2y      //x = ...      //x = A - 2(2A - B)/3
    //2x + y = B //2A - 4y + y = B //3y = 2A - B  //y = (2A - B)/3
    x = a - (2 * (2 * a - b)) / 3;
    y = (2 * a - b) / 3;
}

//task 02
void positiveAbove(double matrix[][32], int size)
{
    double* ptr;
    for (int i = 0; i < size; i++)
    {
        ptr = *matrix;
        for (int j = 0; j < size; j++)
        {
            if(*ptr >= 0 && i < j)
                cout << *ptr << ' ';
            ptr++;    
        }
        matrix++;
    }
}

//task 03
int sumOfEqualtoS(int matrix[][32], int size, int s)
{
    int* ptr;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        ptr = *matrix;
        for (int j = 0; j < size; j++)
        {
            if (i + j == s)
                sum += *ptr;
            ptr++;
        }
        matrix++;
    }

    return sum;
}

//task 04
bool isTriangle(int matrix[][32], int size)
{
    int* ptr;
    bool above = true;
    bool bellow = true;

    for (int i = 0; i < size; i++)
    {
        ptr = *matrix;
        for (int j = 0; j < size; j++)
        {
            if (*ptr != 0)
            {
                if(i < j)
                    above = false;
                else if (i > j)
                    bellow = false;
            }
            ptr++;
        }
        matrix++;
    }

    return above || bellow;
}

//task 05
void stamp(int original[][32], bool patern[][32], int result[][32], int rol, int col)
{
    for (int i = 0; i < rol; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (patern[i][j])
            {
                result[i][j] = original[i][j];
            }
            else
            {
                result[i][j] = 0;
            }
        }
    }
}

//task 06
void make2D(int* original, int size, int width, int result[][32])
{
    int iter = 0;
    for (int i = 0; i < ceil(double(size) / double(width)); i++)
    {
        for (int j = 0; j < width; j++)
        {
            result[i][j] = (iter >= size) ? 0 : original[iter];
            iter++;
        }
    }
}

//task 07
void pickTasks(int fnNumbers[][2], int numOfStudents, int maxTask, int(*func)(int, int))
{
    for (int i = 0; i < numOfStudents; i++)
    {
        fnNumbers[i][1] = func(fnNumbers[i][0], maxTask);
    }
}

int picker(int fnNumber, int maxTask)
{
    return fnNumber % maxTask + 1;
}

//task 08
bool isPrimeNumber(int number)
{
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

bool isSpecial(int number, int k)
{
    while (number)
    {
        if (isPrimeNumber(number % int(pow(10, k))) == false)
        {
            return false;
        }
        number /= 10;
    }

    return true;
}

//task 09
void filter(int* numbers, int* result, int size, bool(*func)(int))
{
    int iter = 0;
    for (int i = 0; i < size; i++)
    {
        if (func(numbers[i]))
            result[iter++] = numbers[i];
    }
}

bool isOdd(int number)
{
    return number % 2;
}

//task 10
void map(int* numbers, int size, int(*func)(int))
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] = func(numbers[i]);
    }
}

int devideByTwo(int number)
{
    return number / 2;
}

int main()
{
    //test task 01

    //double* x, * y;
    //double a = 3, b = 2;
    //double valX, valY;
    //x = &valX;
    //y = &valY;
    //getCoords(a, b, *x, *y);
    //cout << *x << ' ' << *y << endl;

    //test task 02

    //double arr[32][32] = { {1, 2, -3}, {4.5 , 5, 6}, {7, 8, 9} };
    //positiveAbove(arr, 3);


    //test task 03

    //int arr[32][32] = { {1, 2, 3}, {4 , 5, 6}, {7, 8, 9} };
    //cout << sumOfEqualtoS(arr, 3, 2);


    //test task 04

    //int arr[32][32] = { {1, 0, 0}, {4 , 5, 0}, {7, 8, 9} };
    //cout << boolalpha << isTriangle(arr, 3);


    //test task 05

    //int ogArr[32][32] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    //bool ptrnArr[32][32] = { {0, 1, 0}, {1, 0, 1}, {0, 1, 0} };
    //int result[32][32];
    //stamp(ogArr, ptrnArr, result, 3, 3);
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << result[i][j] << ' ';
    //    }
    //    cout << endl;
    //}

    //test task 06

    //int arr[32] = { 1, 2, 4, 2, 5, 3, 5 };
    //int matrix[32][32];
    //make2D(arr, 7, 2, matrix);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //    {
    //        cout << matrix[i][j] << ' ';
    //    }
    //    cout << endl;
    //}

    //test task 07

    //int arr[32][2] = { {71932, 0}, {31242, 0}, {87564, 0} };
    //pickTasks(arr, 3, 100, picker);

    //for (int i = 0; i < 3; i++)
    //{
    //    cout << arr[i][0] << " - " << arr[i][1] << '\n';
    //}


    //test task 08

    //cout << boolalpha << isSpecial(131, 2);


    //test task 09

    //int original[] = { 1, 2, 3, 2, 5, 6 };
    //int filtered[32];
    //filter(original, filtered, 6, isOdd);
    //for (int i = 0; i < 3; i++)
    //    cout << filtered[i] << ' ';


    //test task 10

    //int arr[] = { 8, 20, 31, 2, 5, 6 };
    //map(arr, 6, devideByTwo);
    //for (int i = 0; i < 6; i++)
    //{
    //    cout << arr[i] << ' ';
    //}
}