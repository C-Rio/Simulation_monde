#ifndef __GROUND_VEHICULE_H__
#define __GROUND_VEHICULE_H__

#include <cmath>

class GroundVehicule
{
	private:
		double x;
		double y;

	public:
		double get_x() const;
		void set_x(double);
		double get_y() const;
		void set_y(double);
		void move(double);
};

#endif
