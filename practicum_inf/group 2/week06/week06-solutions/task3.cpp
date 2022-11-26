#include<iostream>
using namespace std;

int main(){
	const int MAX_ROW = 128;
	const int MAX_COL = 128;
	int matrix[MAX_ROW][MAX_COL];
	int row, col;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
			matrix[i][j] += 10;
		}
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}
