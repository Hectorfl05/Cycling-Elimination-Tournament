#pragma once
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <limits> 
#include <algorithm>
#include <random>
#include "Perdedores.h"
#include "Ciclistas.h"


namespace Lab4HectorFlores1199923 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			ciclistas = new vector<Ciclista>;
			perdedores = new vector<Perdedores>;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Ingreso;
	protected:
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ TxtClub;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Vivos;
	private: System::Windows::Forms::Label^ lb7;
	private: System::Windows::Forms::DataGridView^ TablaJugadores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	private:
		
		vector<Ciclista>* ciclistas;
		vector<Perdedores>* perdedores;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb2;





	private: System::Windows::Forms::Button^ Start;
	private: System::Windows::Forms::Label^ label2;







	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb5;









	private: System::Windows::Forms::Label^ lb8;
	private: System::Windows::Forms::Label^ Last;
	private: System::Windows::Forms::Label^ lb11;



















	private: System::Windows::Forms::Button^ Velocidad;
	private: System::Windows::Forms::DataGridView^ Eliminados;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridView^ Participantes1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridView^ Finalistas1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::Button^ Persecucion;

private: System::Windows::Forms::DataGridView^ Participantes2;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridView^ Finalistas2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::Label^ Last2;
private: System::Windows::Forms::Button^ reinicio;
private: System::Windows::Forms::Label^ Winner;
private: System::Windows::Forms::Label^ clubwinner;
private: System::Windows::Forms::Label^ Grande;

