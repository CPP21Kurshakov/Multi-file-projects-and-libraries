#pragma once
#include <iostream>
#include <string>
#include "IsoscelesTriangle.h"
#include "Figures.h"

IsoscelesTriangle::IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3) :
    Figures(nameF), sid_a2(sidIt1), sid_b2(sidIt2), sid_c2(sidIt3), corner_A2(cornIt1), corner_B2(cornIt2), corner_C2(cornIt3)
{
    nameF = "�������������� �����������: ";
}

void IsoscelesTriangle::check()
{
    if (sid_a2 != sid_c2)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ������ '�' � '�' (IsoscelesTriangle)!!! ������� ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (corner_A2 != corner_C2)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ����� '�' � '�' (IsoscelesTriangle)!!! ���� ������ ���� ����� 45" << std::endl;
        exit(1);
    }
}

void IsoscelesTriangle::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "�������: " << "a=" << sid_a2 << " " << "b=" << sid_b2 << " " << "c=" << sid_c2 << std::endl;
    std::cout << "����: " << "A=" << corner_A2 << " " << "B=" << corner_B2 << " " << "C=" << corner_C2 << std::endl;
}