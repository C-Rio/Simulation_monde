#include "fruit.h"

Fruit::Fruit(Vegetal *v) : VegetalDecore(v) {}

void Fruit::dessiner() const
{
    this->v->dessiner();
    std::cout << "+ Ajout du decor FRUITS sur ";
    this->v->dessiner_simple();
    std::cout << std::endl;
}

void Fruit::grandir(double d)
{
    std::cout << d << std::endl;
}

void Fruit::dessiner_simple() const
{
    std::cout << "fruit (" << this->get_x() << ", " << this->get_y() << ")" << std::endl;
}
