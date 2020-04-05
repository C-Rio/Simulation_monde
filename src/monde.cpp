#include "monde.h"


Monde * Monde::m_instance = nullptr;

Monde::Monde()
{
    this->gat = new GestionnaireArbreType;
    this->flore = std::vector<Vegetal*>(0);
    this->mobiles = std::vector<Mobile*>(0);
    this->cmd = std::vector<Commande*>(0);
}

Monde::~Monde()
{
    this->gat->~GestionnaireArbreType();
    for(unsigned int i=0; i < this->flore.size(); i++)
        delete this->flore[i];
    for(unsigned int i=0; i < this->mobiles.size(); i++)
        delete this->mobiles[i];
    for(unsigned int i=0; i < this->cmd.size(); i++)
        delete this->cmd[i];
}

GestionnaireArbreType* Monde::get_gat() const
{
    return this->gat;
}

std::vector<Vegetal*> Monde::get_flore() const
{
   return this->flore;
}

Vegetal* Monde::get_ieme_vegetal(unsigned int i) const
{
   assert(i < this->flore.size());
   return this->flore[i];
}

void Monde::add_vegetal(Vegetal* V)
{
   this->flore.push_back(V);
}

void Monde::remove_vegetal(Vegetal* V)
{
    for(unsigned int i=0; i < this->flore.size(); i++)
    {
        if(this->flore[i] == V)
            this->flore.erase(this->flore.begin()+i);
    }
}

void Monde::replace_vegetal(Vegetal* V1, Vegetal* V2)
{
    this->remove_vegetal(V1);
    this->add_vegetal(V2);
}

void Monde::add_mobile(Mobile* m)
{
   this->mobiles.push_back(m);
}

void Monde::remove_mobile(Mobile * M)
{
    for(unsigned int i=0; i < this->mobiles.size(); i++)
    {
        if(this->mobiles[i] == M)
            this->mobiles.erase(this->mobiles.begin()+i);
    }
}

void Monde::dessinerTout()
{
   for(size_t i = 0; i < this->flore.size(); i++)
   {
      this->get_ieme_vegetal(i)->dessiner();
   }
   for(size_t i = 0; i < this->mobiles.size(); i++)
   {
      this->mobiles[i]->dessiner();
   }
}

void Monde::add_commande(Commande * c)
{
    this->cmd.push_back(c);
}

void Monde::execute_cmd()
{
    for(size_t i = 0; i < this->cmd.size(); i++)
    {
        (*this->cmd[i])();
    }
    this->cmd.clear();
}

void Monde::test_TP1()
{
   this->add_vegetal(new Arbre("sapin", 1, 2, 3));
   this->add_vegetal(new Arbre("chene", 1, 2, 3));
   this->add_vegetal(new Arbre("sapin", 5, 50, 3));
   this->add_vegetal(new Arbre("peuplier", 10, 20, 30));

   this->dessinerTout();
}

void Monde::test_TP2()
{
   MobileSimple * homme = new MobileSimple("homme", 20, 10);
   MobileSimple * femme = new MobileSimple("femme", 40, 20);
   MobilePorteur * velo = new MobilePorteur("velo", 200, 100);
   MobilePorteur * bateau = new MobilePorteur("bateau", 2000, 1000);

   this->add_mobile(homme);
   velo->add_mobile(femme);
   this->add_mobile(velo);
   this->dessinerTout();
   std::cout << std::endl;

   velo->set_position(300, 200);
   this->dessinerTout();
   std::cout << std::endl;

   velo->set_position(200, 100);
   this->remove_mobile(velo);
   this->add_mobile(bateau);
   bateau->add_mobile(velo);
   this->dessinerTout();
   std::cout << std::endl;

   this->remove_mobile(homme);
   velo->remove_mobile(femme);
   velo->add_mobile(homme);
   this->add_mobile(femme);
   this->dessinerTout();
   std::cout << std::endl;

   MobileSimple * chaise = new MobileSimple("chaise");
   MobilePorteur * mouton = new MobilePorteur("mouton");

   MobilePorteur * MP = new MobilePorteur(*chaise);
   MobileSimple * MS = new MobileSimple(*mouton);

   MP->add_mobile(MS);
   MS->set_position(10, 20);
   MP->set_position(10, 20);
   MP->dessiner();
}

void Monde::test_TP3()
{
    this->add_vegetal(new Arbre("sapin", 1, 2, 3));
    this->add_vegetal(new Arbre("chene", 10, 20, 30));
    this->add_vegetal(new Arbre("sapin", 15, 15, 15));

    this->add_commande(new AfficheContenu());

    this->add_commande(new Grandir(2.0));
    this->add_commande(new Saison(this->gat));

    this->add_commande(new AfficheContenu());

    this->execute_cmd();
}

void Monde::test_TP4()
{
    MobileSimple * homme = new AdaptativeGVsimple("homme", 20, 10);
    MobileSimple * femme = new MobileSimple("femme", 40, 20);
    MobilePorteur * velo = new AdaptativeGVporteur("velo", 200, 100);

    this->add_mobile(homme);
    velo->add_mobile(femme);
    this->add_mobile(velo);
    this->dessinerTout();

    homme->deplacer(0);
    velo->deplacer(90);
    this->dessinerTout();
}

void Monde::test_TP5()
{
	Arbre* pommier1 = new Arbre("pommier", 50, 1000, 500);
	this->add_vegetal(pommier1);
	Arbre* pommier2 = new Arbre("pommier", 20, 2000, 1500);
	this->add_vegetal(pommier2);
	Arbre* peuplier = new Arbre("peuplier", 5, 3, 3);
	this->add_vegetal(peuplier);

	this->dessinerTout();

    std::cout << "\n[Ajout décors]\n" << std::endl;

	Fruit* pomf = new Fruit(pommier1);
    this->replace_vegetal(pommier1, pomf);

	Fruit* poirf = new Fruit(pommier2);
    this->replace_vegetal(pommier2, poirf);

	Neige* peun = new Neige(peuplier);
	this->replace_vegetal(peuplier, peun);

	this->dessinerTout();
}
