#include <iostream>
#include <cstring>

std::size_t strlen_safe(const char str[], int sizeInBytes)
{
	std::size_t length = 0;

	std::size_t i;
	for (i = 0; str[i] != '\0' && i < sizeInBytes; i++)
	{
		length++;
	}

	if (i == sizeInBytes)
	{
		std::cout << "No NULL terminated string!" << std::endl;
	}

	return length;
}

int main()
{
	char str[3] = "He";
	str[2] = '!';
	std::cout << str << "\n";
	std::cout << strlen_safe(str, sizeof(str)) << "\n";

	return 0;
}