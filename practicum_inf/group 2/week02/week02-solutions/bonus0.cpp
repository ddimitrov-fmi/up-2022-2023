#include <iostream>
using namespace std;

int main() {
	int tomatoes, peppers, carrots, olives, potatoes, sauses;
	bool hasFriend;
	
	bool studentSalad = tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && sauses >= 150;

	bool studentSoup = tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && sauses >= 200;
	
	bool studentGuvech = tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && sauses >= 300;

	bool isGoingToBeFed = studentSalad || ((studentSoup || studentGuvech) && hasFriend);
}
