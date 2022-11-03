#include<iostream>
using namespace std;


int main(){
	int num;
	bool flag;
	
	cin >> num;
	
	while(num > 0){
		if(num % 10 == 1){
			flag = true;
			break;
		}else{
			flag = false;
		}
		
		
		num /= 10;
	}
	
	if(flag){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	
	return 0;
}
