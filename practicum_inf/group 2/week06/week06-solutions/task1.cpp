#include<iostream>
using namespace std;

int main(){
	const int MAX_ROW = 128;
	const int MAX_COL = 128;
	int matrix[MAX_ROW][MAX_COL];
	
	int row, col, sumRow = 0;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			sumRow += matrix[i][j];
		}
		cout << sumRow << endl;
		sumRow = 0;
	}
	
	
	return 0;
}
