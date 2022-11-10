#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, sum = 0;
	bool flag = false;

	cin >> n;
	
	int arr[MAX_SIZE];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		if(arr[i] >= 0){
			cout << "The first non negative is: " << arr[i] << endl;
			cout << "The sum after this number is: ";
			
				for(int j = i + 1; j < n; j++){
					sum += arr[j];
				}
			cout << sum << endl;
			flag = true;
			break;
		}else{
			flag = false;
		}
	}
	
	
	if(!flag){
		cout << "There is no such non negative number";
	}
	
	
	return 0;
}
