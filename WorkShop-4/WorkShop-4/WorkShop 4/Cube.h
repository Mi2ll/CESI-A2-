#pragma once 
#include "linker.h"

class Cube : public Rectangle {
public:
    Cube();
    Cube(int tcote);
    int getPerimetre();
    int getAire();
    int getCote();
    string afficheInfo();
};