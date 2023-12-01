// main.cpp
#include "communication.h"

int main() {
    // Cr�ation des objets
    Emetteur stationFM;
    Recepteur posteFM;

    // Fonction de callback pour la diffusion des messages
    std::function<void(Message)> callback = std::bind(&Recepteur::ecouter, &posteFM, std::placeholders::_1);

    // Ajout des messages � la station FM
    stationFM.ajouterMessage(1, "Musique FM");
    stationFM.ajouterMessage(2, "Actualit�s FM");
    stationFM.ajouterMessage(1, "Publicit�s FM");

    // Diffusion des messages
    stationFM.diffuser(callback);

    // Lecture asynchrone des messages par le poste FM
    posteFM.lireMessages();

    return 0;
}
