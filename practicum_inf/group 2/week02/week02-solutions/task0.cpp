#include<iostream>
using namespace std;

int main(){
	int number1, number2;
	char choice;
	
	cout << "\nPlease, enter first number1: ";
	cin >> number1;
	
	cout << "\nPlease, enter second number2: ";
	cin >> number2;
	
	cout << "\nPlease, choose [+, -, *, /]: ";
	cin >> choice;
	
	switch(choice){
		
		case '+': cout << number1 << " + " << number2 << " = " << number1 + number2;
			break;
			
		case '-': cout << number1 << " - " << number2 << " = " << number1 - number2;
			break;
			
		case '*': cout << number1 << " * " << number2 << " = " << number1 * number2;
			break;
			
		case '/': if(num2 != 0){
				  cout << number1 << " / " << number2 << " = " << number1 / number2;
			break;
		}else{
				  cout << "You can't divide by 0!" << endl;
			break;
		}
		
		default: cout << "There is no such action!";
	}
		
	return 0;
}
