#ifndef __ARBRE_TYPE_H__
#define __ARBRE_TYPE_H__

#include <iostream>


class ArbreType
{
	private:
		double texture[100][100];

	public:
		ArbreType();
		~ArbreType();

		double get_texture(unsigned int, unsigned int) const;
		void set_texture(unsigned int, unsigned int, double);
		void passer_saison(std::string);

};

#endif
