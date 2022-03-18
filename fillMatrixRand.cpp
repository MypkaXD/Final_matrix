#include <iostream>
#include <ctime>

void fillMatrixRand(double**& matrix, int* line, int* column)
{
	for (int i = 0; i < *line; i++)
	{
		for (int j = 0; j < *column; j++)
		{
			matrix[i][j] = rand();
			if (*line * (*column) < 1000)
			{
				std::cout << "[" << i << "][" << j << "]= ";
				std::cout << matrix[i][j] << std::endl;
			}
		}
	}
}