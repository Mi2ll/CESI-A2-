#include "CLmapTB.h"
#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(int clientId)
{
	// Appeler la méthode Delete de CLmapTB avec l'ID
	this->oMappTB->setId(clientId);
	System::String^ sql = this->oMappTB->Delete();

	// Exécution de la requête SQL
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnePersonne(System::String^ nom, System::String^ prenom, int clientId, System::String^ adresse, System::String^ ville, System::String^ cp) {
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setId(clientId);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}