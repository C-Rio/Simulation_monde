#include "MobileSimple.h"

MobileSimple::MobileSimple(std::string nnom, double xx, double yy) : Mobile(nnom, xx, yy){}

MobileSimple::~MobileSimple(){}

MobileSimple::MobileSimple(const MobilePorteur &M) : Mobile(M.get_nom(), M.get_x(), M.get_y())
{
    assert(M.get_mobiles_portes().size() == 0);
}

void MobileSimple::dessiner(double xx, double yy, std::string porteur) const
{
    std::cout << "Mobile Simple : " << this->get_nom() << " (" << this->get_x()+xx << ", " << this->get_y()+yy << ")";
    if(porteur.length() > 0)
        std::cout << " sur " << porteur;
    std::cout << std::endl;
}

void MobileSimple::deplacer(double angleDeg)
{
    std::cout << "Appelez la méthode deplacer() depuis un adaptativeGVsimple" << std::endl;
}
