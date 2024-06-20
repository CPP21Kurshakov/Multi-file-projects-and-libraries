#pragma once
#include <iostream>
#include <string>
#include "EquilateralTriangle.h"
#include "Figures.h"

EquilateralTriangle::EquilateralTriangle(float sidEt1, float sidEt2, float sidEt3, float cornEt1, float cornEt2, float cornEt3) :
    Figures(nameF), sid_a3(sidEt1), sid_b3(sidEt2), sid_c3(sidEt3), corner_A3(cornEt1), corner_B3(cornEt2), corner_C3(cornEt3)
{
    nameF = "�������������� �����������: ";
}

void EquilateralTriangle::check()
{
    if (sid_a3 != sid_c3 || sid_a3 != sid_b3)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ������ (EquilateralTriangle)!!! ������� ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (corner_A3 != corner_C3 || corner_A3 != corner_B3)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ����� (EquilateralTriangle)!!! ���� ������ ���� �����" << std::endl;
        exit(1);
    }
}

void EquilateralTriangle::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "�������: " << "a=" << sid_a3 << " " << "b=" << sid_b3 << " " << "c=" << sid_c3 << std::endl;
    std::cout << "����: " << "A=" << corner_A3 << " " << "B=" << corner_B3 << " " << "C=" << corner_C3 << std::endl;
}