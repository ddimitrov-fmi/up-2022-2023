#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1;
	cin >> num2;
	
	cout << boolalpha << (num1 % num2 == 0) <<endl;
	
	return 0;
}
