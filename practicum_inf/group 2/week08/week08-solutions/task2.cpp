#include<iostream>
using namespace std;

int* resizeArr(int oldArr[], int oldSize, int newSize){
	int* newArr = new int[newSize];
	
	for(int i = 0; i < oldSize; i++){
		newArr[i] = oldArr[i];
	}
	
	return newArr;
}

int main(){
	int arr[3] = {1,2,3};
	
	int* newArr = resizeArr(arr,3,4);
	
	delete newArr;
	
	return 0;
}
