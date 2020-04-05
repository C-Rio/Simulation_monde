#ifndef __AGVporteur_H__
#define __AGVporteur__H__

#include "MobilePorteur.h"
#include "groundvehicule.h"


class AdaptativeGVporteur : public MobilePorteur
{
	private:
		GroundVehicule GV;

	public:
		AdaptativeGVporteur(std::string, double, double);
		~AdaptativeGVporteur();

		void deplacer(double) override;

};

#endif
