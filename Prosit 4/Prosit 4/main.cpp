// main.cpp
#include "communication.h"

int main() {
    // Création des objets
    Emetteur stationFM;
    Recepteur posteFM;

    // Fonction de callback pour la diffusion des messages
    std::function<void(Message)> callback = std::bind(&Recepteur::ecouter, &posteFM, std::placeholders::_1);

    // Ajout des messages à la station FM
    stationFM.ajouterMessage(1, "Musique FM");
    stationFM.ajouterMessage(2, "Actualités FM");
    stationFM.ajouterMessage(1, "Publicités FM");

    // Diffusion des messages
    stationFM.diffuser(callback);

    // Lecture asynchrone des messages par le poste FM
    posteFM.lireMessages();

    return 0;
}
