#include "Mobile.h"

Mobile::Mobile(std::string nnom, double xx, double yy)
{
    this->nom = nnom;
    this->x = xx;
    this->y = yy;
}

std::string Mobile::get_nom() const
{
    return this->nom;
}

void Mobile::set_nom(std::string nnom)
{
    this->nom = nnom;
}

double Mobile::get_x() const
{
    return this->x;
}

double Mobile::get_y() const
{
    return this->y;
}

void Mobile::set_x(double xx)
{
    this->x = xx;
}

void Mobile::set_y(double yy)
{
    this->y = yy;
}

void Mobile::set_position(double xx, double yy)
{
    this->set_x(xx);
    this->set_y(yy);
}
