#include "groundvehicule.h"


void GroundVehicule::set_x(double nx)
{
    this->x = nx;
}

double GroundVehicule::get_x() const
{
    return this->x;
}

double GroundVehicule::get_y() const
{
    return this->y;
}

void GroundVehicule::set_y(double ny)
{
    this->y = ny;
}

void GroundVehicule::move(double angleRad)
{
    this->x += cos(angleRad);
    this->y += sin(angleRad);
}
