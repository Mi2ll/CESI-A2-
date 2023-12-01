#pragma once
#include "linker.h"

class stockObjets {

private:
	Objet2D* tete;
	Objet2D* queue;

public:
	stockObjets();

	// Pour éviter les fuites de mémoires :
	~stockObjets();

	void AjouterTete(Objet2D* stock);
	void AjouterQueue(Objet2D* stock);
	void AjouterIndex(Objet2D* stock, int stockindex);

	void deleteTete();
	void deleteQueue();
	void deleteIndex(int stockindex);

	void afficherInfos();
};