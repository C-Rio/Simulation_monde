#ifndef __AFFICHECONTENU_H__
#define __AFFICHECONTENU_H__

#include "commande.h"
#include "monde.h"

class AfficheContenu : public Commande
{
	public:
		AfficheContenu();
		~AfficheContenu();

		void operator()() override;
};

#endif
