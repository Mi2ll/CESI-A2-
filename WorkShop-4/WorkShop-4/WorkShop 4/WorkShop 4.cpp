#include "linker.h"

int main() {

    stockObjets* objets = new stockObjets();
    Rectangle* rectan;
    Cube* cub;
    char choix;
    int lg, la;

    cout << "Choisir pour l'objet : Rectangle : [R], Cube [C], Sortir [S]" << endl;
    cin >> choix;

    while ((choix != 'S') && (choix != 's')) {
        if ((choix == 'R') || (choix == 'r')) {
            cout << "Longueur du rectangle : "; cin >> lg;
            cout << "Largeur du rectangle : "; cin >> la;
            rectan = new Rectangle(lg, la);
            objets->AjouterQueue(rectan);
        }
        else if ((choix == 'C') || (choix == 'c')) {
            cout << "Cote du cube : "; cin >> lg;
            cub = new Cube(lg);
            objets->AjouterQueue(cub);
        }
        else {
            cout << "Veuillez entrer une valeur correcte" << endl;
        }

        cout << "Choisir pour l'objet : Rectangle : [R], Cube [C], Sortir [S]" << endl;
        cin >> choix;
    }


    // On pourra intégrer les autres méthodes si besoin à savoir AjouterIndex, AjouterTete

    objets->afficherInfos();
    delete objets;

    return 0;
}
