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
		}
	}
	
	int maxEl = matrix[0][0];
	int minEl = matrix[0][0];
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(maxEl <= matrix[i][j]){
				maxEl = matrix[i][j];
			}
			if(minEl > matrix[i][j]){
				minEl = matrix[i][j];
			}
		}
	}
	
	cout << "Max: " << maxEl << endl;
	cout << "Min: " << minEl << endl;

	return 0;
}
