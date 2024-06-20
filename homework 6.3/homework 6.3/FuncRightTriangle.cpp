#pragma once
#include <iostream>
#include <string>
#include "RightTriangle.h"
#include "Figures.h"

RightTriangle::RightTriangle(float sidRt1, float sidRt2, float sidRt3, float cornRt1, float cornRt2, float cornRt3) :
    Figures(nameF), sid_a1(sidRt1), sid_b1(sidRt2), sid_c1(sidRt3), corner_A1(cornRt1), corner_B1(cornRt2), corner_C1(cornRt3)
{
    nameF = "Прямоугольный треугольник: ";
}

void RightTriangle::check()
{
    if (corner_C1 != 90)
    {
        std::cout << "Обнаружены ошибки в указанных параметрах угла С (RightTriangle)!!! Угол С должен быть равен 90" << std::endl;
        exit(1);
    }
}

void RightTriangle::print_info() const 
{
    std::cout << nameF << std::endl;
    std::cout << "Стороны: " << "a=" << sid_a1 << " " << "b=" << sid_b1 << " " << "c=" << sid_c1 << std::endl;
    std::cout << "Углы: " << "A=" << corner_A1 << " " << "B=" << corner_B1 << " " << "C=" << corner_C1 << std::endl;
}