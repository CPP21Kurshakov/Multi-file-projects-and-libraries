#pragma once
#include <iostream>



void action()
{
	int x;
	int y;
	int numAct;

	std::cout << "������� ������ �����: " << std::endl;
	std::cin >> x;
	std::cout << "������� ������ �����: " << std::endl;
	std::cin >> y;

	std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): " << std::endl;
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
		std::cout << "�� 0 ������ ������!!!" << std::endl;
	}
	else if(numAct == 4)
	{
		std::cout << x << " / " << y << " = " << x / y << std::endl;
	}

	if (y == 0)
	{
		std::cout << "������������ ���� ����� 'y'!!! Y �� ����� ���� ����� 0." << std::endl;
	}
	else if(numAct == 5)
	{
		std::cout << x << " � ������� " << y << " = " << pow(x, y) << std::endl;
	}
}
