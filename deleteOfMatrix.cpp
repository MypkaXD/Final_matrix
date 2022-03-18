#include <iostream>
#include <ctime>

void deleteOfMatrix(double**& matrix, int* line, int* column)
{
	for (int count = 0; count < *line; count++)
	{
		delete[] matrix[count];
	}
	delete[] matrix;
}
