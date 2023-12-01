// communication.cpp
#include "communication.h"
#include <iostream>

// Impl�mentation de la classe Emetteur
void Emetteur::diffuser(std::function<void(Message)> callback) {
    // Simulation de l'�mission de messages
    for (const auto& message : messages) {
        callback(message);
    }
}

void Emetteur::ajouterMessage(int multiplexeur, const std::string& data) {
    messages.push_back({ multiplexeur, data });
}

// Impl�mentation de la classe Recepteur
Recepteur::Recepteur() {
    // Initialisation de la liste cha�n�e
    messages = new std::list<Message>;
}

Recepteur::~Recepteur() {
    // Lib�ration de la m�moire allou�e pour la liste cha�n�e
    delete messages;
}

void Recepteur::ecouter(Message message) {
    // Traitement du message
    messages->push_back(message);
}

void Recepteur::lireMessages() {
    // Lecture asynchrone des messages
    for (const auto& message : *messages) {
        // Traitement du message
        std::cout << "Message re�u : Multiplexeur = " << message.multiplexeur << ", Data = " << message.data << std::endl;
    }
}
