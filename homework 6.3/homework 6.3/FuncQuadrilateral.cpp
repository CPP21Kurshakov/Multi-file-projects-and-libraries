#pragma once
#include <iostream>
#include <string>
#include "Quadrilateral.h"
#include "Figures.h"

Quadrilateral::Quadrilateral(float sidQl1, float sidQl2, float sidQl3, float sidQl4, float cornQl1, float cornQl2, float cornQl3, float cornQl4) :
    Figures(nameF), sid_a4(sidQl1), sid_b4(sidQl2), sid_c4(sidQl3), sid_d4(sidQl4), corner_A4(cornQl1), corner_B4(cornQl2), corner_C4(cornQl3), corner_D4(cornQl4)
{
    nameF = "Четырёхугольник: ";
}

void Quadrilateral::check()
{
    if ((corner_A4 + corner_B4 + corner_C4 + corner_D4) != 360)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах суммы углов (Quadrilateral)!!! Сумма углов должна быть равна 360" << std::endl;
        exit(1);
    }
}

void Quadrilateral::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "Стороны: " << "a=" << sid_a4 << " " << "b=" << sid_b4 << " " << "c=" << sid_c4 << " " << "d=" << sid_d4 << std::endl;
    std::cout << "Углы: " << "A=" << corner_A4 << " " << "B=" << corner_B4 << " " << "C=" << corner_C4 << " " << "D=" << corner_D4 << std::endl;
}