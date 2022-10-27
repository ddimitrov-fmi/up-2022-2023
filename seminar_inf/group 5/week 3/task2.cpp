#include <iostream>

int main()
{
	/// Task 2

	int number = 0;
	std::cout << "Please enter a four digit number." << std::endl;
	std::cin >> number;
	if (number >= 1000 && number <= 9999)
	{
		int firstDigit = 0, secondDigit = 0, thirdDigit = 0, fourthDigit = 0;
		fourthDigit = number % 10;
		thirdDigit = (number / 10) % 10; // с този подход не променяме стойноста на number, също е валидно: = (number % 100) / 10
		secondDigit = (number / 100) % 10;
		firstDigit = number/ 1000;

		bool isPalindrome = (firstDigit == fourthDigit) && (secondDigit == thirdDigit); // едно число е палиндром ако първата и последната цифра са еднавки, както и втората и третата
	
		//долния пример също е валиден, там позлваме цифрите за да получим number обърнато, и после проверяваме дали е същото като number в правилната посока. На мен горната проверка ми се струва по-проста.
		//bool isPalindrome = number == (fourthDigit * 1000 + thirdDigit * 100 + secondDigit * 10 + firstDigit);

		std::cout << (isPalindrome ? "The number is a palindrome" : "The number isn't a palindrome") << std::endl;
	}
	else
	{
		std::cout << "Invalid input!" << std::endl;
	}

	return 0;

}