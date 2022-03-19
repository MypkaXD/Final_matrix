#include <iostream>
#include <ctime>
#include "HeaderOfMatrix.h"

void fill_lines_and_columns(int* nRef)
{
	std::cin >> *nRef;
	while (std::cin.fail())
	{
		proverka(*&nRef);
	}
}

void fillOrRand(int* questions)
{
	std::cout << "Вы хотите ввести элементы массива вручную или попробовать ввод рандомных числа?\nВручную - 1\nВвод рандомных чисел - 2" << std::endl;
	std::cin >> *questions;
	while (*questions != 1 && *questions != 2)
	{
		proverka(*&questions);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	int line_A;		//строка 1-ой матрицы
	int line_B;		//строка 2-ой матрицы
	int column_A;	//столбец 1-ой матрицы
	int column_B;	//столбец 2-ой матрицы
	double** a, ** b, ** c;
	int questions;

	do
	{
		std::cout << "Введите количество элементов в строке 1-ой матрицы" << std::endl;
		fill_lines_and_columns(&line_A);
		std::cout << "Введите количество элементов в столбце 1-ой матрицы" << std::endl;
		fill_lines_and_columns(&column_A);
		std::cout << "Введите количество элементов в строке 2-ой матрицы" << std::endl;
		fill_lines_and_columns(&line_B);
		std::cout << "Введите количество элементов в столбце 2-ой матрицы" << std::endl;
		fill_lines_and_columns(&column_B);
	} while (column_A != line_B);

	malloxMatrix(a, &line_A, &column_A);
	fillOrRand(&questions);
	if (questions == 1)
	{
		std::cout << "Введите элементы матрицы" << std::endl;
		fillMatrix(a, &line_A, &column_A);
	}
	else if (questions == 2)
	{
		std::cout << "Вводятся рандомные значения элементов матрицы" << std::endl;
		fillMatrixRand(a, &line_A, &column_A);
	}

	malloxMatrix(b, &line_B, &column_B);
	fillOrRand(&questions);
	if (questions == 1)
	{
		std::cout << "Введите элементы матрицы" << std::endl;
		fillMatrix(b, &line_B, &column_B);
	}
	else if (questions == 2)
	{
		std::cout << "Вводятся рандомные значения элементов матрицы" << std::endl;
		fillMatrixRand(b, &line_B, &column_B);
	}

	malloxMatrix(c, &line_A, &column_B);
	double clock_1 = clock();
	multiplicationOfMatrix(a, b, c, &line_A, &column_A, &column_B);
	double clock_2 = clock();
	double overall_time = clock_2 - clock_1;
	std::cout << "Общее время выполенения умножения двух матриц = " << overall_time/1000 << " секунд" << std::endl;
	if (line_A * column_B < 1000)
	{
		printOfMatrix(c, &line_A, &column_B);
	}
	deleteOfMatrix(a, &line_A, &column_A);
	deleteOfMatrix(b, &line_B, &column_B);
	deleteOfMatrix(c, &line_A, &column_B);
	return 0;
}