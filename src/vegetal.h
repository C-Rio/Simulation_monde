#ifndef __VEGETAL_H__
#define __VEGETAL_H__

#include <iostream>
#include <assert.h>

class Vegetal
{
  protected:
	double x;
	double y;

  public:
	Vegetal(double xx = 0, double yy = 0);
	~Vegetal();

	double get_x() const;
	void set_x(double);
	double get_y() const;
	void set_y(double);
	virtual void dessiner() const = 0;
	virtual void dessiner_simple() const = 0;
	virtual void grandir(double) = 0;
};

#endif
