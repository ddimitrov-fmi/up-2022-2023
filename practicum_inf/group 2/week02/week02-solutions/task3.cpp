#include<iostream>
using namespace std;

int main(){
	int month;
	
	cin >> month;
	
	switch(month){
		case 12:
		case 1:
		case 2: cout << "The season is winter!";
		break;
		
		case 3:
		case 4:
		case 5: cout << "The season is spring!";
		break;
		
		case 6:
		case 7:
		case 8: cout << "The season is summer!";
		break;
		
		case 9:
		case 10:
		case 11: cout << "The season is autumn!";
		break;
		
		default: cout << "There is no such season!";
		break;
	}
	
	
	return 0;
}
