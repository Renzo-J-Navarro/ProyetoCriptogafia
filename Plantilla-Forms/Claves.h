#pragma once
#include "calculo.h"
#include "Criptografia.h"
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
	/// Resumen de Claves
	/// </summary>
	public ref class Claves : public System::Windows::Forms::Form
	{
	public:
		Claves(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			rsa = new DatoRSA();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Claves()
		{
			if (components)
			{
				delete components;
			}
			if (rsa) {
				delete rsa;
				rsa = nullptr;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		DatoRSA* rsa;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Claves::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Valor P:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Valor Q:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(188, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(327, 64);
			this->label4->TabIndex = 3;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Valor D:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(498, 48);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ahora seleccionamos un valor de \"D\" nosotros o el programa, luego generamos \r\nnue"
				L"stra clave pública y privada. Para esto pulsaremos en Generar Valores D para \r\nv"
				L"er los valores que podemos usar.";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(387, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Generar Valores D";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Claves::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(387, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Generar Claves";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Claves::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(82, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Enabled = false;
			this->richTextBox2->Location = System::Drawing::Point(17, 353);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(364, 63);
			this->richTextBox2->TabIndex = 11;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(188, 216);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(193, 66);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(498, 48);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Después de tener un valor para \"d\" se realizará el cálculo para hallar las claves"
				L", \r\ntambién veremos los valores de \"p, q, n y euler\" que usa el programa para ge"
				L"nerar\r\nlas claves correspondientes.";
			// 
			// Claves
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(563, 438);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Claves";
			this->Text = L"Claves";
			this->Load += gcnew System::EventHandler(this, &Claves::Claves_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Claves_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int p;
		int q;

		try {
			p = Convert::ToDouble(textBox1->Text);
			q = Convert::ToDouble(textBox2->Text);
		}
		catch (...) {
			MessageBox::Show("Por favor, ingrese valores numéricos válidos para p y q.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (rsa->generarClaves(p, q, -1)) {
			richTextBox1->Clear();
			String^ opcion_d = gcnew String(rsa->establecer_d_interactivo().c_str());
			richTextBox1->AppendText(opcion_d);
			textBox3->Enabled = true;
			button2->Enabled = true;
			richTextBox1->Enabled = true;
			MessageBox::Show("Opciones de 'd' generadas. Puede elegir cualquiera luego presione 'Generar Claves'", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Error al generar las opciones de 'e'.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox3->Enabled = false;
			button2->Enabled = false;
			richTextBox1->Enabled = false;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int elegir_d;

	System::Windows::Forms::DialogResult resultado = System::Windows::Forms::MessageBox::Show(
		"¿Desea usar valor de D que selecciono?",
		"Entrada de mensaje",
		System::Windows::Forms::MessageBoxButtons::YesNo,
		System::Windows::Forms::MessageBoxIcon::Question
	);


	if (resultado == System::Windows::Forms::DialogResult::Yes) {
		try
		{
			elegir_d = Convert::ToDouble(textBox3->Text);
		}
		catch (...)
		{
			MessageBox::Show("Por favor, ingrese un número válido para 'd'.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (rsa->generarClaves(rsa->get_P(), rsa->get_Q(), elegir_d))
		{
			richTextBox2->Clear();
			string claves = rsa->mostrarClaves();
			String^ mensaje = "Claves Creadas:\n" + gcnew System::String(claves.c_str());
			richTextBox2->AppendText(mensaje);
			richTextBox2->Enabled = true;
			MessageBox::Show("Claves generadas correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Error al generar claves.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			richTextBox2->Clear();
		}
	}
	else
	{
		if (rsa->generarClaves(rsa->get_P(), rsa->get_Q())) {
			richTextBox2->Clear();
			string claves1 = rsa->mostrarClaves();
			String^ mensaje1 = "Claves Creadas:\n" + gcnew System::String(claves1.c_str());
			richTextBox2->AppendText(mensaje1);
			richTextBox2->Enabled = true;
			MessageBox::Show("Claves generadas correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Error al generar claves.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			richTextBox2->Clear();
		}
	}

}
};
}
