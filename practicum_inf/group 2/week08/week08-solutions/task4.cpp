#include<iostream>
#include<cmath>

char* fromIntToString(int num) {
	int sizeStr = floor(log10(num) + 1);

	char *str = new char[sizeStr + 1];

	for (int i= sizeStr-1; i >= 0; i--) {
		str[i] = num % 10 + '0';
		num /= 10;
	}

	str[sizeStr] = '\0';
	return str;
}

int main() {
	int num;

	do {
		std::cout << "\nVavedi num: ";
		std::cin >> num;
	} while (num < 0);

	char* stringNum = fromIntToString(num);

	std::cout << stringNum;

	delete stringNum;

	return 0;
}
