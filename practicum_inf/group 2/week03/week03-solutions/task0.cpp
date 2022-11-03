#include<iostream>
using namespace std;

int main(){
	int n, result = 1;
	
	cin >> n;
	
	while(n > 0){
		result *= n;
		n--;
	}
	
	cout << "Result: " << result;
	
	return 0;
}
