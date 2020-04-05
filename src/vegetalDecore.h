#ifndef __VEGETALDECORE_H__
#define __VEGETALDECORE_H__

#include "vegetal.h"

class VegetalDecore : public Vegetal
{
protected:
  Vegetal *v;

public:
  VegetalDecore(Vegetal *v);

  void set_vegetal(Vegetal *v);
  double get_x() const;
  void set_x(double);
  double get_y() const;
  void set_y(double);
  virtual void dessiner_simple() const  = 0;
};

#endif
