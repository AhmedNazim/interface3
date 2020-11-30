#include "Cl_stock.h"

void Cl_stock::afficher()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element de bdd (formulaire) tableau ?! 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select SELECT * FROM article WHERE refAR = '" + ref + "' ; ", conDataBase);
	
	// excution de la requete
		conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 
}

void Cl_stock::modifier()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de l'element ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE article SET nomAR='"+nom+"',refAR='"+ref+"',couleurAR='"+couleur+"',natureAR='" +nature+"',", conDataBase);

	// excution de la requete
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector
}

void Cl_stock::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("", conDataBase);
	
	// excution de la requete
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector
}

void Cl_stock::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture de l'element du formulaire ?! 
	//requete sql (suppression personne ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("", conDataBase);

	// excution de la requete
		conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector
}