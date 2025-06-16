#pragma once

namespace PlantillaForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Desencriptar
	/// </summary>
	public ref class Desencriptar : public System::Windows::Forms::Form
	{
	public:
		Desencriptar(void)
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
		~Desencriptar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Desencriptar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Si ya tenemos nuestras claves generadas y anotadas podemos\r\nrealizar el desencrip"
				L"tado de un mensaje, con la clave privada\r\npodremos descifrar el mensaje que no e"
				L"nviaron.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tenemos que ingresar nuestra clave privada que cuenta con el\r\nvalor del \"d\" y \"n\""
				L" para descifrar el mensaje que nos enviaron.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Valor D:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(208, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Valor N:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(277, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 228);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(383, 59);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(383, 64);
			this->label5->TabIndex = 7;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(363, 48);
			this->label7->TabIndex = 8;
			this->label7->Text = L"En la carpeta desencriptado estará el (descifrado.txt) con el \r\nmensaje descifrad"
				L"o, también lo podremos visualizar en el\r\nrecuadro de abajo el mensaje secreto qu"
				L"e nos enviaron.";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Enabled = false;
			this->richTextBox2->Location = System::Drawing::Point(12, 360);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(383, 59);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(110, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 41);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Empezar descrifrado";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Desencriptar::button1_Click);
			// 
			// Desencriptar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(440, 476);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Desencriptar";
			this->Text = L"Desencriptar";
			this->Load += gcnew System::EventHandler(this, &Desencriptar::Desencriptar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Desencriptar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	DatoRSA rsa;
	vector<int> datocifrado;

	int dClave = Convert::ToDouble(textBox1->Text);
	int nClave = Convert::ToDouble(textBox2->Text);

	rsa.setD(dClave);
	rsa.setN(nClave);

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
		String^ mensaje = richTextBox1->Text;

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
	richTextBox2->Enabled = true;
	richTextBox2->Clear();
	richTextBox2->AppendText(gcnew String(salida.str().c_str()));
	MessageBox::Show("Desencriptación completada.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
};
}
