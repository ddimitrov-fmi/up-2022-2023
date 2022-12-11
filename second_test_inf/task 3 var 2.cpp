#include <iostream>

void printMatrix(const int matrix[][128], size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

void swapColumns(int matrix[][128], size_t rows, size_t column1, size_t column2)
{
	for (size_t i = 0; i < rows; i++)
	{
		swap(matrix[i][column1], matrix[i][column2]);
	}
}

int getSumOfColumn(const int matrix[][128], size_t rows, size_t columnIndex)
{
	int sum = 0;
	for (size_t i = 0; i < rows; i++)
	{
		sum += matrix[i][columnIndex];
	}

	return sum;
}

int main()
{
	//insert rows and columns
	int rows, columns;
	std::cout << "Insert rows number: ";
	do
	{
		std::cin >> rows;
	} while (rows < 0 || 128 < rows);

	std::cout << "Insert columns number: ";
	do
	{
		std::cin >> columns;
	} while (columns < 0 || 128 < columns);

	//insert matrix
	int matrix[128][128];
	std::cout << "Insert matrix:\n";
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	
    // Either way for sorting works fine
    //----------------------FIRST WAY-----------------------------

    int sums[128];
    for (size_t i = 0; i < columns; i++)
    {
        sums[i] = getSumOfColumn(matrix, rows, i);
    }

    //bubble sort the columns in the matrix
	for (size_t i = 0; i < columns; i++)
	{
		for (size_t i = 0; i < columns - 1; i++)
		{
			if (sums[i] < sums[i + 1])
			{
				swapColumns(matrix, columns, i, i + 1);
                swap(sums[i], sums[i + 1]);
			}
		}
	}
    
    
    //----------------------SECOND WAY-----------------------------

    // !!! This works only because the array is statically allocated and it is not N x M, but actually 128 x 128
    // !!! It wouldn't work if the array had 128 rows and 128 columns =>
    //          => we can either use the other solution or make the array 129 x 129

    // //add the sum as (rows + 1)th element of each column to be able to sort just by its value
    // for (size_t i = 0; i < rows; i++)
    // {
	//     matrix[rows][i] = getSumOfColumn(matrix, rows, i);
    // }
    
	// //bubble sort the columns in the matrix
	// for (size_t i = 0; i < columns; i++)
	// {
	// 	for (size_t i = 0; i < columns - 1; i++)
	// 	{
	// 		if (matrix[rows][i] > matrix[rows][i + 1])
	// 		{
	// 			//rows + 1, because we want to swap also the sums of the columns to keep sorting by them
	// 			swapColumns(matrix, rows + 1, i, i + 1);
	// 		}
	// 	}
	// }

	printMatrix(matrix, rows, columns);

    return 0;
}