#ifndef __FRUIT_H__
#define __FRUIT_H__

#include "vegetalDecore.h"
#include <typeinfo>

class Fruit : public VegetalDecore
{
	public :
		Fruit(Vegetal*);

		void dessiner() const override;
		void grandir(double) override;
		void dessiner_simple() const;
};

#endif
