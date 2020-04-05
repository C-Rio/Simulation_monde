#include "vegetalDecore.h"

VegetalDecore::VegetalDecore(Vegetal *v) : Vegetal(v->get_x(), v->get_y())
{
    this->v = v;
}

Vegetal::~Vegetal() {}

void VegetalDecore::set_vegetal(Vegetal *v)
{
    this->v = v;
}

double VegetalDecore::get_x() const
{
    return this->v->get_x();
}

void VegetalDecore::set_x(double nx)
{
    this->v->set_x(nx);
}

double VegetalDecore::get_y() const
{
    return this->v->get_y();
}

void VegetalDecore::set_y(double ny)
{
    this->v->set_y(ny);
}
