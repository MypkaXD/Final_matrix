#include <iostream>
#include <ctime>

void malloxMatrix(double**& matrix, int* line, int* column)
{
	matrix = new double* [*line];
	for (int i = 0; i < *line; i++)//����� �������� ������ �������
	{
		matrix[i] = new double[*column];
	}
}