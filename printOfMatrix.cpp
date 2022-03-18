#include <iostream>
#include <ctime>

void printOfMatrix(double**& matrix, int* line_A, int* column_B)
{
	for (int i = 0; i < *line_A; i++)// вывожу итоговую матрицу
	{
		for (int j = 0; j < *column_B; j++)
		{
			std::cout << matrix[i][j];
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}