private: System::Windows::Forms::Label^ clubganador;







	private:



		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ingreso = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtClub = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Vivos = (gcnew System::Windows::Forms::Label());
			this->lb7 = (gcnew System::Windows::Forms::Label());
			this->TablaJugadores = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			this->Last = (gcnew System::Windows::Forms::Label());
			this->lb11 = (gcnew System::Windows::Forms::Label());
			this->Velocidad = (gcnew System::Windows::Forms::Button());
			this->Eliminados = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Participantes1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Finalistas1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Persecucion = (gcnew System::Windows::Forms::Button());
			this->Participantes2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Finalistas2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Last2 = (gcnew System::Windows::Forms::Label());
			this->reinicio = (gcnew System::Windows::Forms::Button());
			this->Winner = (gcnew System::Windows::Forms::Label());
			this->clubwinner = (gcnew System::Windows::Forms::Label());
			this->Grande = (gcnew System::Windows::Forms::Label());
			this->clubganador = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaJugadores))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Eliminados))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Participantes1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Finalistas1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Participantes2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Finalistas2))->BeginInit();
			this->SuspendLayout();
			// 
			// Ingreso
			// 
			this->Ingreso->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingreso->Location = System::Drawing::Point(639, 111);
			this->Ingreso->Name = L"Ingreso";
			this->Ingreso->Size = System::Drawing::Size(85, 28);
			this->Ingreso->TabIndex = 25;
			this->Ingreso->Text = L"Ingresar";
			this->Ingreso->UseVisualStyleBackColor = true;
			this->Ingreso->Click += gcnew System::EventHandler(this, &MyForm::Ingreso_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(419, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 20);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Prueba:";
			// 
			// TxtClub
			// 
			this->TxtClub->Location = System::Drawing::Point(276, 116);
			this->TxtClub->Name = L"TxtClub";
			this->TxtClub->Size = System::Drawing::Size(117, 22);
			this->TxtClub->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(222, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Club:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(104, 118);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nombre:";
			// 
			// Vivos
			// 
			this->Vivos->AutoSize = true;
			this->Vivos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vivos->Location = System::Drawing::Point(15, 70);
			this->Vivos->Name = L"Vivos";
			this->Vivos->Size = System::Drawing::Size(189, 22);
			this->Vivos->TabIndex = 18;
			this->Vivos->Text = L"Datos del participante:";
			// 
			// lb7
			// 
			this->lb7->AutoSize = true;
			this->lb7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb7->Location = System::Drawing::Point(453, 39);
			this->lb7->Name = L"lb7";
			this->lb7->Size = System::Drawing::Size(359, 32);
			this->lb7->TabIndex = 17;
			this->lb7->Text = L"Competencia de Ciclismo";
			// 
			// TablaJugadores
			// 
			this->TablaJugadores->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->TablaJugadores->BackgroundColor = System::Drawing::SystemColors::Control;
			this->TablaJugadores->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TablaJugadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TablaJugadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->TablaJugadores->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->TablaJugadores->Location = System::Drawing::Point(12, 230);
			this->TablaJugadores->Name = L"TablaJugadores";
			this->TablaJugadores->ReadOnly = true;
			this->TablaJugadores->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TablaJugadores->RowHeadersVisible = false;
			this->TablaJugadores->RowHeadersWidth = 51;
			this->TablaJugadores->RowTemplate->Height = 24;
			this->TablaJugadores->Size = System::Drawing::Size(532, 126);
			this->TablaJugadores->TabIndex = 26;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Club";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Prueba";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Puntos";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Velocidad", L"Persecución" });
			this->comboBox1->Location = System::Drawing::Point(492, 114);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Competidores";
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb2->Location = System::Drawing::Point(12, 372);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(91, 20);
			this->lb2->TabIndex = 30;
			this->lb2->Text = L"Eliminados";
			this->lb2->Visible = false;
			// 
			// Start
			// 
			this->Start->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Start->Location = System::Drawing::Point(432, 597);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(240, 38);
			this->Start->TabIndex = 31;
			this->Start->Text = L"Terminar Fase de inicio";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(671, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 20);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Participantes de la prueba";
			this->label2->Visible = false;
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb3->Location = System::Drawing::Point(886, 132);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(141, 32);
			this->lb3->TabIndex = 34;
			this->lb3->Text = L"Velocidad";
			this->lb3->Visible = false;
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb5->Location = System::Drawing::Point(671, 349);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(81, 20);
			this->lb5->TabIndex = 35;
			this->lb5->Text = L"Finalistas";
			this->lb5->Visible = false;
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb8->Location = System::Drawing::Point(635, 531);
			this->lb8->Name = L"lb8";
			this->lb8->Size = System::Drawing::Size(249, 20);
			this->lb8->TabIndex = 37;
			this->lb8->Text = L"Jugador Eliminado en la prueba:";
			this->lb8->Visible = false;
			this->lb8->Click += gcnew System::EventHandler(this, &MyForm::lb8_Click);
			// 
			// Last
			// 
			this->Last->AutoSize = true;
			this->Last->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Last->Location = System::Drawing::Point(926, 531);
			this->Last->Name = L"Last";
			this->Last->Size = System::Drawing::Size(149, 20);
			this->Last->TabIndex = 39;
			this->Last->Text = L"______________";
			this->Last->Visible = false;
			// 
			// lb11
			// 
			this->lb11->AutoSize = true;
			this->lb11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb11->Location = System::Drawing::Point(886, 132);
			this->lb11->Name = L"lb11";
			this->lb11->Size = System::Drawing::Size(171, 32);
			this->lb11->TabIndex = 42;
			this->lb11->Text = L"Persecución";
			this->lb11->Visible = false;
			// 
			// Velocidad
			// 
			this->Velocidad->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Velocidad->Location = System::Drawing::Point(432, 597);
			this->Velocidad->Name = L"Velocidad";
			this->Velocidad->Size = System::Drawing::Size(240, 38);
			this->Velocidad->TabIndex = 48;
			this->Velocidad->Text = L"Prueba de Velocidad";
			this->Velocidad->UseVisualStyleBackColor = true;
			this->Velocidad->Visible = false;
			this->Velocidad->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Eliminados
			// 
			this->Eliminados->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Eliminados->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Eliminados->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Eliminados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Eliminados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->Eliminados->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Eliminados->Location = System::Drawing::Point(19, 404);
			this->Eliminados->Name = L"Eliminados";
			this->Eliminados->ReadOnly = true;
			this->Eliminados->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Eliminados->RowHeadersVisible = false;
			this->Eliminados->RowHeadersWidth = 51;
			this->Eliminados->RowTemplate->Height = 24;
			this->Eliminados->Size = System::Drawing::Size(525, 126);
			this->Eliminados->TabIndex = 49;
			this->Eliminados->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Club";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Prueba";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Puntos";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Participantes1
			// 
			this->Participantes1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Participantes1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Participantes1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Participantes1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Participantes1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->Participantes1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Participantes1->Location = System::Drawing::Point(675, 205);
			this->Participantes1->Name = L"Participantes1";
			this->Participantes1->ReadOnly = true;
			this->Participantes1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Participantes1->RowHeadersVisible = false;
			this->Participantes1->RowHeadersWidth = 51;
			this->Participantes1->RowTemplate->Height = 24;
			this->Participantes1->Size = System::Drawing::Size(532, 126);
			this->Participantes1->TabIndex = 50;
			this->Participantes1->Visible = false;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Club";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Prueba";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Puntos";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// Finalistas1
			// 
			this->Finalistas1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Finalistas1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Finalistas1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Finalistas1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Finalistas1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->Finalistas1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Finalistas1->Location = System::Drawing::Point(675, 388);
			this->Finalistas1->Name = L"Finalistas1";
			this->Finalistas1->ReadOnly = true;
			this->Finalistas1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Finalistas1->RowHeadersVisible = false;
			this->Finalistas1->RowHeadersWidth = 51;
			this->Finalistas1->RowTemplate->Height = 24;
			this->Finalistas1->Size = System::Drawing::Size(532, 126);
			this->Finalistas1->TabIndex = 51;
			this->Finalistas1->Visible = false;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Club";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Prueba";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Puntos";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// Persecucion
			// 
			this->Persecucion->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Persecucion->Location = System::Drawing::Point(432, 597);
			this->Persecucion->Name = L"Persecucion";
			this->Persecucion->Size = System::Drawing::Size(240, 38);
			this->Persecucion->TabIndex = 52;
			this->Persecucion->Text = L"Prueba de Persecución";
			this->Persecucion->UseVisualStyleBackColor = true;
			this->Persecucion->Visible = false;
			this->Persecucion->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// Participantes2
			// 
			this->Participantes2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Participantes2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Participantes2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Participantes2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Participantes2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			this->Participantes2->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Participantes2->Location = System::Drawing::Point(675, 205);
			this->Participantes2->Name = L"Participantes2";
			this->Participantes2->ReadOnly = true;
			this->Participantes2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Participantes2->RowHeadersVisible = false;
			this->Participantes2->RowHeadersWidth = 51;
			this->Participantes2->RowTemplate->Height = 24;
			this->Participantes2->Size = System::Drawing::Size(532, 126);
			this->Participantes2->TabIndex = 53;
			this->Participantes2->Visible = false;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Club";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Prueba";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Puntos";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			// 
			// Finalistas2
			// 
			this->Finalistas2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Finalistas2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Finalistas2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Finalistas2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Finalistas2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20
			});
			this->Finalistas2->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Finalistas2->Location = System::Drawing::Point(675, 388);
			this->Finalistas2->Name = L"Finalistas2";
			this->Finalistas2->ReadOnly = true;
			this->Finalistas2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Finalistas2->RowHeadersVisible = false;
			this->Finalistas2->RowHeadersWidth = 51;
			this->Finalistas2->RowTemplate->Height = 24;
			this->Finalistas2->Size = System::Drawing::Size(532, 126);
			this->Finalistas2->TabIndex = 54;
			this->Finalistas2->Visible = false;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Club";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Prueba";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Puntos";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			// 
			// Last2
			// 
			this->Last2->AutoSize = true;
			this->Last2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Last2->Location = System::Drawing::Point(926, 531);
			this->Last2->Name = L"Last2";
			this->Last2->Size = System::Drawing::Size(149, 20);
			this->Last2->TabIndex = 55;
			this->Last2->Text = L"______________";
			this->Last2->Visible = false;
			// 
			// reinicio
			// 
			this->reinicio->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reinicio->Location = System::Drawing::Point(432, 597);
			this->reinicio->Name = L"reinicio";
			this->reinicio->Size = System::Drawing::Size(240, 38);
			this->reinicio->TabIndex = 57;
			this->reinicio->Text = L"Reiniciar";
			this->reinicio->UseVisualStyleBackColor = true;
			this->reinicio->Visible = false;
			this->reinicio->Click += gcnew System::EventHandler(this, &MyForm::reinicio_Click);
			// 
			// Winner
			// 
			this->Winner->AutoSize = true;
			this->Winner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Winner->Location = System::Drawing::Point(633, 283);
			this->Winner->Name = L"Winner";
			this->Winner->Size = System::Drawing::Size(225, 36);
			this->Winner->TabIndex = 58;
			this->Winner->Text = L"El Ganador Es: ";
			this->Winner->Visible = false;
			// 
			// clubwinner
			// 
			this->clubwinner->AutoSize = true;
			this->clubwinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubwinner->Location = System::Drawing::Point(633, 349);
			this->clubwinner->Name = L"clubwinner";
			this->clubwinner->Size = System::Drawing::Size(70, 36);
			this->clubwinner->TabIndex = 59;
			this->clubwinner->Text = L"Con";
			this->clubwinner->Visible = false;
			// 
			// Grande
			// 
			this->Grande->AutoSize = true;
			this->Grande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grande->Location = System::Drawing::Point(854, 283);
			this->Grande->Name = L"Grande";
			this->Grande->Size = System::Drawing::Size(231, 36);
			this->Grande->TabIndex = 60;
			this->Grande->Text = L"____________";
			this->Grande->Visible = false;
			// 
			// clubganador
			// 
			this->clubganador->AutoSize = true;
			this->clubganador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubganador->Location = System::Drawing::Point(730, 349);
			this->clubganador->Name = L"clubganador";
			this->clubganador->Size = System::Drawing::Size(231, 36);
			this->clubganador->TabIndex = 61;
			this->clubganador->Text = L"____________";
			this->clubganador->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1293, 667);
			this->Controls->Add(this->clubganador);
			this->Controls->Add(this->Grande);
			this->Controls->Add(this->clubwinner);
			this->Controls->Add(this->Winner);
			this->Controls->Add(this->reinicio);
			this->Controls->Add(this->Last2);
			this->Controls->Add(this->Finalistas2);
			this->Controls->Add(this->Participantes2);
			this->Controls->Add(this->Persecucion);
			this->Controls->Add(this->Finalistas1);
			this->Controls->Add(this->Participantes1);
			this->Controls->Add(this->Eliminados);
			this->Controls->Add(this->Velocidad);
			this->Controls->Add(this->lb11);
			this->Controls->Add(this->Last);
			this->Controls->Add(this->lb8);
			this->Controls->Add(this->lb5);
			this->Controls->Add(this->lb3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->lb2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->TablaJugadores);
			this->Controls->Add(this->Ingreso);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtClub);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Vivos);
			this->Controls->Add(this->lb7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaJugadores))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Eliminados))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Participantes1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Finalistas1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Participantes2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Finalistas2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ingreso_Click(System::Object^ sender, System::EventArgs^ e) {

		//Convertidor de String^ a string de los text box, ya que estos trabajan con String^ y necesito string para que concuerde con la Struct Ciclistas
		std::string nombre = msclr::interop::marshal_as<std::string>(txtName->Text);
		std::string club = msclr::interop::marshal_as<std::string>(TxtClub->Text);

		

		//Verifica si el textbox de nombre y de club estan vacios
		if (!nombre.empty() && !club.empty())
		{
			//si no lo estan,crea una instancia de la struct Ciclistas, con los atributos deseados
			Ciclista nuevo;
			nuevo.nombre = nombre;
			nuevo.club = club;
			nuevo.puntos = 0;
			nuevo.cont = 0;

			//asigna al participante el tipo de prueba en que participara
			if (comboBox1->Text == "Velocidad")
			{
				nuevo.prueba = "Velocidad";
			}
			else if (comboBox1->Text == "Persecución")
			{
				nuevo.prueba = "Persecución";
			}

			String^ pruebaString = gcnew String(nuevo.prueba.c_str());

			//Asigna un espacio nuevo al vector global de Ciclistas
			ciclistas->push_back(nuevo);
			
			//Añadir renglón
			int n = TablaJugadores->Rows->Add();

			TablaJugadores->Rows[n]->Cells[0]->Value = txtName->Text;
			TablaJugadores->Rows[n]->Cells[1]->Value = TxtClub->Text;
			TablaJugadores->Rows[n]->Cells[2]->Value = pruebaString;
			TablaJugadores->Rows[n]->Cells[3]->Value = nuevo.puntos;

			txtName->Text = "";
			TxtClub->Text = "";

		}
		else
		{
			MessageBox::Show("Llene todos los campos");
		}




	}
