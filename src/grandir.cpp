#include "grandir.h"

Grandir::Grandir(double f): Commande()
{
    this->facteur = f;
}

Grandir::~Grandir() {}

void Grandir::operator()()
{
    Monde *m = Monde::get_monde();

    for(unsigned int i=0; i < m->get_flore().size(); i++)
        m->get_flore()[i]->grandir(this->facteur);
}
