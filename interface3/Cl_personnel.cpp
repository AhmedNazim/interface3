
#include "Cl_personnel.h"
void Cl_personnel::afficher()
{
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM personnel", conDataBase);

	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
}
void Cl_personnel::modifier()
{    //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de la personne ) 
	//ajout dans Vector 


}

void Cl_personnel::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	//ajout dans Vector 




}
void Cl_personnel::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=code lyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne ) 
	//ajout dans Vector 
}