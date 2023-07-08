#include <iostream>
#include <windows.h>
#include "counter.h"

Counter* initCounter()
{
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string answer;
	std::cin >> answer;
	if (answer == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		int startValue;
		std::cin >> startValue;
		return new Counter(startValue);
	}
	return new Counter();
}

int main()
{
	std::setlocale(LC_ALL, "russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter* c = initCounter();
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		char command;
		std::cin >> command;
		if (command == '+')
		{
			c->increase();
		}
		else if (command == '-')
		{
			c->decrease();
		}
		else if (command == '=')
		{
			std::cout << c->getValue() << std::endl;
		}
		else if (command == 'x')
		{
			std::cout << "До свидания!" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Некорректная команда" << std::endl;
		}
	}
	delete c;
}