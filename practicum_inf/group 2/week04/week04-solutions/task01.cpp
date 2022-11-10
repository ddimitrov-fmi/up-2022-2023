#include<iostream>
using namespace std;


int main(){
	int a, b, mul = 1;
	
	cin >> a >> b;
	
	while(a <= b){
		mul *= a;
		a++;
	}
	
	cout << mul;
	
	return 0;
}
