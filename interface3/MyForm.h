#pragma once
#include"Client.h"
#include "Commande.h"
#include "Personnel.h"
#include "Statistique.h"
#include "Stock.h"
namespace interface3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Géstion Personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Géstion Client ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(151, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 58);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Géstion Commande";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(151, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Géstion Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(151, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Géstion Statistique";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 381);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ P = gcnew Personnel; 
		P->Show(); 

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Client^ C = gcnew Client;
	C->Show(); 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande^ CM = gcnew Commande;
	CM->Show(); 
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ S = gcnew Stock; 
	S->Show(); 
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Statistique^ STT = gcnew Statistique; 
	STT->Show(); 
}
};
}
