// communication.cpp
#include "communication.h"
#include <iostream>

// Implémentation de la classe Emetteur
void Emetteur::diffuser(std::function<void(Message)> callback) {
    // Simulation de l'émission de messages
    for (const auto& message : messages) {
        callback(message);
    }
}

void Emetteur::ajouterMessage(int multiplexeur, const std::string& data) {
    messages.push_back({ multiplexeur, data });
}

// Implémentation de la classe Recepteur
Recepteur::Recepteur() {
    // Initialisation de la liste chaînée
    messages = new std::list<Message>;
}

Recepteur::~Recepteur() {
    // Libération de la mémoire allouée pour la liste chaînée
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
        std::cout << "Message reçu : Multiplexeur = " << message.multiplexeur << ", Data = " << message.data << std::endl;
    }
}
