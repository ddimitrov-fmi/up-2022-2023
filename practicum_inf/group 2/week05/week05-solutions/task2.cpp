#include<iostream>
using namespace std;

const int MAX_ROWS = 128;
const int MAX_COLS = 128;

void tripleTypeMatrix(int rows, int cols){
	
	int matrix[MAX_ROWS][MAX_COLS] = {0};
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if( i == j){
				matrix[i][j] = i;
			}
			if(j > i){
				matrix[i][j] = j - i;
			}
			if(j < i){
				matrix[i][j] = i * j;
			}
		}
	}
	
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
}

int main(){
	
	tripleTypeMatrix(3,3);
	
	
	return 0;
}
