#pragma once 
#include "linker.h"

class Rectangle : public Objet2D {
public:
    Rectangle();
    Rectangle(int tlongueur, int tlargeur);
    int getLongueur();
    int getLargeur();
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
};