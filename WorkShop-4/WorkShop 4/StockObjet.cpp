#include "stockObjet.h"
#include <iostream>

using namespace std;

stockObjets::stockObjets() {
	tete = queue = nullptr;
};

stockObjets::~stockObjets() {
	Objet2D* stocktemp;
	while (tete != nullptr)
	{
		stocktemp = tete;
		tete = stocktemp->getSuivant();
		delete stocktemp;
	}
};

// Permet d'ajouter un élement en tête à la liste

void stockObjets::AjouterTete(Objet2D* stock) {
	stock->setSuivant(tete);
	tete = stock;
	if (queue == nullptr)
		queue = tete;
};

// Fonction qui permet de supprimer l'élement tête de la liste

void stockObjets::deleteTete() {
	Objet2D* stocktemp = tete;
	tete = tete->getSuivant();
	delete stocktemp;
};

// Permet d'ajouter un élement en tête à la queue

void stockObjets::AjouterQueue(Objet2D* stock) {
	stock->setSuivant(nullptr);
	if (queue != nullptr)
		queue->setSuivant(stock);
	else
		tete = stock;
	queue = stock;
};

// Fonction qui permet de supprimer l'élement queue de la liste

void stockObjets::deleteQueue() {
	Objet2D* stocktemp = tete;
	while (stocktemp->getSuivant() != queue)
		stocktemp = stocktemp->getSuivant();
	queue = stocktemp;
	stocktemp = stocktemp->getSuivant();
	queue->setSuivant(nullptr);
	delete stocktemp;
};

// Permet d'insérer un objet à une position spécifique dans la liste 

void stockObjets::AjouterIndex(Objet2D* stock, int stockindex) {
	int i = 0;
	Objet2D* stocktemp = tete;
	while (i < stockindex - 1) {
		stocktemp = stocktemp->getSuivant();
		i++;
	}
	stock->setSuivant(stocktemp->getSuivant());
	stocktemp->setSuivant(stock);
};


void stockObjets::deleteIndex(int stockindex) {
	int i = 0;
	Objet2D* stocktemp1 = tete;
	while (i < stockindex - 1) {
		stocktemp1 = stocktemp1->getSuivant();
		i++;
	}
	Objet2D* stocktemp2 = stocktemp1->getSuivant();
	stocktemp1->setSuivant(stocktemp2->getSuivant());
	delete stocktemp2;
};

void stockObjets::afficherInfos() {
	Objet2D* stocktemp = tete;
	int i = 0;
	while (stocktemp != nullptr) {
		cout << "Numero : " << i + 1 << " " << stocktemp->afficheInfo() << endl;
		stocktemp = stocktemp->getSuivant();
		i++;
	};
};