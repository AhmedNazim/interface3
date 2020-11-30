#pragma once
using namespace System;

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;

class Cl_client
{
public:
	void afficher();
	void modifier();
	void ajouter();
	void supprimer();
};