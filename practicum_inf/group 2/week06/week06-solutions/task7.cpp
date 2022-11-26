#include<iostream>
using namespace std;


int main(){
	int arr[128], n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
		for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
