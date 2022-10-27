#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	
	cin >> num1 >> num2 >> num3;
	
	cout << max(max(num1, num2), num3) <<" "<< min(min(num1, num2), num3);
	
	
	return 0;
}
