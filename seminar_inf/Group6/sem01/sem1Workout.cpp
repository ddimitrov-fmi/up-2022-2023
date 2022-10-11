#include <iostream>

int main()
{
	//Example1

	int num = 5;
	num++;//5
	std::cout << num << std::endl;//num = 6
	std::cout << ++num << std::endl;// num = 7

	//Example2

	int firstNumber = 6;
	int secondNumber = 10;
	bool isBigger = firstNumber < secondNumber;

	std::cout << std::boolalpha << isBigger;

	bool canBeDivided = (firstNumber % secondNumber == 0);

	std::cout << std::boolalpha << (isBigger && canBeDivided) << std::endl;

	//Example3

	int number = 1234;
	int firstDigit = number % 10;//4
	int secondDigit = (number % 100) / 10;//3
	int thirdDigit = (number / 100) % 10;//2
	int fourthDigit = number / 1000;//1
	std::cout << firstDigit + secondDigit + thirdDigit + fourthDigit;

	return 0;
}