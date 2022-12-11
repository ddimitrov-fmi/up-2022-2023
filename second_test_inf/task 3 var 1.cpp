#include <iostream>

void printMatrix(const int matrix[][256], size_t rows, size_t columns)
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

void swapRows(int matrix[][256], size_t columns, size_t row1, size_t row2)
{
	for (size_t i = 0; i < columns; i++)
	{
		swap(matrix[row1][i], matrix[row2][i]);
	}
}

int getProductOfRow(const int matrix[][256], size_t columns, size_t rowIndex)
{
	int product = 1;
	for (size_t i = 0; i < columns; i++)
	{
		product *= matrix[rowIndex][i];
	}

	return product;
}

int main()
{
	//insert rows and columns
	int rows, columns;
	std::cout << "Insert rows number: ";
	do
	{
		std::cin >> rows;
	} while (rows < 0 || 256 < rows);

	std::cout << "Insert columns number: ";
	do
	{
		std::cin >> columns;
	} while (columns < 0 || 256 < columns);

	//insert matrix
	int matrix[256][256];
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

    int products[256];
    for (size_t i = 0; i < rows; i++)
    {
        products[i] = getProductOfRow(matrix, columns, i);
    }

    //bubble sort the rows in the matrix
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t i = 0; i < rows - 1; i++)
		{
			if (products[i] > products[i + 1])
			{
				swapRows(matrix, columns, i, i + 1);
                swap(products[i], products[i + 1]);
			}
		}
	}
    
    
    //----------------------SECOND WAY-----------------------------

    // !!! This works only because the array is statically allocated and it is not N x M, but actually 256 x 256
    // !!! It wouldn't work if the array had 256 rows and 256 columns =>
    //          => we can either use the other solution or make the array 257 x 257

    // //add the product as (columns + 1)th element of each row to be able to sort just by its value
    // for (size_t i = 0; i < rows; i++)
    // {
	//     matrix[i][columns] = getProductOfRow(matrix, columns, i);
    // }
    
	// //bubble sort the rows in the matrix
	// for (size_t i = 0; i < rows; i++)
	// {
	// 	for (size_t i = 0; i < rows - 1; i++)
	// 	{
	// 		if (matrix[i][columns] > matrix[i + 1][columns])
	// 		{
	// 			//columns + 1, because we want to swap also the products of the rows to keep sorting by them
	// 			swapRows(matrix, columns + 1, i, i + 1);
	// 		}
	// 	}
	// }

	printMatrix(matrix, rows, columns);

    return 0;
}