#include "Cl_client.h"
void Cl_client::afficher()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	
	//lecture du element de bdd (formulaire) tableau ?! 

	//requete sql 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select SELECT * FROM client WHERE nomCL = '"+nom +"'and prenonCL ='"+ prenon +"' ; ", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 
}
void Cl_client::modifier()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//lecture du element du formulaire ?! 
	//requete sql (ecraser les données de la personne )
	SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE client SET nomCL ='" + nom + "' , prenonCL='" + prenon + "',adresseCL='"+adresse+"',DateAnivCL= '"+dateAniv+"',DatePremierAchat='"+datepremier+"' WHERE ID " + ID + "; ", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 
}

void Cl_client::ajouter()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	//lecture de l'element du formulaire ?! 
	//requete sql (ajouter l'element dans la base de données ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO client(nomCL,prenonCL,adresseCL,DateAnivCL,DatePremierAchat) VALUES ('" + nom + "' , '" + prenon + "','" + adresse + "','" + dateAniv + "','" + datepremier + "') ", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//ajout dans Vector 
}

void Cl_client::supprimer()
{ //sql connetion 
	String^ constring = "Data Source=LAPTOP-PU1057KM\SQLEXPRESS;Initial Catalog=codelyoko;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	//requete sql (suppression personne ) 
	SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM client WHERE ID = '" + ID + "' ", conDataBase);
	//excution de la requete 
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	//lecture de l'element du formulaire ?! 

	//ajout dans Vector 
}