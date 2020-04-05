#ifndef __MONDE_H__
#define __MONDE_H__

#include "arbre.h"
#include "gestionnaire_arbre_type.h"
#include "MobileSimple.h"
#include "MobilePorteur.h"
#include "grandir.h"
#include "afficheContenu.h"
#include "saison.h"
#include "adaptativeGVsimple.h"
#include "adaptativeGVporteur.h"
#include "vegetalDecore.h"
#include "neige.h"
#include "fruit.h"

class Monde {

   static Monde * m_instance;
   GestionnaireArbreType * gat;
   std::vector<Vegetal*> flore;
   std::vector<Mobile*> mobiles;
   std::vector<Commande*> cmd;

   Monde();


public:

   ~Monde();

   static Monde *get_monde()
   {
      if(m_instance == nullptr)
      {
         m_instance = new Monde;
      }
      return m_instance;
   }

   GestionnaireArbreType* get_gat() const;
   std::vector<Vegetal*> get_flore() const;
   Vegetal* get_ieme_vegetal(unsigned int) const;
   void add_vegetal(Vegetal*);
   void remove_vegetal(Vegetal*);
   void replace_vegetal(Vegetal*, Vegetal*);
   void add_mobile(Mobile *);
   void remove_mobile(Mobile *);
   void dessinerTout();
   void add_commande(Commande *);
   void execute_cmd();

   void test_TP1();
   void test_TP2();
   void test_TP3();
   void test_TP4();
   void test_TP5();
};

#endif
