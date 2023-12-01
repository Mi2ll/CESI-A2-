
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [Id_clients], [Nom], [Prenom], [Adresse], [Ville], [Cp] FROM [testf].[dbo].[Clients] ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO CLIENTS (Nom, Prenom, Adresse, Ville, Cp) VALUES('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->ville + "','" + this->cp + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM [testf].[dbo].[Clients] " + "WHERE(Id_clients = " + this->getId() + ");";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "      UPDATE [testf].[dbo].[Clients] SET [Nom] = '" + this->nom + "', [Prenom] = '" + this->prenom + "',[Adresse] = '" + this->adresse + "',[Ville] = '" + this->ville + "',[Cp] = '" + this->cp + "' WHERE [Id_clients] = " + this->getId() + ";         ";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Comp_Mappage::CLmapTB::setCp(System::String^ cp)
{
	this->cp = cp;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage::CLmapTB::getCp(void) { return this->cp; }
