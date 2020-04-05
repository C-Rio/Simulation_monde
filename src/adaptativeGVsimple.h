#ifndef __AGVsimple_H__
#define __AGVsimple__H__

#include "MobileSimple.h"
#include "groundvehicule.h"


class AdaptativeGVsimple : public MobileSimple
{
	private:
		GroundVehicule GV;

	public:
		 AdaptativeGVsimple(std::string, double, double);
		~AdaptativeGVsimple();

		void deplacer(double) override;

};

#endif
