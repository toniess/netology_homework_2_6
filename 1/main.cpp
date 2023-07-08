#include <iostream>
#include "my_math.h"

int main()
{
	setlocale(LC_ALL, "russian");

	int first, second, operation;

	std::cout << "������� ������ �����: ";
	std::cin >> first;
	std::cout << "������� ������ �����: ";
	std::cin >> second;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> operation;

	if (operation == 1)
	{
		std::cout << first << " ���� " << second << " ����� " << math::sum(first, second) << "\n";
	}
	else if (operation == 2)
	{
		std::cout << first << " ����� " << second << " ����� " << math::sub(first, second) << "\n";
	}
	else if (operation == 3)
	{
		std::cout << first << " �������� �� " << second << " ����� " << math::mul(first, second) << "\n";
	}
	else if (operation == 4)
	{
		std::cout << first << " ��������� �� " << second << " ����� " << math::div(first, second) << "\n";
	}
	else if (operation == 5)
	{
		std::cout << first << " � ������� " << second << " ����� " << math::pow(first, second) << "\n";
	}
	else
	{
		std::cout << "����������� ��������\n";
	}

}