#include<iostream>
using namespace std;


int* halfSize(const int *arr, int size)
{
 	int newSize = size / 2;
 	int *newArr = new int[newSize];
 	
 	for(int i = 0; i < newSize; i++){
 		newArr[i] = arr[i];
	 }
 	
 	return newArr;
} 



int main(){
	int arr[4] = {1,2,3,4};
	
	int* newArr = halfSize(arr,4);
	
	delete newArr;
	
	return 0;
}
