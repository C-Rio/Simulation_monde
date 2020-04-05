#ifndef __SAISON_H__
#define __SAISON_H__

#include "commande.h"
#include "gestionnaire_arbre_type.h"


class Saison : public Commande
{
	private:
		GestionnaireArbreType* cible;

	public:
		Saison(GestionnaireArbreType *);
		~Saison();

		void operator()() override;
};

#endif
