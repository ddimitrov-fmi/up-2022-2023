#include<iostream>
using namespace std;

int* copyArr(int arr[], int size){
	int* newArr = new int[size];
	
	
	for(int i = 0; i < size; i++){
		newArr[i] = arr[i];
	}
	
	
	return newArr;
}

int main(){
	int arr[5] = {1,2,3,4,5};
	
	int* newCopy = copyArr(arr,5);
	
	delete newCopy;
	
	return 0;
}
