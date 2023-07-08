#include <iostream>
#include "my_math.h"

int main()
{
	setlocale(LC_ALL, "russian");

	int first, second, operation;

	std::cout << "¬ведите первое число: ";
	std::cin >> first;
	std::cout << "¬ведите второе число: ";
	std::cin >> second;

	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;

	if (operation == 1)
	{
		std::cout << first << " плюс " << second << " равно " << math::sum(first, second) << "\n";
	}
	else if (operation == 2)
	{
		std::cout << first << " минус " << second << " равно " << math::sub(first, second) << "\n";
	}
	else if (operation == 3)
	{
		std::cout << first << " умножить на " << second << " равно " << math::mul(first, second) << "\n";
	}
	else if (operation == 4)
	{
		std::cout << first << " разделить на " << second << " равно " << math::div(first, second) << "\n";
	}
	else if (operation == 5)
	{
		std::cout << first << " в степени " << second << " равно " << math::pow(first, second) << "\n";
	}
	else
	{
		std::cout << "Ќеизвестна€ операци€\n";
	}

}