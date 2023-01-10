#include<iostream>
using namespace std;

int factorialIter(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int factorial(int n)
{
	if (n == 1)
		return n;
	return n * factorial(n - 1);
}

long long fibIter(int n)
{
	long long a = 1;
	long long b = 1;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (int i = 2; i < n; i++)
	{
		long long newB = a + b;
		a = b;
		b = newB;
	}
	return b;
}

long long fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return(fib(n - 1) + fib(n - 2));
}

long long fibMemo(int n, long long* arr)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (arr[n] != 0)
	{
		return arr[n];
	}
	long long fibonachiNum;
	fibonachiNum = fibMemo(n - 1, arr) + fibMemo(n - 2, arr);
	arr[n] = fibonachiNum; // Saves the found n-number in the array
	return fibonachiNum;

}


int power(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n * power(n, k - 1);
}


bool isElementInArray(double* arr, int len, double element)
{
	if (len == 0)
	{
		return false;
	}
	if (arr[0] == element)
	{
		return true;
	}
	return isElementInArray(arr + 1, len - 1, element);
}

double min(double a, double b)
{
	if (a >= b)
	{
		return b;
	}
	return a;
}

double minRec(double* arr, int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	return min(arr[n - 1], minRec(arr, n - 1));
}

bool isAscending(int* arr, int len)
{
	if (len == 1)
	{
		return true;
	}

	return arr[len - 2] <= arr[len - 1] && isAscending(arr, len - 1);
}


int sum(int n, int* arr, int start)
{
	if (start == n - 1)
	{
		return arr[start];
	}
	return arr[start] + sum(n, arr, start + 1);
}

int sumV2(int n, int* arr)
{
	if (n == 1)
	{
		return arr[0];
	}
	return arr[0] + sumV2(n - 1, arr + 1);
}

int sumInInterval(int a, int b)
{

	if (a == b)
	{
		return b;
	}
	else return a + (sumInInterval(a + 1, b));
}
bool binarySearch(int* arr, int len, int start, int end, int x)
{
	int mid = (start + end) / 2;
	if (arr[mid] == x)
		return true;
	if (start > end)
		return false;

	if (arr[mid] > x)
		return binarySearch(arr, len, start, mid - 1, x);
	else
		return binarySearch(arr, len, mid + 1, end, x);

}
int main()
{
	long long arr[100] = { 0 };
	cout << fib(40);
	int array[8] = { 1, 2, 3, 4, 5, 6, 7 ,8 };
	cout << binarySearch(array, 8, 0, 7, 9) << endl;
	cout << sumInInterval(3, 6);
	/*cout << sumV2(5, array)<<endl;
	cout << sum(5, array, 0)<<endl;
	cout << power(5, 3)<<endl;
	cout << factorial(6);*/
	/*cout << fibIter(20)<<endl;
	cout << fib(9);*/
	/*double arr[5] = { 2.0,3.0,4.0 };
	cout << isElementInArray(arr,3, 4) << endl;
	cout << minRec(arr, 3) << endl;
	cout << isAscending(array, 5);*/
	return 0;
}
