#include<iostream>
using namespace std;

int main(){
	int n, sum = 0;
	
	do{
		cin >> n;
		sum += n;
	}while(n != 0);
	
	cout << "The sum is: " << sum;
	
	return 0;
}
