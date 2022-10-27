#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	cout << "first digit: " << num / 100 << endl;
	cout << "second digit: " << num / 10 % 10 << endl;
	cout << "third digit: " << num % 10 << endl;	
	cout << "sum: " << (num / 100) + (num / 10 % 10 ) + (num % 10) << endl;
	
	return 0;
}
