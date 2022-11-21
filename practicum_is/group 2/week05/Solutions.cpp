#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//task 1
	/*
	int arr[32];
	int size, min, max, scndMin, scndMax;
	min = scndMin = INT_MAX; //equivalent to min = INT_MAX; scndMin = INT_MAX;
	max = scndMax = INT_MIN;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			scndMin = min;
			min = arr[i];
		}
		if (scndMin > arr[i] && arr[i] > min)
		{
			scndMin = arr[i];
		}
		if (max < arr[i])
		{
			scndMax = max;
			max = arr[i];
		}
		if (scndMax < arr[i] && arr[i] < max)
		{
			scndMax = arr[i];
		}
	}
	cout << "MAX = " << max << "\nMIN = " << min << "\nSecond Max = " << scndMax << "\nSecond Min = " << scndMin << endl;
	*/
	
	
	//task 2
	/*
	int arr[32];
	int size;
	bool allUnique = true;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				allUnique = false;
				break;
			}
		}
		if (!allUnique)
			break;
	}
	cout << boolalpha << allUnique << endl;
	*/


	//task 3
	/*
	const int CAPACITY = 32;
	int size, number, counter = 0;
	cin >> size;
	int arrNumbers[CAPACITY], arrIndexes[CAPACITY];
	for (int i = 0; i < size; i++)
	{
		cin >> arrNumbers[i];
	}
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arrNumbers[i] == number)
		{
			arrIndexes[counter++] = i;
		}
	}
	if (counter != 0)
		cout << number << " is present " << counter << " times in the array at postion ";
	else
		cout << number << " is present 0 times in the array";
	for (int i = 0; i < counter; i++)
	{
		cout << arrIndexes[i] << ' ';
	}
	*/


	//task 4
	/*
	int arr[32];
	int size, sum = 0, avgIndex;
	double avg, difference, minDifference;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	avg = (double)sum / (double)size;
	minDifference = avg - (double)arr[0];
	avgIndex = 0;
	for (int i = 1; i < size; i++)
	{
		difference = fabs(avg - arr[i]);
		if (difference < minDifference)
		{
			minDifference = difference;
			avgIndex = i;
		}
		else if (difference == minDifference && arr[i] < arr[avgIndex])
		{
			avgIndex = i;
		}
	}
	cout << arr[avgIndex] << endl;
	*/


	//task 5
	/*
	int arr[32];
	int size;
	bool isMirror = true;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[(size - 1) - i])
		{
			isMirror = false;
			break;
		}
	}
	cout << boolalpha << isMirror << endl;
	*/

	
	//task 6
	/*
	int arr[32];
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[(size - 1) - i] << ' ';
	}
	*/

	
	//task 7
	/*
	int arr[32];
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	//Bubble sort
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	*/


	//task 8
	/*
	int arr[32][32];
	int size, sumMain = 0, sumSecond = 0;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < size; i++)
	{
		sumMain += arr[i][i];
		sumSecond += arr[(size - 1) - i][i];
	}
	cout << "Main diagonal sum is " << sumMain << "\nSecond diagonal sum is " << sumSecond << endl;
	*/


	//task 9
	/*
	int arr[32][32];
	int rows, cols;
	cin >> rows;
	cin >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
	double sum = 0, maxSum;
	int maxIndex;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum += arr[j][i];
		}
		if (i == 0)
		{
			maxSum = sum;
			maxIndex = 0;
		}
		else if (maxSum < sum)
		{
			maxSum = sum;
			maxIndex = i;
		}
		
		sum = 0;
	}
	cout << maxIndex << endl;
	*/
}