#pragma once
#include <iostream>
#include <string>
#include "Rhombus.h"
#include "Figures.h"

Rhombus::Rhombus(float sidRh1, float sidRh2, float sidRh3, float sidRh4, float cornRh1, float cornRh2, float cornRh3, float cornRh4) :
    Figures(nameF), sid_a8(sidRh1), sid_b8(sidRh2), sid_c8(sidRh3), sid_d8(sidRh4), corner_A8(cornRh1), corner_B8(cornRh2), corner_C8(cornRh3), corner_D8(cornRh4)
{
    nameF = "����: ";
}

void Rhombus::check()
{
    if (corner_A8 != corner_C8 || corner_B8 != corner_D8)
    {
        std::cout << "���������� ������ � ��������� ���������� ����� (Rhombus)!!! ���� 'A' � 'C','B' � 'D' ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (sid_a8 != sid_c8 || sid_b8 != sid_d8 || sid_a8 != sid_b8 || sid_b8 != sid_c8)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ������ (Rhombus)!!! ������� ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (corner_A8 + corner_D8 != 180 || corner_B8 + corner_C8 != 180)
    {
        std::cout << "���������� ������ � ��������� ���������� ����� (Rhombus)!!! ����� ����� 'A' � 'D','B' � 'C' ������ ���� ����� 180" << std::endl;
        exit(1);
    }
}

void Rhombus::print_info() const
{
    std::cout << nameF << std::endl;
    std::cout << "�������: " << "a=" << sid_a8 << " " << "b=" << sid_b8 << " " << "c=" << sid_c8 << " " << "d=" << sid_d8 << std::endl;
    std::cout << "����: " << "A=" << corner_A8 << " " << "B=" << corner_B8 << " " << "C=" << corner_C8 << " " << "D=" << corner_D8 << std::endl;
}