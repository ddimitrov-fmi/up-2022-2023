#include <iostream>
using std::cout;
using std::endl;

void print(const int* array, const int length) {
    for (size_t i = 0; i < length; i++)
    {
        cout << array[i];
    }
    cout << endl;
}

void printBooleanVectorsRec(int n, int* vector, int length) {
	if (n == 0) {
		print(vector, length);
		return;
	}

	vector[n - 1] = 0;
	printBooleanVectorsRec(n - 1, vector, length);
	vector[n - 1] = 1;
	printBooleanVectorsRec(n - 1, vector, length);
}

void printBooleanVectors(int n) {
	int* vector = new (std::nothrow) int[n];

    if (!vector) {
        std::cerr << "Couldn't allocate memory!";
        return;
    }

	printBooleanVectorsRec(n, vector, n);
	delete[] vector;
}

int main()
{
    int n = 3;
    printBooleanVectors(n);
}