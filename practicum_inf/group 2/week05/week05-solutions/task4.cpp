#include<iostream>
using namespace std;

void multiplyArrInt(int arr[], int num) {
    int count = 0;
    while (arr[count] != 0) {
        arr[count] *= num;
        count++;
    }
    
    for(int i = 0; i < count; i++){
    	cout << arr[i] << " ";
	}
	
	cout << endl;
}

void multiplyArrDouble(int arr[], double num) {
    int count = 0;
    while (arr[count] != 0) {
        arr[count] *= num;
        count++;
    }
    
    for(int i = 0; i < count; i++){
    	cout << arr[i] << " ";
	}
	
	cout << endl;
}

int main(){
	
	const int MAX_SIZE = 128;
	
	int arrI[MAX_SIZE] = {1 ,2 ,3, 4, 5, 6};
	double arrD[MAX_SIZE] = {2.3, 1.4, 65.3, 62.9};
	
	multiplyArrInt(arrI,2);
	multiplyArrDouble(arrD, 2);
	
	
	return 0;
}
