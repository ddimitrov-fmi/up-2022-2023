#include<iostream>
using namespace std;

void swap(int *x, int *y){
	
    *x = *x * *y;
    *y = *x / *y;
    *x = *x / *y;
    
}

int main(){
	int num1 = 2, num2 = 5;
	
	swap(num1, num2);
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	
	return 0;
}
