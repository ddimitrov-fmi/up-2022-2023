#include<iostream>
using namespace std;


int main(){
	int n, input, maxNegative = INT_MIN;
	
	cin >> n;
	
	while(n > 0){
		
		cin >> input;
		
		if(input < 0 && input > maxNegative){
			maxNegative = input;
		}
		n--;
	}
	
	cout << "max negative number: " << maxNegative;
	
	
	return 0;
}
