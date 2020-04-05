#ifndef __MOBILE_H__
#define __MOBILE_H__

#include <iostream>

class Mobile
{
  protected:
	std::string nom;
	double x;
	double y;

  public:
	Mobile(std::string nnom, double xx = 0, double yy = 0);
	std::string get_nom() const;
	void set_nom(std::string);
	double get_x() const;
	double get_y() const;
	void set_x(double);
	void set_y(double);
	void set_position(double, double);
	virtual void dessiner(double xx = 0, double yy = 0, std::string porteur = "") const = 0;
	virtual void deplacer(double) = 0;
};

#endif
