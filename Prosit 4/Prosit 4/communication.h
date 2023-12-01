// communication.h
#pragma once

#include <list>
#include <string>
#include <functional>

// D�finition de la structure Message
struct Message {
    int multiplexeur;
    std::string data;
};

// D�finition de la classe Emetteur
class Emetteur {
public:
    void diffuser(std::function<void(Message)> callback);
    void ajouterMessage(int multiplexeur, const std::string& data);

private:
    std::list<Message> messages;
};

// D�finition de la classe Recepteur
class Recepteur {
public:
    Recepteur();
    ~Recepteur();

    void ecouter(Message message);
    void lireMessages();

private:
    std::list<Message>* messages;
};
