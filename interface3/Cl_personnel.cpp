
#include "Cl_personnel.h"
void Cl_personnel::afficher()
{
	//sql conection
	String^ constring = "Data Source=LAPTOP-PU1057KM\\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//requete sql
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELCET * FROM personnel WHERE nomPER= '"+nom+"' and prenonPER='"+ prenon+"'", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
}
void Cl_personnel::modifier()
{    //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de la personne ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE personneel SET nomPER='"+nom+"',prenomPER='"+prenom+"',supH='"+sup+"',DateAmb='"+date+"',ID_personnel=ID WHERE nom ='" sup"');", conDataBase)
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 


}

void Cl_personnel::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO personne(nomPER, prenomPER, supH, DateAmb, ID_personnel) VALUES ('" + nom + "',"+prenom+"','" + sup + "'," + date + "ID_personnel=ID WHERE nom ='" sup"')", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 




}
void Cl_personnel::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne )
	SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM personnel WHERE ID = '" + ID + "' ", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 
}