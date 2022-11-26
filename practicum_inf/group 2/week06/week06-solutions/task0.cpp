#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, num, counter = 0, arr[MAX_SIZE], positions[MAX_SIZE];
	bool flag = false;
	int posIndex = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		if(num == arr[i]){
			flag = true;
			counter++;
			
			positions[posIndex] = i;
			posIndex++;
		}
	}
	
	if(flag){
		cout << "The number is in the array " << counter << "times." << endl;
		cout << "The indexes are: " << endl;
		for(int i = 0; i < posIndex; i++){
			cout << positions[i] << " , ";
		}
		cout << endl;
	}
	else{
		cout << "There is no such number!" << endl;
	}
	
	
	return 0;
}
