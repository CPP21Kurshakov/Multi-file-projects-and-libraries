#pragma once
#include <string>
#include "Figures.h"

class RightTriangle : public Figures
{
protected:
    float sid_a1, sid_b1, sid_c1;
    float corner_A1, corner_B1, corner_C1;

public:
    RightTriangle(float sidRt1, float sidRt2, float sidRt3, float cornRt1, float cornRt2, float cornRt3);

    void check();

    void print_info() const override;
};