#pragma once
#include <string>
#include "Figures.h"

class Square : public Figures
{
protected:
    float sid_a6, sid_b6, sid_c6, sid_d6;
    float corner_A6, corner_B6, corner_C6, corner_D6;

public:
    Square(float sidSq1, float sidSq2, float sidSq3, float sidSq4, float cornSq1, float cornSq2, float cornSq3, float cornSq4);

    void check();

    void print_info() const override;
};