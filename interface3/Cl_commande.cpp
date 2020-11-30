#include "Cl_commande.h"

void Cl_commande::afficher()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element de bdd (formulaire) tableau ?! 

	//requete sql 

	//ajout dans Vector 
}

void Cl_commande::modifier()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de l'element ) ana chbab 
	//ajout dans Vector
}

void Cl_commande::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	//ajout dans Vector
}

void Cl_commande::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne ) 
	//ajout dans Vector
}