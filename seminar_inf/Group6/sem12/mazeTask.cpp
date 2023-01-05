#include <iostream>

bool couldMoveDirection(char** maze, size_t rows, size_t cols, size_t currentRow, size_t currentCol)
{
	return (currentRow >= 0 && currentRow < rows)
		&& (currentCol >= 0 && currentCol < cols)
		&& (maze[currentRow][currentCol] != '1' && maze[currentRow][currentCol] != '#');
}

size_t getCountOFAllPaths(char** maze, size_t rows, size_t cols, size_t currentRow, size_t currentCol)
{
	if (maze[currentRow][currentCol] == '*')
	{
		return 1;
	}

	size_t count = 0;
	maze[currentRow][currentCol] = '-1';

	if (couldMoveDirection(maze, rows, cols, currentRow, currentCol + 1))
	{
		count += getCountOFAllPaths(maze, rows, cols, currentRow, currentCol + 1);
	}
	if (couldMoveDirection(maze, rows, cols, currentRow, currentCol - 1))
	{
		count += getCountOFAllPaths(maze, rows, cols, currentRow, currentCol - 1);
	}
	if (couldMoveDirection(maze, rows, cols, currentRow + 1, currentCol))
	{
		count += getCountOFAllPaths(maze, rows, cols, currentRow + 1, currentCol);
	}
	if (couldMoveDirection(maze, rows, cols, currentRow - 1, currentCol))
	{
		count += getCountOFAllPaths(maze, rows, cols, currentRow - 1, currentCol);
	}

	maze[currentRow][currentCol] = '0';

	return count;
}

size_t findAllPaths(char** maze, size_t rows, size_t cols)
{
	size_t count = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (maze[i][j] == '^')
			{
				count = getCountOFAllPaths(maze, rows, cols, i, j);
			}
		}
	}

	return count;
}

int main()
{
	return 0;
}


//["^", "0", "0", "0", "0", "0", "0", "1"],
//["@", "1", "1", "1", "1", "1", "0", "0"],
//["@", "0", "0", "0", "0", "1", "#", "1"],
//["@", "1", "1", "1", "0", "1", "0", "0"],
//["@", "1", "@", "1", "0", "0", "0", "1"],
//["@", "@", "@", "1", "0", "1", "0", "*"]]
