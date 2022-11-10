#include<iostream>
using namespace std;


int main(){
	const int MAX_SIZE = 128;
	int n, arr[MAX_SIZE];
	
	cin >> n;
	
	int flag = 0; 
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
 
    for (int i = 0; i <= n / 2 && n != 0; i++) { 
  
        if (arr[i] != arr[n - i - 1]) { 
            flag = 1; 
            break; 
        } 
    } 

    if (flag == 1) 
        cout << "Not Palindrome"; 
    else
        cout << "Palindrome"; 
	
	
	return 0;
}
