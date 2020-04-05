#ifndef __MOBILESIMPLE_H__
#define __MOBILESIMPLE_H__

#include "Mobile.h"
#include "MobilePorteur.h"

class MobilePorteur;

class MobileSimple : public Mobile
{

	public:
		MobileSimple(std::string, double xx=0, double yy=0);
		~MobileSimple();
		MobileSimple(const MobilePorteur &M);

		void dessiner(double xx=0, double yy=0, std::string porteur="") const override;
		void deplacer(double) override;
};

#endif
