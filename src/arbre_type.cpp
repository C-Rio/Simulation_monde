#include "arbre_type.h"
#include <assert.h>

ArbreType::ArbreType()
{
    for(unsigned int i=0; i<100; i++)
    {
        for(unsigned int j=0; j<100; j++)
            this->texture[i][j] = 0;
    }
}

double ArbreType::get_texture(unsigned int i, unsigned int j) const
{
    assert(i<100 && j<100);
    return this->texture[i][j];
}

void ArbreType::set_texture(unsigned int i, unsigned int j, double value)
{
    assert(i<100 && j<100);
    this->texture[i][j] = value;
}

void ArbreType::passer_saison(std::string type)
{
    std::cout << "Les arbres de type " << type << " passent la saison." << std::endl;
}
