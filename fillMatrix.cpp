#include <iostream>
#include <ctime>

void fillMatrix(double**& matrix, int* line, int* column)
{
	for (int i = 0; i < *line; i++)
	{
		for (int j = 0; j < *column; j++)
		{
			std::cout << "[" << i << "][" << j << "]= ";
			std::cin >> matrix[i][j];
		}
	}
}