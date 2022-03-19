#include <iostream>
#include <ctime>

void printOfMatrix(double** matrix, int* line_A, int* column_B)
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

void multiplicationOfMatrix(double** matrix1, double** matrix2, double** matrix3, int* line_first_matrix, int* column_first_matrix, int* column_second_matrix)
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

void fillMatrixRand(double** matrix, int* line, int* column)
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

void deleteOfMatrix(double** matrix, int* line, int* column)
{
	for (int count = 0; count < *line; count++)
	{
		delete[] matrix[count];
	}
	delete[] matrix;
}

void fillMatrix(double** matrix, int* line, int* column)
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

void malloxMatrix(double**& matrix, int* line, int* column)
{
	matrix = new double* [*line];
	for (int i = 0; i < *line; i++)//¬вожу элементы первой матрицы
	{
		matrix[i] = new double[*column];
	}
}

void proverka(int* x)
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cout << "¬ведите значение повторно:";
	std::cin >> *x;
}