#pragma once

namespace interface3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
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
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(210, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(311, 281);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(536, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Add Facturation ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(536, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Add Livraison ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(536, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Date De Naissance ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Crée ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(166, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Afficher ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(302, 371);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 45);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Modifier ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(444, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 45);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Supprimer ";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(583, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 45);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Enregister ";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 26);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 26);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 276);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 26);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(540, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 26);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(540, 182);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 26);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(540, 276);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 26);
			this->textBox6->TabIndex = 17;
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 467);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Client";
			this->Text = L"Client";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
