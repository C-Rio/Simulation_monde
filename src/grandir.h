#ifndef __GRANDIR_H__
#define __GRANDIR_H__

#include "commande.h"
#include "arbre.h"
#include "monde.h"

class Grandir : public Commande
{
    private:
        double facteur;

	public:
		Grandir(double);
		~Grandir();

		void operator()() override;
};

#endif
