#include<iostream>
using namespace std;


int main(){
	
	int n;
	bool flag = true;
	
	cin >> n;
	
	if(n <= 1){
		flag = false;
	}
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			flag = false;
		}
	}
	
	std::cout<<boolalpha<<flag;
	
	return 0;
}
