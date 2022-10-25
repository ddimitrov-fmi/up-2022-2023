#include <iostream>

int main()
{
	/// Task 3

	char c = 0;
	std::cout << "Please enter a character." << std::endl;
	std::cin >> c;

	bool charIsLetter = c >= '0' && c <= '9';
	bool charIsCapitalLetter = c >= 'a' && c <= 'z';
	bool charIsNumber = c >= 'A' && c <= 'Z';

	if (charIsLetter)
	{
		std::cout << "Your character is a letter." << std::endl;
	}
	else if(charIsCapitalLetter)
	{
		std::cout << "Your character is a capital letter." << std::endl;
	}
	else if (charIsNumber)
	{
		std::cout << "Your character is a number." << std::endl;
	}
	else
	{
		std::cout << "Your character is some special symbol." << std::endl;
	}

	return 0;

}