#include <iostream>

using namespace std;

long double f(long double y) {
    return 2 * y;  // Exemple : équation différentielle dy/dx = 2y
}

long double MethodeEuler(long double y0, long double h, int n) {
    long double y = y0;

    for (int i = 1; i <= n; ++i) {
        y = y + h * f(y);
    }

    return y;
}

long double rungeKutta2(long double y0, long double h, int n) {
    long double y = y0;

    for (int i = 1; i <= n; ++i) {
        long double k1 = h * f(y);
        long double k2 = h * f(y + 0.5 * k1);
        y = y + 0.5 * (k1 + k2);
    }

    return y;
}

long double rungeKutta4(long double y0, long double h, int n) {
    long double y = y0;

    for (int i = 1; i <= n; ++i) {
        long double k1 = h * f(y);
        long double k2 = h * f(y + 0.5 * k1);
        long double k3 = h * f(y + 0.5 * k2);
        long double k4 = h * f(y + k3);

        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
    }

    return y;
}

int main() {

    long double y0 = 1.0;
    long double h = 0.1;
    int n = 10;

    long double resultMethodeEuler = MethodeEuler(y0, h, n);
    long double resultRK2 = rungeKutta2(y0, h, n);
    long double resultRK4 = rungeKutta4(y0, h, n);

    cout << "Résultat avec la méthode d'Euler : " << MethodeEuler << endl;
    cout << "Résultat avec la méthode de Runge-Kutta d'ordre 2 : " << resultRK2 << endl;
    cout << "Résultat avec la méthode de Runge-Kutta d'ordre 4 : " << resultRK4 << endl;

    return 0;
}
