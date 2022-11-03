#include<iostream>
using namespace std;


int main(){
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		if(i == 1){
			continue;
		}
		if(i == 2){
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	
	cout<<nextTerm;
	
	cout<<(1,2,3,4,5);
	
	return 0;
}
