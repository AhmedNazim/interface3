#include "Cl_client.h"
void Cl_client::afficher()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	//lecture du element de bdd (formulaire) tableau ?! 

	//requete sql 

	//ajout dans Vector 
}
void Cl_client::modifier()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de la personne ) 
	//ajout dans Vector 
}

void Cl_client::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	//ajout dans Vector 
}

void Cl_client::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//requete sql (suppression personne ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Article WHERE reference_article = '" + reference + "' ", conDataBase);

	//lecture de l'element du formulaire ?! 

	//ajout dans Vector 
}