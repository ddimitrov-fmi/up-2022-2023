#include <iostream>
using namespace std;
int main() {
    int n, counter = 0;
    bool exitLoop = false;
    
    cin >> n;

    for(int i = 1; ; i++) {
    	for(int j = 0; j < i; j++) {
            cout << i << " ";
            counter++;

            if(counter == n) {
                exitLoop = true;
                break;
            }
        }
        if(exitLoop) {
            break;
        }
	}
	
}
