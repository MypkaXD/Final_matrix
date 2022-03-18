#include <iostream>
#include <ctime>

void proverka(int* x)
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cout << "Введите значение повторно:";
	std::cin >> *x;
}