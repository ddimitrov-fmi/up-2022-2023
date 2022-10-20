#include <iostream>
using namespace std;

int main()
{
	int temp, a = 2, b = 3;
	
	//First way
	temp = a;
	a = b;
	b = temp;
	
	cout << "First way: " << endl;
	cout << "a = " << a<<endl;
	cout << "b = " << b<<endl;
	
	/*Second way
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "a = " << a<<endl;
	cout << "b = " << b<<endl;
	*/
	
	return 0;
}
