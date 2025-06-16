#pragma once
#include "Claves.h"
#include "Encriptar.h"
#include "Desencriptar.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

namespace PlantillaForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::GroupBox^ groupBox2;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Label^ label15;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aquamarine;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(28, 83);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(336, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generar Claves";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aquamarine;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(28, 173);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(336, 85);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Encriptar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Aquamarine;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(28, 265);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(336, 85);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Desencriptar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Linen;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 55);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Criptografia RSA";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aquamarine;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(28, 356);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(336, 85);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->richTextBox3);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(382, 86);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(305, 358);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informacion del encriptado";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(8, 154);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(217, 19);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Ingrese el mensaje a encriptar:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox4->Location = System::Drawing::Point(137, 127);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(101, 18);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(139, 102);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 18);
			this->textBox3->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(9, 127);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 19);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Ingrese clave e:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 102);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 19);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Ingrese clave n:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 239);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(236, 34);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Aqui se mostrara el mensaje resultante\r\nya encriptado para enviarlo";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(8, 279);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(285, 69);
			this->richTextBox3->TabIndex = 14;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(8, 177);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(285, 58);
			this->richTextBox2->TabIndex = 13;
			this->richTextBox2->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 21);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(260, 76);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Se podra activar esta funcion cuando \r\nse tenga las claves generadas, aqui \r\npode"
				L"mos encriptar los mensajes que \r\ndeseamos enviar";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->richTextBox4);
			this->groupBox3->Controls->Add(this->richTextBox5);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Location = System::Drawing::Point(696, 86);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(305, 358);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Informacion del desencriptado";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(8, 154);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(240, 19);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Ingrese el mensaje a desencriptar:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->Location = System::Drawing::Point(137, 128);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(101, 18);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox6->Location = System::Drawing::Point(137, 105);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(101, 18);
			this->textBox6->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(8, 127);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 19);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Ingrese clave d:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(8, 103);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 19);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Ingrese clave n:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(8, 240);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(236, 34);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Aqui se mostrara el mensaje resultante\r\nya desencriptado para enviarlo";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(8, 281);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(285, 68);
			this->richTextBox4->TabIndex = 14;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(8, 177);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(285, 58);
			this->richTextBox5->TabIndex = 13;
			this->richTextBox5->Text = L"";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 21);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(260, 76);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Se podra activar esta funcion cuando \r\nse tenga las claves generadas, aqui \r\npode"
				L"mos desencriptar los mensajes \r\nque deseamos enviar";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1011, 457);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::Teal;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Criptografo";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult resultado = System::Windows::Forms::MessageBox::Show(
			"¿Seguro que desea salir?", "Salir", 
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		
		if (resultado == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Claves^ form1 = gcnew Claves();
		form1->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	DatoRSA rsa;

	int nClave = Convert::ToDouble(textBox3->Text);
	int eClave = Convert::ToDouble(textBox4->Text);

	rsa.setN(nClave);
	rsa.setE(eClave);

	System::Windows::Forms::DialogResult resultado = System::Windows::Forms::MessageBox::Show(
		"¿Desea escribir manualmente el mensaje a encriptar?",
		"Entrada de mensaje",
		System::Windows::Forms::MessageBoxButtons::YesNo,
		System::Windows::Forms::MessageBoxIcon::Question
	);

	string mensajeStd;
	ostringstream oss;

	if (resultado == System::Windows::Forms::DialogResult::Yes) {
		String^ mensaje = richTextBox2->Text;

		if (String::IsNullOrWhiteSpace(mensaje)) {
			MessageBox::Show("No se ha ingresado un mensaje. Por favor, escríbalo en el cuadro de texto.",
				"Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		for (int i = 0; i < mensaje->Length; ++i) {
			mensajeStd += static_cast<char>(mensaje[i]);
		}

		// Guardar mensaje original
		guardarTexto("encriptado/mensaje.txt", mensajeStd);
		oss << "Mensaje escrito manualmente:\n" << mensajeStd << endl;
	}
	else {
		// Leer mensaje desde archivo
		mensajeStd = leerTexto("encriptado/mensaje.txt");
		if (mensajeStd.empty()) {
			MessageBox::Show("El archivo de texto está vacío o no existe.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		oss << "Mensaje leído desde archivo:\n" << mensajeStd;
	}

	// Encriptar
	vector<long long> cifrado = rsa.encriptar(mensajeStd);
	if (cifrado.empty()) {
		MessageBox::Show("El mensaje no pudo ser encriptado.", "Error", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Guardar mensaje encriptado
	guardarNumeros("encriptado/cifrado.txt", cifrado);

	// Mostrar resultado en richTextBox3
	oss << "Mensaje encriptado:\n";
	for (int c : cifrado) {
		oss << c << " ";
	}

	richTextBox3->Clear();
	richTextBox3->AppendText(gcnew String(oss.str().c_str()));
	MessageBox::Show("Mensaje encriptado y guardado correctamente.", "Éxito",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
	*/
	Encriptar^ form2 = gcnew Encriptar();
	form2->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	DatoRSA rsa;
		vector<int> datocifrado;

		int nClave = Convert::ToDouble(textBox6->Text);
		int dClave = Convert::ToDouble(textBox5->Text);

		rsa.setN(nClave);
		rsa.setD(dClave);

        System::Windows::Forms::DialogResult resultado = System::Windows::Forms::MessageBox::Show(
            "¿Desea escribir manualmente el mensaje a desencriptar?", 
            "Entrada de mensaje", 
            System::Windows::Forms::MessageBoxButtons::YesNo, 
            System::Windows::Forms::MessageBoxIcon::Question
        );

		string mensajeDesencriptado;
		ostringstream salida;

		if (resultado == System::Windows::Forms::DialogResult::Yes)
		{
			String^ mensaje = richTextBox5->Text;

			if (String::IsNullOrWhiteSpace(mensaje)) {
				MessageBox::Show("No se ha ingresado un mensaje. Por favor, escríbalo en el cuadro de texto.",
					"Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			// Convertir mensaje a string
			string mensajeStd;
			for (int i = 0; i < mensaje->Length; ++i) {
				mensajeStd += static_cast<char>(mensaje[i]);
			}
			
			// Convertir mensaje separado por | a vector<int>
			vector<long long> cifrado;
			stringstream ss(mensajeStd);
			string token;
			while (std::getline(ss, token, ' ')) {
				if (!token.empty()) cifrado.push_back(std::stoi(token));
			}
			// Desencriptar
			mensajeDesencriptado = rsa.desencriptar(cifrado);
			salida << "Mensaje escrito manualmente:\n" << mensajeStd << endl;
			salida << "Mensaje desencriptado:\n" << mensajeDesencriptado;
			// Guardar archivo desencriptado
			guardarTexto("desencriptado/descifrado.txt", mensajeDesencriptado);
		}
		else {
			// Leer desde archivo
			vector<long long> cifrado = leerNumeros("encriptado/cifrado.txt");
			if (cifrado.empty()) {
				MessageBox::Show("El archivo de texto encriptado está vacío o no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			mensajeDesencriptado = rsa.desencriptar(cifrado);
			salida << "Mensaje desencriptado desde archivo:\n" << mensajeDesencriptado << "\n";
			// Guardar archivo desencriptado
			guardarTexto("desencriptado/descifrado.txt", mensajeDesencriptado);
		}
		// Mostrar resultado
		richTextBox4->Clear();
		richTextBox4->AppendText(gcnew String(salida.str().c_str()));
		MessageBox::Show("Desencriptación completada.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	*/
	Desencriptar^ form3 = gcnew Desencriptar();
	form3->Show();
}
};
}