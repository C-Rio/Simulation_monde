#include "MobilePorteur.h"


MobilePorteur::MobilePorteur(std::string nnom, double xx, double yy): Mobile(nnom, xx, yy)
{
    this->mobiles_portes = std::vector<Mobile*>(0);
}

MobilePorteur::~MobilePorteur()
{
   for(unsigned int i=0; i < this->mobiles_portes.size(); i++)
      delete this->mobiles_portes[i];
}

MobilePorteur::MobilePorteur(const MobileSimple &M) : Mobile(M.get_nom(), M.get_x(), M.get_y())
{
    this->mobiles_portes = std::vector<Mobile*>(0);
}

void MobilePorteur::dessiner(double xx, double yy, std::string porteur) const
{
    std::cout << "Mobile Porteur : " << this->get_nom() << " (" << this->get_x()+xx << ", " << this->get_y()+yy << ")";
    if(porteur.length() > 0)
        std::cout << " sur " << porteur;
    std::cout << std::endl;

    for(size_t i = 0; i < mobiles_portes.size(); i++)
        mobiles_portes[i]->dessiner(this->get_x()+xx, this->get_y()+yy, this->get_nom());
}

void MobilePorteur::deplacer(double angleDeg)
{
    std::cout << "Appelez la méthode deplacer() depuis un adaptativeGVporteur" << std::endl;
}

void MobilePorteur::add_mobile(Mobile* m)
{
    this->mobiles_portes.push_back(m);
}

void MobilePorteur::remove_mobile(Mobile * M)
{
    for(unsigned int i=0; i < this->mobiles_portes.size(); i++)
    {
        if(this->mobiles_portes[i] == M)
        {
            this->mobiles_portes.erase(this->mobiles_portes.begin()+i);
        }
    }
}

std::vector<Mobile *> MobilePorteur::get_mobiles_portes() const
{
    return this->mobiles_portes;
}
