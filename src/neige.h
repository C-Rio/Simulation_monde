#ifndef __NEIGE_H__
#define __NEIGE_H__

#include "vegetalDecore.h"
#include <typeinfo>

class Neige : public VegetalDecore
{
	public :
		Neige(Vegetal*);

		void dessiner() const override;
		void grandir(double) override;
		void dessiner_simple() const override;
};

#endif
