#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//task 1
	/*
	cout << "Hello, I`m Alex!";
	*/

	//task 2 
	/*
	double BGN, EUR;
	cin >> BGN;
	EUR = BGN * 0.511292;
	cout << EUR;
	*/

	//task 3
	/*
	double height, width, length,volume;
	cin >> length >> width >> height;
	volume = length * width * height;
	cout << volume;
	*/

	//task 4
	/*int lengthOfSideOne = 8;
	int lengthOfSideTwo = 11;
	int lengthOfSideThree = 17;
	bool isTriangle = lengthOfSideOne + lengthOfSideTwo > lengthOfSideThree;
	if(isTriangle)
	{
		int perimeter = lengthOfSideOne + lengthOfSideTwo + lengthOfSideThree;
		double s = perimeter / 2;
		double area = sqrt(s * (s - lengthOfSideOne) * (s - lengthOfSideTwo) * (s - lengthOfSideThree));
		cout << "Perimeter = " <<perimeter<<" Area ="<< fixed<< setprecision(1)<<area<<endl;
	}
	else
	{
		cout << "Triangle with such sides does not exist!"<<endl;
	}*/

	//task 5
	/*
	double startMoney;
	int interest, period;
	cin >> startMoney >> interest >> period;
	double endMoney = startMoney +(startMoney * (double)interest/100 *(double) period / 12);
	cout << endMoney;
	*/

	//task 6
	/*
	int number;
	cin >> number;
	cout << number % 10;
	number = number / 10;
	cout << number % 10;
	number = number / 10;
	cout << number % 10;
	number = number / 10;
	cout << number % 10;
	number = number / 10;
	return 0;
	*/

	//task 7

	/*int turtleFood, catFood;
	cin >> turtleFood >> catFood;
	cout << turtleFood * 2.5 + catFood * 4 << " lv. " << endl;*/
	// task 8

	/*double side;
	cin >> side;
	double volume = pow(side, 3) + pow(side, 3) + 2 * (side * side / 2 * side * 3 / 4);
	cout << volume << endl;*/
	// task 9

	/* int a, b;
	 cin >> a >> b;
	 cout <<boolalpha<< !(a ^ b);*/

	return 0;
}
