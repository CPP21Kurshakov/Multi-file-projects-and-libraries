#pragma once
#include <iostream>
#include <string>
#include "Parallelogram.h"
#include "Figures.h"

Parallelogram::Parallelogram(float sidPrl1, float sidPrl2, float sidPrl3, float sidPrl4, float cornPrl1, float cornPrl2, float cornPrl3, float cornPrl4) :
    Figures(nameF), sid_a7(sidPrl1), sid_b7(sidPrl2), sid_c7(sidPrl3), sid_d7(sidPrl4), corner_A7(cornPrl1), corner_B7(cornPrl2), corner_C7(cornPrl3), corner_D7(cornPrl4)
{
    nameF = "��������������: ";
}

void Parallelogram::check()
{
    if (corner_A7 != corner_C7 || corner_B7 != corner_D7)
    {
        std::cout << "���������� ������ � ��������� ���������� ����� (Parallelogram)!!! ���� 'A' � 'C','B' � 'D' ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (sid_a7 != sid_c7 || sid_b7 != sid_d7)
    {
        std::cout << "���������� ������ � ��������� ���������� ��������� ������ (Parallelogram)!!! ������� 'a' � 'c','b' � 'd' ������ ���� �����" << std::endl;
        exit(1);
    }
    else if (corner_A7 + corner_D7 != 180 || corner_B7 + corner_C7 != 180)
    {
        std::cout << "���������� ������ � ��������� ���������� ����� (Parallelogram)!!! ����� ����� 'A' � 'D','B' � 'C' ������ ���� ����� 180" << std::endl;
        exit(1);
    }
}

void Parallelogram::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "�������: " << "a=" << sid_a7 << " " << "b=" << sid_b7 << " " << "c=" << sid_c7 << " " << "d=" << sid_d7 << std::endl;
    std::cout << "����: " << "A=" << corner_A7 << " " << "B=" << corner_B7 << " " << "C=" << corner_C7 << " " << "D=" << corner_D7 << std::endl;
}