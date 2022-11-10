#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, arr[MAX_SIZE];
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	cout << "Reversed array: " << endl;
	
	for(int i = n - 1; i >= 0; i--){
		cout << arr[i] << " ";
	}
	
	
	return 0;
}
