#ifndef __ARBRE_H__
#define __ARBRE_H__

#include "vegetal.h"
#include "arbre_type.h"
#include "monde.h"

class Arbre : public Vegetal
{
  protected:
	std::string type;
	double taille;
	ArbreType *at;

  public:
	Arbre(std::string type, double taille = 0, double xx = 0, double yy = 0);
	~Arbre();

	std::string get_type() const;
	void set_type(std::string);
	double get_taille() const;
	void set_taille(double);
	void set_at(ArbreType *);
	void dessiner() const override;
	void dessiner_simple() const override;
	void grandir(double) override;
};

#endif
