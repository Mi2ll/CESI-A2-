#include "linker.h"

using namespace std;

Rectangle::Rectangle() : Objet2D() {};
Rectangle::Rectangle(int tlongueur, int tlargeur) : Objet2D(tlongueur, tlargeur) {};
int Rectangle::getPerimetre() { return (dim1 + dim2) * 2; };
int Rectangle::getAire() { return dim1 * dim2; };
int Rectangle::getLongueur() { return dim1; };
int Rectangle::getLargeur() { return dim2; };

string Rectangle::afficheInfo() {
	return "| C'est un rectangle : Longueur = " + to_string(dim1) +
		" | Largeur = " + to_string(dim2) + " | Perimetre = " + to_string(getPerimetre()) +
		" | Aire = " + to_string(getAire());
};