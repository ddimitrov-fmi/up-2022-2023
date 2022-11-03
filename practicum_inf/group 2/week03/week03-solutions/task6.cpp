#include<iostream>
using namespace std;


int main(){
	int a, n, result = 1;
	
	cin >> a >> n;
	
	while(n > 0){
		result *= a;
		n--;
	}
	
	cout << "result: " << result;
	
	return 0;
}
