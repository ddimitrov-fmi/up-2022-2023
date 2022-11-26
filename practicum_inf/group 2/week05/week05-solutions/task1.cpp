#include<iostream>
using namespace std;

void Pow(double number, int power){
	
	double saver = number;
	
	for(int i = 1; i < power; i++){
		saver *= number;
	}
	
	cout << saver << endl;
}


double Min(double num1, double num2) {
	
    if (num1 >= num2) {
        return num2;
    }
    return num1;
}


double Max(double n1, double n2) {
	
    if (n1 >= n2) {
        return n1;
    }
    return n2;
} 


void minOf3 (double num1, double num2, double num3) {
	
    if (Min(num1, num2) >= Min(num2, num3)){
        cout << Min(num2, num3) << endl;
    }
    else{
        cout << Min(num1, num2) << endl;
    }
}

void maxOf3 (double num1, double num2, double num3) {
	
    if (Max(num1, num2) <= Max(num2, num3)) {
        cout << Max(num2, num3) << endl;
    }
    else {
        cout << Max(num1, num2) << endl;
    }
}


bool isAlpha (char symbol) {
	
    if ((symbol >= 'a') && (symbol <= 'z')) {
        return true;
    }
    
    return false;
}

bool isDigit (char symbol) {
	
    if ((symbol >= '0') && (symbol <= '9')) {
        return true;
    }
    
    return false;
}


int main(){
	Pow(2,3);
	
	cout << "Min: " << Min(3,2) << endl;
	cout << "Max: " << Max(12,33) << endl;
	
	minOf3(2,1,4);
	maxOf3(2,1,4);
	
	cout << isAlpha('A');
	cout << isDigit('1');
	
	
	return 0;
}
