#include<iostream>
using namespace std;

int main(){
	const int MAX_ROW = 128;
	const int MAX_COL = 128;
	int matrix[MAX_ROW][MAX_COL];
	int row, col;
	int sumRow = 0, sumCol = 0, sumDiag = 0, sumUnderDiag = 0, sumOverDiag = 0, sumSecDiag = 0, sumUnderSecDiag = 0, sumOverSecDiag = 0;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
		}
	}
	
	//Every Row
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			sumRow += matrix[i][j];
		}
		cout << "Sum of row[ " << i << "] = " << sumRow << endl;
		sumRow = 0;
	}
	
	cout << endl;
	
	//Every Col
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			sumCol += matrix[j][i];
		}
		cout << "Sum of col[ " << i << "] = " << sumCol << endl;
		sumCol = 0;
	}
	
	//Primary diagonal
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(i == j){
				sumDiag += matrix[i][j];
			}
			//Sum under main diagonal
			if(i > j){
				sumUnderDiag += matrix[i][j];
			}
			//Sum over main diagonal
			if(i < j){
				sumOverDiag += matrix[i][j];
			}
			//Sum of seconadary diagonal
			if((i + j) == (row - 1)){
				sumSecDiag += matrix[i][j];
			}
			if((i + j) > (row - 1)){
				sumUnderSecDiag += matrix[i][j];
			}
			if((i + j) < (row - 1)){
				sumOverSecDiag += matrix[i][j];
			}
		}
	}
	cout << "Sum of main diagonal: " << sumDiag << endl;
	cout << "Sum under main diagonal: " << sumUnderDiag << endl;
	cout << "Sum over main diagonal: " << sumOverDiag << endl;
	cout << "Sum of secondary diagonal: " << sumSecDiag << endl;
	cout << "Sum under secondary diagonal: " << sumUnderSecDiag << endl;
	cout << "Sum over secondary diagonal: " << sumOverSecDiag << endl;


	return 0;
}
