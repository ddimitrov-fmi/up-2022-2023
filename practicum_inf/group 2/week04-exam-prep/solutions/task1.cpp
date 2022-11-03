#include<iostream>
using namespace std;


int main(){
	int firstTime, secondTime;
	cin >> firstTime >> secondTime;
	
	int firstTimeMinutes = firstTime % 100;
	int firstTimeHours = firstTime / 100;
	
	int secondTimeMinutes = secondTime % 100;
	int secondTimeHours = secondTime / 100;
	
	if(0 <= firstTimeHours && firstTimeHours <= 23 && 0 <= firstTimeMinutes && firstTimeMinutes <= 59 &&
	   0 <= secondTimeHours && secondTimeHours <= 23 && 0 <= secondTimeMinutes && secondTimeMinutes <= 59) {
		// Time is valid
		firstTimeMinutes += firstTimeHours * 60;
		secondTimeMinutes += secondTimeHours * 60;
		
		if(secondTimeMinutes < firstTimeMinutes) {
			secondTimeMinutes += 24 * 60;
		}
		
		int difference = secondTimeMinutes - firstTimeMinutes;
		
		int differenceHours = difference / 60;
		int differenceMinutes = difference % 60;
		
		if(differenceHours < 10) {
			cout << 0;
		}
		cout << differenceHours;
		
		if(differenceMinutes < 10) {
			cout << 0;
		}
		
		cout << differenceMinutes;
		
	} else {
		cout << "Invalid" << endl;
	}	

	

	return 0;
}
