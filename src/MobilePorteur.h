#ifndef __MOBILEPORTEUR_H__
#define __MOBILEPORTEUR_H__

#include <vector>
#include <assert.h>
#include "Mobile.h"
#include "MobileSimple.h"

class MobileSimple;

class MobilePorteur : public Mobile
{
protected:
	std::vector<Mobile *> mobiles_portes;

public:
	MobilePorteur(std::string, double xx = 0, double yy = 0);
	~MobilePorteur();
	MobilePorteur(const MobileSimple &M);

	void dessiner(double xx = 0, double yy = 0, std::string porteur = "") const override;
	void deplacer(double) override;

	void add_mobile(Mobile *);
	void remove_mobile(Mobile *M);
	std::vector<Mobile *> get_mobiles_portes() const;
};

#endif
