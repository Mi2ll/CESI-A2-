#include "exo2.h"

using namespace std;

void C1::AffichageC1(void) {
	cout << "C1" << endl;
}

void C2::AffichageC2(void) {
	cout << "C2" << endl;
}

void C3::AffichageC3(void) {
	cout << "C3" << endl;
}

void gpcs1::gpcs1S1(void) {
	O1.AffichageC1();
	O2.AffichageC2();
}

void gpcs1::gpcs1S2(void) {
	O3.AffichageC3();
}

void gpcs2::gpcs2S1(void) {
	O1.AffichageC1();
	O3.AffichageC3();
}

