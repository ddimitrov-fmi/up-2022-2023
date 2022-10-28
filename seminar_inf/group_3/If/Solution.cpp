#include <iostream>
//#include <iomanip>

const double E = 0.0001;
const int Tplace = 10;
const int Splace = Tplace * 2;
const int Fplace = (Splace + Tplace) * 2;
const int TPLimitSq = 8 * 8;
const int SPLimitSq = 3 * 3;
const int FPLimitSq = 1;

int main()
{
	//double p = 0.2;
	//std::cout << std::fixed << std::setprecision(50) << p << std::endl;
	double pX = 0, pY = 0, oX = 0, oY = 0;
	{
		char readSym = '\0';
		std::cin >> readSym;
		if (readSym != '(') { std::cout << "Invalid input!\n"; return 0; } //std::cin.ignore(256, '\n'); f = true;
		std::cin >> oX >> readSym;
		if (readSym != ',') { std::cout << "Invalid input!\n"; return 0; }
		//readSym = std::cin.get();
		//if (readSym != ' ') { std::cout << "Invalid input!\n"; return 0; }
		std::cin >> oY >> readSym;
		if (readSym != ')') { std::cout << "Invalid input!\n"; return 0; }

		std::cin >> readSym;
		if (readSym != '(') { std::cout << "Invalid input!\n"; return 0; }
		std::cin >> pX >> readSym;
		if (readSym != ',') { std::cout << "Invalid input!\n"; return 0; }
		std::cin >> pY >> readSym;
		if (readSym != ')') { std::cout << "Invalid input!\n"; return 0; }
	}
	double resultX = oX + pX,
		resultY = oY + pY,
		squareDist = resultX * resultX + resultY * resultY,
		tolerans = 0;
	int points = 0;
	
	if (squareDist < FPLimitSq || ((tolerans = (squareDist - FPLimitSq)) < 0 ? -tolerans : tolerans) < E)
		points = Fplace;
	else if (squareDist < SPLimitSq || ((tolerans = (squareDist - SPLimitSq)) < 0 ? -tolerans : tolerans) < E)
		points = Splace;
	else if (squareDist < TPLimitSq || ((tolerans = (squareDist - TPLimitSq)) < 0 ? -tolerans : tolerans) < E)
		points = Tplace;

	std::cout << points;

	//if (f) std::cout<< "...";
	return 0;
}