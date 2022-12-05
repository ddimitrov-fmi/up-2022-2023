#include <iostream>

int stringLength(char text[])
{
	int length = 0;

	while (text[length] != '\0')
	{
		length++;
	}

	return length;
}

void stringCopy(char destination[], char textToCopy[])
{
	int i = 0;

	while (textToCopy[i] != '\0')
	{
		destination[i] = textToCopy[i];
		i++;
	}
}

void dynamicStringCopy(char*& text, char* textCopy)
{
	delete[] text;
	int length = stringLength(textCopy);
	text = new char[length + 1];

	stringCopy(text, textCopy);
	text[length] = '\0';
}

int main()
{
	char text[32];
	std::cin.getline(text, 32);

	int length = stringLength(text);
	std::cout << length;

	//dynamic array of chars
	char* str1 = new char[32];
	std::cin.getline(str1, 32);
	char* strToCopy = new char[32];
	std::cin.getline(strToCopy, 32);

	//notå that we pass str1 by reference,
	//otherwise after deletion the memory behind str1, allocating new memory via text(the pointer in the funciton)
	//and copying strings, the changes won't be reflected in the main.
	dynamicStringCopy(str1, strToCopy);

	std::cout << str1 << std::endl << strToCopy;

	delete[] str1;
	delete[] strToCopy;
	return 0;
}