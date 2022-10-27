#include <iostream>

int main()
{
	/// Task 1
	// Декларира една константа за да е по-удобно, ако искаме да променим тази възраст в по-голяма и дълга програма. Тук не е особнено нужно.
	// Един начин да се именуват константите в програмата е с ALL_CAPS и долни черти между думите. Така си вижда че се константи а не обикновенни променливи.
	const int LEGAL_DRINKING_AGE = 18;
	int age = 0;
	std::cout << "Welcome to our bar, please enter your age." << std::endl;
	std::cin >> age;

	// Записваме стойноста на булевият израз в променлива и с името и изясняваме какво проверяваме, за някой който чете кода ни.
	// Също така тук името на констата е полезно, вижда се вижда доста добре проверката какво прави.
	bool isOfAge = age >= LEGAL_DRINKING_AGE;

	//Тук позлваме тернарния оператор(ternary conditional operator) изразът в скобите придобива стойността пред : (т.е. "You can buy a beer"), ако isOfAge e true 
	// и стойността след : (т.е. "Im sorry, but we don't sell achohol to minors."), ако isOfAge e false.
	std::cout << (isOfAge ? "You can buy a beer" : "Im sorry, but we don't sell achohol to minors.");
	return 0;

}