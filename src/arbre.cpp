#include "arbre.h"

Arbre::Arbre(std::string type, double taille, double xx, double yy) : Vegetal(xx, yy)
{
    this->type = type;
    this->taille = taille;
    this->at = nullptr;
    std::cout << "Création Arbre de type " << this->get_type() << " : position (" << this->get_x() << "; " << this->get_y() << "), taille " << this->get_taille() << std::endl;

    Monde *M = Monde::get_monde();
    this->set_at(M->get_gat()->get_ArbreType(type));
}

Arbre::~Arbre() {}

std::string Arbre::get_type() const
{
    return this->type;
}

void Arbre::set_type(std::string ntype)
{
    this->type = ntype;
}

double Arbre::get_taille() const
{
    return this->taille;
}

void Arbre::set_taille(double nt)
{
    this->taille = nt;
}

void Arbre::set_at(ArbreType *nat)
{
    this->at = nat;
}

void Arbre::dessiner() const
{
    std::cout << "Dessin Arbre de type " << this->get_type() << " : position (" << this->get_x() << "; " << this->get_y() << "), taille " << this->get_taille() << std::endl;
}

void Arbre::dessiner_simple() const
{
    std::cout << "arbre (" << this->get_x() << ", " << this->get_y() << ")" << std::endl;
}

void Arbre::grandir(double facteur)
{
    this->taille = this->taille * facteur;
}
