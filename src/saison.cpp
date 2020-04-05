#include "saison.h"

Saison::Saison(GestionnaireArbreType* gat): Commande()
{
    this->cible = gat;
}

Saison::~Saison() {}

void Saison::operator()()
{
    this->cible->saison();
}
