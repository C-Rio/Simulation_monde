#include "afficheContenu.h"

AfficheContenu::AfficheContenu(): Commande() {}
AfficheContenu::~AfficheContenu() {}

void AfficheContenu::operator()()
{
    Monde* m = Monde::get_monde();
    m->dessinerTout();
}
