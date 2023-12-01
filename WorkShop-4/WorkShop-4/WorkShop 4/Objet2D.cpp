#include "linker.h"

Objet2D::Objet2D() : dim1(0), dim2(0) {};
Objet2D::Objet2D(int x, int y) : dim1(x), dim2(y) {};
int Objet2D::getPerimetre() { return 0; };
int Objet2D::getAire() { return 0; };
string Objet2D::afficheInfo() { return "Objet2D function"; };
Objet2D* Objet2D::getSuivant() { return suivant; };
void Objet2D::setSuivant(Objet2D* stock) { suivant = stock; };