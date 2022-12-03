#include<iostream>
using namespace std;


int main()
{
	size_t teachersSize;
	cin >> teachersSize;

	// In every row there will be an array - space, where the teachers will put their marks.

	// Make space for teachersSize teachers
	double** marks = new double*[teachersSize];

	for (size_t i = 0; i < teachersSize; i++)
	{
		size_t marksSize;
		cin >> marksSize;

		// Make space for the i'th teacher to put marksSize marks
		marks[i] = new double[marksSize];

		for (size_t j = 0; j < marksSize; j++)
		{
			cin >> marks[i][j];
		}
	}

	return 0;
}
