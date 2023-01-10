#include <iostream>

size_t getLength(char* text)
{
	int i = 0;

	while (text[i] != '\0')
	{
		i++;
	}

	return i;
}

char* removeVowel(char* text, size_t size)
{
	char* newText = new char[size + 1];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		char currentSymbol = text[i];

		if (text[i] >= 65 && text[i] <= 90)
		{
			currentSymbol = text[i] + ('a' - 'A');
		}

		if (currentSymbol != 'a' && currentSymbol != 'e' && currentSymbol != 'o' && currentSymbol != 'u' && currentSymbol != 'i'
			&& currentSymbol != 'y' && currentSymbol != 'w')
		{
			newText[j] = text[i];
			j++;
		}
	}

	newText[j] = '\0';
	return newText;
}


int main()
{
	char text[64];
	std::cin.getline(text, 64);

	char* newText = removeVowel(text, getLength(text));

	std::cout << newText;

	delete[] newText;
	return 0;
}