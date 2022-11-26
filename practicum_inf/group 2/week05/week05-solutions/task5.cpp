#include<iostream>
using namespace std;

bool isDescending(const int arr[]){
	
	for(int i = 0; i < 10; i++){
		if(arr[i] < arr[i + 1]){
			return false;
		}
	}
	
	
	return true;
}

int main(){
	
	int arr1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr2[10] = {10, 9,122, 7, 6, 5, 4, 3, 2, 1};
	
	cout << boolalpha << isDescending(arr1) << endl;
	cout << boolalpha << isDescending(arr2) << endl;
	
	
	return 0;
}
