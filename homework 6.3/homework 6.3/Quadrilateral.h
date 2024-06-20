#pragma once
#include <string>
#include "Figures.h"

class Quadrilateral : public Figures
{
protected:
    float sid_a4, sid_b4, sid_c4, sid_d4;
    float corner_A4, corner_B4, corner_C4, corner_D4;

public:
    Quadrilateral(float sidQl1, float sidQl2, float sidQl3, float sidQl4, float cornQl1, float cornQl2, float cornQl3, float cornQl4);

    void check();

    void print_info() const override;
};