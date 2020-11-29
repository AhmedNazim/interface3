#pragma once

namespace interface3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(203, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(333, 258);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Réference ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Designiation ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Quantité ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(542, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Seil d\'approvisionnemnt ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(549, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Nature ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(542, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Couleur ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(340, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L" TTC";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(98, 273);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Prix TVA ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 26);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 26);
			this->textBox2->TabIndex = 10;
			
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 26);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(546, 199);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 26);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(546, 132);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(176, 26);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(546, 47);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(176, 26);
			this->textBox6->TabIndex = 14;
		
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(288, 300);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(159, 26);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(61, 300);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(147, 26);
			this->textBox8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(571, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Prix HT";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(536, 300);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(147, 26);
			this->textBox9->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 42);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Crée ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 42);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Afficher ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(306, 366);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 42);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(454, 366);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 42);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Modifier ";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(597, 366);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 42);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Enregistrer ";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 448);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
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
			this->Name = L"Stock";
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
