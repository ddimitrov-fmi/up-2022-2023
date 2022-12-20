#include<iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 1000;

void shiftToLeft(char* str, int position)
{
	for (int i = position; str[i] != '\0'; i++)
	{
		str[i] = str[i + 1];
	}
}

char toUpper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 'a' + 'A';
	}
	return ch;
}

void findBracket(char* str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '[')
		{
			shiftToLeft(str, index);
			while (str[index] != ']' && str[index] != '\0')
			{
				str[index] = toUpper(str[index]);
				index++;
			}
			if (str[index] == ']')
			{
				shiftToLeft(str, index);
				--index;
			}
		}
		index++;
	}
}

int main()
{
	char arr[MAX_SIZE];
	cin.getline(arr, MAX_SIZE);

	findBracket(arr);
	cout << arr;

	return 0;
}