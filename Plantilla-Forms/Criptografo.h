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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aquamarine;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(35, 79);
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
			this->button2->Location = System::Drawing::Point(35, 169);
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
			this->button3->Location = System::Drawing::Point(35, 261);
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
			this->button4->Location = System::Drawing::Point(35, 352);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(336, 85);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(422, 450);
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