#pragma once
#include <iostream>
#include <string>
#include "Triangle.h"
#include "Figures.h"

Triangle::Triangle(float sidT1, float sidT2, float sidT3, float cornT1, float cornT2, float cornT3) :
    Figures(nameF), sid_a(sidT1), sid_b(sidT2), sid_c(sidT3), corner_A(cornT1), corner_B(cornT2), corner_C(cornT3)
{
    nameF = "�����������: ";
}

void Triangle::check()
{
    if (corner_C != 60)
    {
        std::cout << "���������� ������ � ��������� ���������� ���� � (Triangle)!!! ���� � ������ ���� ����� 60" << std::endl;
        exit(1);
    }
}

void Triangle::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "�������: " << "a=" << sid_a << " " << "b=" << sid_b << " " << "c=" << sid_c << std::endl;
    std::cout << "����: " << "A=" << corner_A << " " << "B=" << corner_B << " " << "C=" << corner_C << std::endl;
}