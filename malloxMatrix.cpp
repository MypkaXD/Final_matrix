#include <iostream>
#include <ctime>

void malloxMatrix(double**& matrix, int* line, int* column)
{
	matrix = new double* [*line];
	for (int i = 0; i < *line; i++)//¬вожу элементы первой матрицы
	{
		matrix[i] = new double[*column];
	}
}