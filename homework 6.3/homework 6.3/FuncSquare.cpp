#pragma once
#include <iostream>
#include <string>
#include "Square.h"
#include "Figures.h"

Square::Square(float sidSq1, float sidSq2, float sidSq3, float sidSq4, float cornSq1, float cornSq2, float cornSq3, float cornSq4) :
    Figures(nameF), sid_a6(sidSq1), sid_b6(sidSq2), sid_c6(sidSq3), sid_d6(sidSq4), corner_A6(cornSq1), corner_B6(cornSq2), corner_C6(cornSq3), corner_D6(cornSq4)
{
    nameF = "Квадрат: ";
}

void Square::check()
{
    if (corner_A6 != 90 || corner_B6 != 90 || corner_C6 != 90 || corner_D6 != 90)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах углов (Square)!!! Углы должны быть равны 90" << std::endl;
        exit(1);
    }
    else if (sid_a6 != sid_c6 || sid_b6 != sid_d6 || sid_b6 != sid_c6 || sid_c6 != sid_d6)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Square)!!! Стороны должны быть равны" << std::endl;
        exit(1);
    }
}

void Square::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "Стороны: " << "a=" << sid_a6 << " " << "b=" << sid_b6 << " " << "c=" << sid_c6 << " " << "d=" << sid_d6 << std::endl;
    std::cout << "Углы: " << "A=" << corner_A6 << " " << "B=" << corner_B6 << " " << "C=" << corner_C6 << " " << "D=" << corner_D6 << std::endl;
}