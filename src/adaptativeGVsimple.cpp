#include "adaptativeGVsimple.h"

AdaptativeGVsimple::AdaptativeGVsimple(std::string nnom, double xx, double yy): MobileSimple(nnom, xx, yy)
{
    this->GV = GroundVehicule();
}

void AdaptativeGVsimple::deplacer(double angleDeg)
{
    this->GV.set_x(this->get_x());
    this->GV.set_y(this->get_y());

    this->GV.move(angleDeg*M_PI/180);

    this->set_x(GV.get_x());
    this->set_y(GV.get_y());
}
