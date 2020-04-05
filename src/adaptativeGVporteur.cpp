#include "adaptativeGVporteur.h"

AdaptativeGVporteur::AdaptativeGVporteur(std::string nnom, double xx, double yy): MobilePorteur(nnom, xx, yy)
{
    this->GV = GroundVehicule();
}

void AdaptativeGVporteur::deplacer(double angleDeg)
{
    this->GV.set_x(this->get_x());
    this->GV.set_y(this->get_y());

    this->GV.move(angleDeg*M_PI/180);

    this->set_x(GV.get_x());
    this->set_y(GV.get_y());
}
