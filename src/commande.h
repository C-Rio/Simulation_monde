#ifndef __COMMANDE_H__
#define __COMMANDE_H__

#include <iostream>

class Commande
{
	public:
		virtual void operator()() = 0;
};

#endif
