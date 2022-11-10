#include<iostream>
using namespace std;

//Solution made by Martin Martinov :)

int main(){
	int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1) {
                cout << '*';
            }
            else if (j == i || j == n - 1 - i)
            {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
	
	
	return 0;
}

//Nice solution !
