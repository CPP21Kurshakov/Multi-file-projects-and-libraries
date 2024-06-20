#pragma once
#include <string>
#include "Figures.h"

class Parallelogram : public Figures
{
protected:
    float sid_a7, sid_b7, sid_c7, sid_d7;
    float corner_A7, corner_B7, corner_C7, corner_D7;

public:
    Parallelogram(float sidPrl1, float sidPrl2, float sidPrl3, float sidPrl4, float cornPrl1, float cornPrl2, float cornPrl3, float cornPrl4);

    void check();

    void print_info() const override;
};