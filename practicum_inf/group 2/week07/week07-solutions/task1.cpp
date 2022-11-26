#include<iostream>
using namespace std;

void swap(int *num1, int *num2){
	
    *num1 = *num1 * *num2;
    *num2 = *num1 / *num2;
    *num1 = *num1 / *num2;
    
}


void reverse(int arr[], int size) {
	
    int *ptr1 = arr,
    *ptr2 = arr + size - 1;
    
    while (ptr1 < ptr2) {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }

}

int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	reverse(arr,10);
	
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
