#ifndef __GESTIONNAIRE_ARBRE_TYPE_H__
#define __GESTIONNAIRE_ARBRE_TYPE_H__

#include <map>
#include <list>
#include "arbre_type.h"
#include <iostream>
#include <iterator>

class GestionnaireArbreType
{
	std::map<std::string, ArbreType*> * map;

	public:
		GestionnaireArbreType();
		~GestionnaireArbreType();

        void add_type(std::string, ArbreType*);
        void remove_type(std::string);
        ArbreType *get_ArbreType(std::string);
		void saison();

};

#endif
