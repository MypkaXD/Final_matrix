#include <iostream>
#include <ctime>

void multiplicationOfMatrix(double**& matrix1, double**& matrix2, double**& matrix3, int* line_first_matrix, int* column_first_matrix, int* column_second_matrix)
{
	for (int i = 0; i < *line_first_matrix; i++) // вычисл€ю элементы
	{
		for (int j = 0; j < *column_second_matrix; j++)
		{
			matrix3[i][j] = 0;
			for (int k = 0; k < *column_first_matrix; k++)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}