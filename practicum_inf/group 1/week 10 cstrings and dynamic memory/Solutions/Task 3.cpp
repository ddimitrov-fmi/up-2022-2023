#include<iostream>
using std::cin;
using std::cout;
using std::endl;

char toUpper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 'a' + 'A';
	}
	return ch;
}

void shiftToTheLeft(char* str, int position)
{
	for (int i = position; str[i] != '\0'; i++)
	{
		str[i] = str[i + 1];
	}
}

bool isDigit(char ch)
{
	return ch >= '1' && ch <= '9';
}

void digitsUpper(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (isDigit(str[i]))
		{
			int count = str[i] - '1'+1;
			shiftToTheLeft(str, i);
			for (int j = 0; j < count && str[i]!='\0' && !isDigit(str[i]); j++)
			{
				str[i] = toUpper(str[i]);
				i++;
			}
		}
		else 
		{
			i++;
		}
		}
}

int main()
{
	char arr[100];
	cin >> arr;
	digitsUpper(arr);
	cout << arr;
	return 0;
}