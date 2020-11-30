#include "Cl_stock.h"

void Cl_stock::afficher()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element de bdd (formulaire) tableau ?! 

	//requete sql 

	//ajout dans Vector 
}

void Cl_stock::modifier()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de l'element ) 
	//ajout dans Vector
}

void Cl_stock::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	//ajout dans Vector
}

void Cl_stock::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne ) 
	//ajout dans Vector
}