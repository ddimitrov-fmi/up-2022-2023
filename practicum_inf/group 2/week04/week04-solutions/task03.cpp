#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, max, min, maxIndex = 0, minIndex = 0;
	
	cin >> n;
	
	int arr[MAX_SIZE];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	max = arr[0];
	min = arr[0];
	
	for(int i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
			maxIndex = i;
		}
		if(min > arr[i]){
			min = arr[i];
			minIndex = i;
		}
	}
	
	arr[minIndex] = max;
	arr[maxIndex] = min;
	
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	
	
	cout << "max: " << max <<endl;
	cout << "min: " << min <<endl;
	
	return 0;
}
