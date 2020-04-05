#include "neige.h"

Neige::Neige(Vegetal *v) : VegetalDecore(v) {}

void Neige::dessiner() const
{
    std::cout << "+ Ajout du decor NEIGE sur ";
    this->v->dessiner_simple();
    std::cout << std::endl;
}

void Neige::grandir(double d)
{
    std::cout << d << std::endl;
}

void Neige::dessiner_simple() const
{
    std::cout << "neige (" << this->get_x() << ", " << this->get_y() << ")" << std::endl;
}
