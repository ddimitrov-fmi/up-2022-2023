#include <iostream>
using namespace std;

int main () {
	
	int a, b;
	// a*x + b == 0
	
	cin >> a >> b;
	
	if (a == 0) {
		if (b == 0) {
			cout << "INF" << endl;
		} else {
			cout << "No solution" << endl;
		}
	} else {
		cout << -b/a << endl;
	}
	return 0;
}
