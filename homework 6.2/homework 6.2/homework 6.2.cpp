#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"




int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	Counter counter;

	int mng;
	std::string choice;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> choice;

	if (choice == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> mng;
		counter.initV(mng);
	}

	for (; ; )
	{
		std::cout << "Введите команду ( '+', '-', '=' или 'x'): ";
		std::cin >> choice;

		if (choice == "+")
		{
			counter.inc();
		}
		if (choice == "-")
		{
			counter.dec();
		}
		if (choice == "=")
		{
			std::cout << counter.equals() << std::endl;
		}
		if (choice == "x")
		{
			std::cout << "До свидания!" << std::endl;
			break;
		}
	}

	return 0;
}
