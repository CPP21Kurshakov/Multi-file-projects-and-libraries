#pragma once
#include <iostream>
#include <string>
#include "Rhombus.h"
#include "Figures.h"

Rhombus::Rhombus(float sidRh1, float sidRh2, float sidRh3, float sidRh4, float cornRh1, float cornRh2, float cornRh3, float cornRh4) :
    Figures(nameF), sid_a8(sidRh1), sid_b8(sidRh2), sid_c8(sidRh3), sid_d8(sidRh4), corner_A8(cornRh1), corner_B8(cornRh2), corner_C8(cornRh3), corner_D8(cornRh4)
{
    nameF = "Ромб: ";
}

void Rhombus::check()
{
    if (corner_A8 != corner_C8 || corner_B8 != corner_D8)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах углов (Rhombus)!!! Углы 'A' и 'C','B' и 'D' должны быть равны" << std::endl;
        exit(1);
    }
    else if (sid_a8 != sid_c8 || sid_b8 != sid_d8 || sid_a8 != sid_b8 || sid_b8 != sid_c8)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Rhombus)!!! Стороны должны быть равны" << std::endl;
        exit(1);
    }
    else if (corner_A8 + corner_D8 != 180 || corner_B8 + corner_C8 != 180)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах углов (Rhombus)!!! Суммы углов 'A' и 'D','B' и 'C' должны быть равны 180" << std::endl;
        exit(1);
    }
}

void Rhombus::print_info() const
{
    std::cout << nameF << std::endl;
    std::cout << "Стороны: " << "a=" << sid_a8 << " " << "b=" << sid_b8 << " " << "c=" << sid_c8 << " " << "d=" << sid_d8 << std::endl;
    std::cout << "Углы: " << "A=" << corner_A8 << " " << "B=" << corner_B8 << " " << "C=" << corner_C8 << " " << "D=" << corner_D8 << std::endl;
}