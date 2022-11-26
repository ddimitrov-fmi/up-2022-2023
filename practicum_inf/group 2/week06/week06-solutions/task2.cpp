#include<iostream>
using namespace std;

int main(){
	const int MAX_ROW = 128;
	const int MAX_COL = 128;
	int matrix[MAX_ROW][MAX_COL];
	int row, col, sumDiag = 0;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(i == j){
				sumDiag += matrix[i][j];
			}
			if((i + j) == (row - 1)){
				sumDiag += matrix[i][j];
			}
		}
	}
	
	cout << "The sum of the two diagonals is: " << sumDiag << endl;
	
	
	return 0;
}
