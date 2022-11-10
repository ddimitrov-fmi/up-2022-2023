#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, counter = 0;
	char sym;
	
	cin >> n >> sym;
	
	char arr[MAX_SIZE];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		if(sym == arr[i]){
			counter++;
			arr[i] = '*';
		}
	}
	
	cout << "I have found " << sym << " " << counter << " times." << endl;
	cout << "Changed Array: " << endl;
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