private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {

	//Creador de vectores para velocistas y perseguidores para conocer cuantos participantes hay para cada prueba
	vector<Ciclista> Velocistas;
	vector<Ciclista> Perseguidores;

	for(const Ciclista& ciclistaparticipante : *ciclistas)
	{
		if(ciclistaparticipante.prueba == "Velocidad")
		{
			Velocistas.push_back(ciclistaparticipante);
		}else if(ciclistaparticipante.prueba == "Persecución")
		{
			Perseguidores.push_back(ciclistaparticipante);	
		}
	}

	
	//Verifica que si haya suficientes participantes para iniciar
	if (Velocistas.size() < 4 || Perseguidores.size() < 3)	
	{
		MessageBox::Show("Error, no ha ingresado los suficientes participantes");

	}
	else
	{
		//Visiblidad de Textbox, label y DataGridView para simular la sensacion de avance y dinanismo
		Velocidad->Visible = true;
		lb2->Visible = true;
		Eliminados->Visible = true;
	}
		

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Crea un vector de struct Ciclistas para los competidores y una Stuct Perdedores para los eliminados
	vector<Ciclista> Competidores;
	Perdedores  newperdedor;

	//Foreach que recorre el vector ciclista, y si la prueba asignada es "Velocidad",  añade el elemento al vector Competidores.
	for (const Ciclista& ciclista : *ciclistas)
	{
		if (ciclista.prueba == "Velocidad")
		{
			Competidores.push_back(ciclista);

		}
	}

	if (Competidores.size() >= 4)
	{
	
	//Visiblidad de Textbox, label y DataGridView para simular la sensacion de avance y dinanismo

	//DatagridView
	Participantes1->Visible = true;
	Finalistas1->Visible = true;
	Participantes2->Visible = false;
	Finalistas2->Visible = false;

	//labels
	lb3->Visible = true;
	Last->Visible = true;
	label2->Visible = true;
	lb5->Visible = true;
	lb8->Visible = true;
	lb11->Visible = false;

	//botones
	Velocidad->Visible = false;
	Persecucion->Visible = true;

	//Crea la semilla para el valor aleatorio
	std::random_device rd;
	std::default_random_engine rng(rd());

	Perdedores  newperdedor;

	Participantes1->Rows->Clear();
	Finalistas1->Rows->Clear();
	Eliminados->Rows->Clear();

		//Variable necesaria para encontrar el valor minimo del atributo de participaciones entre los competidores
		int minimoCont = INT_MAX;

		//Foreach que recorre el vector Competidores, con la condicion de que si el numero encontrado en el atributo es menor que el parametro, ese numero se vuelve el minimo.
		for (const Ciclista& Competidor : Competidores) {
			if (Competidor.cont < minimoCont) {

				minimoCont = Competidor.cont;
			}
		}

		//Crea un vector de Ciclista con los elementos que tengan el minimo valor de participaciones, es decir, los ciclistas que han participado menos veces en las competiciones
		std::vector<Ciclista> ciclistasConMinCont;

		//Identifica los ciclistas que han participado menos veces y los añade al vector de ciclistas con menos participaciones
		for (const Ciclista& Competidor : Competidores)
		{
			if (minimoCont == Competidor.cont)
			{
		
				ciclistasConMinCont.push_back(Competidor);
			}
		}

		//Si el vector no cuenta con 4 elementos, que es el minimo para realizar la prueba, recorre nuevamente el vector Competidores y le suma +1 al parametro minimo
		//para seguir encontrando los elementos que tengan el minimo valor del atributo, hasta que el tamaño del vector sea igual 4
		if (ciclistasConMinCont.size() < 4)
		{
			while (ciclistasConMinCont.size() < 4)
			{
				for (const Ciclista& Competidor : Competidores)
				{
					if (Competidor.cont == minimoCont + 1)

						ciclistasConMinCont.push_back(Competidor);
				}

				minimoCont++;
			}
		} 

		if(ciclistasConMinCont.size() > 4)
		{

			ciclistasConMinCont.erase(ciclistasConMinCont.begin() + 4, ciclistasConMinCont.end());

		}

		//Barajea los participantes del vector, para simular la aleatoriedad
		std::shuffle(ciclistasConMinCont.begin(), ciclistasConMinCont.end(), rng);


		//Foreach que recorre el vector CiclistasConMinCont bareajdo y segun el nuevo orden les va a asignando las posiciones de primero, segundo... asignandole los puntos correspondientes
		for (Ciclista& ciclista : *ciclistas)
		{
			if (ciclista.nombre == ciclistasConMinCont[0].nombre)
			{
				ciclista.puntos += 4;
				ciclista.cont += 1;

			}

			if (ciclista.nombre == ciclistasConMinCont[1].nombre)
			{
				ciclista.puntos += 1;
				ciclista.cont += 1;
			}

			if (ciclista.nombre == ciclistasConMinCont[2].nombre)
			{
				ciclista.cont += 1;
			}

			if (ciclista.nombre == ciclistasConMinCont[3].nombre)
			{
				//Al ultimo elemento del vector, que seria el ciclista que quedo cuarto, se añade al vector Perdedores, y se borra del Vector Ciclistas
				newperdedor.nombre1 = ciclista.nombre;
				newperdedor.club1 = ciclista.club;
				newperdedor.prueba1 = ciclista.prueba;
				newperdedor.puntos1 = ciclista.puntos;
				newperdedor.cont1 = ciclista.cont;

				String^ eliminated = gcnew String(newperdedor.nombre1.c_str());

				Last->Text = eliminated;

				perdedores->push_back(newperdedor);
			}
		}

		//iterador para encontrar que elemento cumple con la condicion en el vector
		for (auto it = ciclistas->begin(); it != ciclistas->end(); ++it) {
			if (it->nombre == ciclistasConMinCont[3].nombre) {
				ciclistas->erase(it);
				break;
			}
		}

		//Foreach que recorre el vector ciclistasConMinCont, realizando conversiones para mostrar los datos en una listbox, de los participantes de la prueba
		for (const Ciclista& ciclistaMin : ciclistasConMinCont)
		{

			String^ nombre = gcnew String(ciclistaMin.nombre.c_str());
			String^ club = gcnew String(ciclistaMin.club.c_str());
			String^ puntos = Convert::ToString(ciclistaMin.puntos);
			String^ prueba = gcnew String(ciclistaMin.prueba.c_str());


			//Añadir un renglon
			int n = Participantes1->Rows->Add();

			Participantes1->Rows[n]->Cells[0]->Value = nombre;
			Participantes1->Rows[n]->Cells[1]->Value = club;
			Participantes1->Rows[n]->Cells[2]->Value = prueba;
			Participantes1->Rows[n]->Cells[3]->Value = puntos;

		}

		//Foreach que recorre el vector Ciclista, realizando conversiones para mostrar los datos en una listbox, de los Finalistas

		ciclistasConMinCont.erase(ciclistasConMinCont.begin() + 3);
		ciclistasConMinCont[0].puntos = 4;
		ciclistasConMinCont[1].puntos = 1;

		for (const Ciclista& ciclistaMin : ciclistasConMinCont)
		{
			String^ nombre = gcnew String(ciclistaMin.nombre.c_str());
			String^ club = gcnew String(ciclistaMin.club.c_str());
			String^ puntos = Convert::ToString(ciclistaMin.puntos);
			String^ prueba = gcnew String(ciclistaMin.prueba.c_str());

			int n = Finalistas1->Rows->Add();

			Finalistas1->Rows[n]->Cells[0]->Value = nombre;
			Finalistas1->Rows[n]->Cells[1]->Value = club;
			Finalistas1->Rows[n]->Cells[2]->Value = prueba;
			Finalistas1->Rows[n]->Cells[3]->Value = puntos;
		}

		for (const Perdedores& perdedor : *perdedores)
		{
			String^ nombre = gcnew String(perdedor.nombre1.c_str());
			String^ club = gcnew String(perdedor.club1.c_str());
			String^ puntos = Convert::ToString(perdedor.puntos1);
			String^ prueba = gcnew String(perdedor.prueba1.c_str());

			int n = Eliminados->Rows->Add();

			Eliminados->Rows[n]->Cells[0]->Value = nombre;
			Eliminados->Rows[n]->Cells[1]->Value = club;
			Eliminados->Rows[n]->Cells[2]->Value = prueba;
			Eliminados->Rows[n]->Cells[3]->Value = puntos;
		}


		TablaJugadores->Rows->Clear();

		for (const Ciclista& ciclista : *ciclistas)
		{
			String^ nombre = gcnew String(ciclista.nombre.c_str());
			String^ club = gcnew String(ciclista.club.c_str());
			String^ puntos = Convert::ToString(ciclista.puntos);
			String^ prueba = gcnew String(ciclista.prueba.c_str());

			int n = TablaJugadores->Rows->Add();

			TablaJugadores->Rows[n]->Cells[0]->Value = nombre;
			TablaJugadores->Rows[n]->Cells[1]->Value = club;
			TablaJugadores->Rows[n]->Cells[2]->Value = prueba;
			TablaJugadores->Rows[n]->Cells[3]->Value = puntos;
		}

		Competidores.clear();
		ciclistasConMinCont.clear();
		

	}else
	{
		
		// Parametro de minimo
			int maxint = INT_MIN;

		//Botones y labels para el ganador
		Grande->Visible = true;
		clubganador->Visible = true;
		Winner->Visible = true;
		clubwinner->Visible = true;
		reinicio->Visible = true;

		//DataGridView
		Participantes1->Visible = false;
		Finalistas1->Visible = false;
		Participantes2->Visible = false;
		Finalistas2->Visible = false;

		//labels
		lb3->Visible = false;
		Last->Visible = false;
		label2->Visible = false;
		lb5->Visible = false;
		lb8->Visible = false;
		lb11->Visible = false;
		Last2->Visible = false;

		//botones
		Velocidad->Visible = false;
		Persecucion->Visible = false;


			for(Ciclista ganador : *ciclistas)
			{
				if(ganador.puntos > maxint)
				{
					maxint = ganador.puntos;
				}
			}
	
			for (Ciclista ganador : *ciclistas)
			{
				if (maxint == ganador.puntos)
				{
					String^ Win = gcnew String(ganador.nombre.c_str());
					String^ WinClub = Convert::ToString(ganador.puntos);

					Grande->Text = Win;
					clubganador->Text = WinClub + " Puntos";
				}
			}
	}

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//Se repite el mismo procedimiento para la prueba Persecucion

	vector<Ciclista> Competidores;

	for (const Ciclista& ciclista : *ciclistas)
	{
		if (ciclista.prueba == "Persecución")
		{
			Competidores.push_back(ciclista);
		}
	}

	if (Competidores.size() >= 3)
	{

		Participantes1->Visible = false;
		Finalistas1->Visible = false;
		Participantes2->Visible = true;
		Finalistas2->Visible = true;
		Last2->Visible = true;
		Last->Visible = false;
		lb3->Visible = false;
		lb11->Visible = true;
		Velocidad->Visible = true;
		Persecucion->Visible = false;

		std::random_device rd;
		std::default_random_engine rng(rd());

		Perdedores  newperdedor;

		Participantes2->Rows->Clear();
		Finalistas2->Rows->Clear();
		Eliminados->Rows->Clear();

		int minimoCont = INT_MAX;

		for (const Ciclista Competidor : Competidores) {
			if (Competidor.cont < minimoCont) {

				minimoCont = Competidor.cont;
			}
		}


		std::vector<Ciclista> ciclistasConMinCont;


		for (const Ciclista Competidor : Competidores)
		{
			if (minimoCont == Competidor.cont)
			{
				ciclistasConMinCont.push_back(Competidor);
			}
		}


		if (ciclistasConMinCont.size() < 3)
		{
			while (ciclistasConMinCont.size() < 3)
			{
				for (const Ciclista Competidor : Competidores)
				{
					if (Competidor.cont == minimoCont + 1)

						ciclistasConMinCont.push_back(Competidor);
				}

				minimoCont++;
			}
		}
		
		if (ciclistasConMinCont.size() > 3)
		{

			ciclistasConMinCont.erase(ciclistasConMinCont.begin() + 3, ciclistasConMinCont.end());

		}


		std::shuffle(ciclistasConMinCont.begin(), ciclistasConMinCont.end(), rng);


		for (Ciclista& ciclista : *ciclistas)
		{
			if (ciclista.nombre == ciclistasConMinCont[0].nombre)
			{
				ciclista.puntos += 3;
				ciclista.cont += 1;
			}

			if (ciclista.nombre == ciclistasConMinCont[1].nombre)
			{
				ciclista.cont += 1;
			}

			if (ciclista.nombre == ciclistasConMinCont[2].nombre)
			{
				newperdedor.nombre1 = ciclista.nombre;
				newperdedor.club1 = ciclista.club;
				newperdedor.prueba1 = ciclista.prueba;
				newperdedor.puntos1 = ciclista.puntos;
				newperdedor.cont1 = ciclista.cont;

				String^ eliminated = gcnew String(newperdedor.nombre1.c_str());

				Last2->Text = eliminated;

				perdedores->push_back(newperdedor);

			}
		}


		for (auto it = ciclistas->begin(); it != ciclistas->end(); ++it) {
			if (it->nombre == ciclistasConMinCont[2].nombre) {
				ciclistas->erase(it);
				break;
			}
		}


		for (const Ciclista& ciclistaMin : ciclistasConMinCont)
		{

			String^ nombre = gcnew String(ciclistaMin.nombre.c_str());
			String^ club = gcnew String(ciclistaMin.club.c_str());
			String^ puntos = Convert::ToString(ciclistaMin.puntos);
			String^ prueba = gcnew String(ciclistaMin.prueba.c_str());


			//Añadir un renglon
			int n = Participantes2->Rows->Add();

			Participantes2->Rows[n]->Cells[0]->Value = nombre;
			Participantes2->Rows[n]->Cells[1]->Value = club;
			Participantes2->Rows[n]->Cells[2]->Value = prueba;
			Participantes2->Rows[n]->Cells[3]->Value = puntos;

		}

		ciclistasConMinCont.erase(ciclistasConMinCont.begin() + 2);
		ciclistasConMinCont[0].puntos = 3;


		for (const Ciclista& ciclistaMin : ciclistasConMinCont)
		{
			String^ nombre = gcnew String(ciclistaMin.nombre.c_str());
			String^ club = gcnew String(ciclistaMin.club.c_str());
			String^ puntos = Convert::ToString(ciclistaMin.puntos);
			String^ prueba = gcnew String(ciclistaMin.prueba.c_str());


			//Añadir un renglon
			int n = Finalistas2->Rows->Add();

			Finalistas2->Rows[n]->Cells[0]->Value = nombre;
			Finalistas2->Rows[n]->Cells[1]->Value = club;
			Finalistas2->Rows[n]->Cells[2]->Value = prueba;
			Finalistas2->Rows[n]->Cells[3]->Value = puntos;


		}

		

		for (const Perdedores& perdedor : *perdedores)
		{
			String^ nombre = gcnew String(perdedor.nombre1.c_str());
			String^ club = gcnew String(perdedor.club1.c_str());
			String^ puntos = Convert::ToString(perdedor.puntos1);
			String^ prueba = gcnew String(perdedor.prueba1.c_str());


			int n = Eliminados->Rows->Add();

			Eliminados->Rows[n]->Cells[0]->Value = nombre;
			Eliminados->Rows[n]->Cells[1]->Value = club;
			Eliminados->Rows[n]->Cells[2]->Value = prueba;
			Eliminados->Rows[n]->Cells[3]->Value = puntos;

		}

		TablaJugadores->Rows->Clear();

		for (const Ciclista& ciclista : *ciclistas)
		{

			String^ nombre = gcnew String(ciclista.nombre.c_str());
			String^ club = gcnew String(ciclista.club.c_str());
			String^ puntos = Convert::ToString(ciclista.puntos);
			String^ prueba = gcnew String(ciclista.prueba.c_str());

			int n = TablaJugadores->Rows->Add();

			TablaJugadores->Rows[n]->Cells[0]->Value = nombre;
			TablaJugadores->Rows[n]->Cells[1]->Value = club;
			TablaJugadores->Rows[n]->Cells[2]->Value = prueba;
			TablaJugadores->Rows[n]->Cells[3]->Value = puntos;

		}


		Competidores.clear();
		ciclistasConMinCont.clear();
		
	}else
	{
		// Parametro de minimo
		int maxint = INT_MIN;

		//Botones y labels para el ganador
		Grande->Visible = true;
		clubganador->Visible = true;
		Winner->Visible = true;
		clubwinner->Visible = true;
		reinicio->Visible = true;

		//DataGridView
		Participantes1->Visible = false;
		Finalistas1->Visible = false;
		Participantes2->Visible = false;
		Finalistas2->Visible = false;

		//labels
		lb3->Visible = false;
		Last->Visible = false;
		label2->Visible = false;
		lb5->Visible = false;
		lb8->Visible = false;
		lb11->Visible = false;
		Last2->Visible = false;

		//botones
		Velocidad->Visible = false;
		Persecucion->Visible = false;


		for (Ciclista ganador : *ciclistas)
		{
			if (ganador.puntos > maxint)
			{
				maxint = ganador.puntos;
			}
		}

		for (Ciclista ganador : *ciclistas)
		{
			if (maxint == ganador.puntos)
			{
				String^ Win = gcnew String(ganador.nombre.c_str());
				String^ WinClub = Convert::ToString(ganador.puntos);

				Grande->Text = Win;
				clubganador->Text = WinClub + " Puntos";
			}
		}

	}

}
private: System::Void lb8_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void reinicio_Click(System::Object^ sender, System::EventArgs^ e) {

	//reinicio de juego

	//DataGridView
	
	Eliminados->Visible = false;

	//labels
	Grande->Visible = false;
	clubganador->Visible = false;
	Winner->Visible = false;
	clubwinner->Visible = false;
	lb2->Visible = false;

	//botones
	reinicio->Visible = false;

	//Reinicio de tablas
	ciclistas->clear();
	perdedores->clear();
	TablaJugadores->Rows->Clear();
	Eliminados->Rows->Clear();


}
};
}
