#include "gestionnaire_arbre_type.h"

GestionnaireArbreType::GestionnaireArbreType()
{
    this->map = new std::map<std::string, ArbreType*>();
}

GestionnaireArbreType::~GestionnaireArbreType()
{
    this->map->clear();
}

void GestionnaireArbreType::add_type(std::string type, ArbreType *at)
{
    this->map->insert(std::pair<std::string, ArbreType*>(type, at));
}

void  GestionnaireArbreType::remove_type(std::string type)
{
    this->map->erase(type);
}

ArbreType* GestionnaireArbreType::get_ArbreType(std::string type)
{
    if(map->find(type) != map->end())
        return map->find(type)->second;
    else
    {
        ArbreType* at = new ArbreType;
        std::cout << "\tNouveau type " + type + " ajouté" << std::endl;
        this->add_type(type, at);
        return at;
    }
}

void GestionnaireArbreType::saison()
{
    for(std::map<std::string, ArbreType*>::iterator it = this->map->begin(); it != this->map->end(); it++)
    {
        (it->second)->passer_saison(it->first);
    }
}
