#pragma once
#include <iostream>



void action()
{
	int x;
	int y;
	int numAct;

	std::cout << "Введите первое число: " << std::endl;
	std::cin >> x;
	std::cout << "Введите второе число: " << std::endl;
	std::cin >> y;

	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
	std::cin >> numAct;

	if (numAct == 1)
	{
		std::cout << x << " - " << y << " = " << x - y << std::endl;
	}

	if (numAct == 2)
	{
		std::cout << x << " - " << y << " = " << x - y << std::endl;
	}

	if (numAct == 3)
	{
		std::cout << x << " * " << y << " = " << x * y << std::endl;
	}

	if (y == 0)
	{
		std::cout << "На 0 делить нельзя!!!" << std::endl;
	}
	else if(numAct == 4)
	{
		std::cout << x << " / " << y << " = " << x / y << std::endl;
	}

	if (y == 0)
	{
		std::cout << "Некорректный ввод числа 'y'!!! Y не может быть равно 0." << std::endl;
	}
	else if(numAct == 5)
	{
		std::cout << x << " в степени " << y << " = " << pow(x, y) << std::endl;
	}
}
