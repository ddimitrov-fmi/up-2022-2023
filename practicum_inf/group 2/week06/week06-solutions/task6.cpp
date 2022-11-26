#include<iostream>
using namespace std;


int main(){
	const int MAX_ROW = 128;
	const int MAX_COL = 128;
	int x, matrix[MAX_ROW][MAX_COL], indexR, indexC;
	bool flag = false;
	
	cin >> x;
	
	for(int i = 0; i < MAX_ROW; i++){
		for(int j = 0; j < MAX_COL; j++){
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < MAX_ROW; i++){
		for(int j = 0; j < MAX_COL; j++){
			if(x == matrix[i][j]){
				flag = true;
				indexR = i;
				indexC = j;
				
				matrix[i][j] *= 10;
			}
		}
	}
	
	if(flag){
		cout << "There is x = " << x<< " in the matrix on positon [ " << indexR << "][" << indexC << "]";
	}
	else{
		cout << "There is no such element in the matrix!";
	}
	
	return 0;
}
