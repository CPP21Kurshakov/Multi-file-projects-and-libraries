#pragma once
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Figures.h"

Rectangle::Rectangle(float sidR1, float sidR2, float sidR3, float sidR4, float cornR1, float cornR2, float cornR3, float cornR4) :
    Figures(nameF), sid_a5(sidR1), sid_b5(sidR2), sid_c5(sidR3), sid_d5(sidR4), corner_A5(cornR1), corner_B5(cornR2), corner_C5(cornR3), corner_D5(cornR4)
{
    nameF = "Прямоугольник: ";
}

void Rectangle::check()
{
    if (corner_A5 != 90 || corner_B5 != 90 || corner_C5 != 90 || corner_D5 != 90)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах углов (Rectangle)!!! Каждый угол должен быть равен 90" << std::endl;
        exit(1);
    }
    else if (sid_a5 != sid_c5 || sid_b5 != sid_d5)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах равенства сторон (Rectangle)!!! Стороны 'а' и 'с', стороны 'b' и 'd' должны быть равны" << std::endl;
        exit(1);
    }
}

void Rectangle::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "Стороны: " << "a=" << sid_a5 << " " << "b=" << sid_b5 << " " << "c=" << sid_c5 << " " << "d=" << sid_d5 << std::endl;
    std::cout << "Углы: " << "A=" << corner_A5 << " " << "B=" << corner_B5 << " " << "C=" << corner_C5 << " " << "D=" << corner_D5 << std::endl;
}