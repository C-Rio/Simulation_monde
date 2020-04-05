#include "vegetal.h"

Vegetal::Vegetal(double xx, double yy)
{
    this->x = xx;
    this->y = yy;
}

double Vegetal::get_x() const
{
    return this->x;
}

void Vegetal::set_x(double nx)
{
    this->x = nx;
}

double Vegetal::get_y() const
{
    return this->y;
}

void Vegetal::set_y(double ny)
{
    this->y = ny;
}
