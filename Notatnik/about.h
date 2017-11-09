#pragma once

namespace Notatnik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o about
	/// </summary>
	public ref class about : public System::Windows::Forms::Form
	{
	public:
		about(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~about()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  aboutButton;
	private: System::Windows::Forms::Label^  labelProductName;
	private: System::Windows::Forms::Label^  labelProductVersion;
	private: System::Windows::Forms::Label^  labelCopyright;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(about::typeid));
			this->aboutButton = (gcnew System::Windows::Forms::Button());
			this->labelProductName = (gcnew System::Windows::Forms::Label());
			this->labelProductVersion = (gcnew System::Windows::Forms::Label());
			this->labelCopyright = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// aboutButton
			// 
			this->aboutButton->Location = System::Drawing::Point(68, 259);
			this->aboutButton->Name = L"aboutButton";
			this->aboutButton->Size = System::Drawing::Size(75, 23);
			this->aboutButton->TabIndex = 0;
			this->aboutButton->Text = L"&Ok";
			this->aboutButton->UseVisualStyleBackColor = true;
			this->aboutButton->Click += gcnew System::EventHandler(this, &about::button1_Click);
			// 
			// labelProductName
			// 
			this->labelProductName->AutoSize = true;
			this->labelProductName->Location = System::Drawing::Point(34, 160);
			this->labelProductName->Name = L"labelProductName";
			this->labelProductName->Size = System::Drawing::Size(136, 13);
			this->labelProductName->TabIndex = 1;
			this->labelProductName->Text = L"Projekt zwyk³ego notatnika";
			this->labelProductName->Click += gcnew System::EventHandler(this, &about::labelProductName_Click);
			// 
			// labelProductVersion
			// 
			this->labelProductVersion->AutoSize = true;
			this->labelProductVersion->Location = System::Drawing::Point(34, 198);
			this->labelProductVersion->Name = L"labelProductVersion";
			this->labelProductVersion->Size = System::Drawing::Size(141, 13);
			this->labelProductVersion->TabIndex = 1;
			this->labelProductVersion->Text = L"By in¿. Marcin Szewczak xD";
			// 
			// labelCopyright
			// 
			this->labelCopyright->AutoSize = true;
			this->labelCopyright->Location = System::Drawing::Point(79, 227);
			this->labelCopyright->Name = L"labelCopyright";
			this->labelCopyright->Size = System::Drawing::Size(55, 13);
			this->labelCopyright->TabIndex = 1;
			this->labelCopyright->Text = L"9.11.2017";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(186, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// about
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(210, 290);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelCopyright);
			this->Controls->Add(this->labelProductVersion);
			this->Controls->Add(this->labelProductName);
			this->Controls->Add(this->aboutButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"about";
			this->Text = L"about";
			this->Load += gcnew System::EventHandler(this, &about::about_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void about_Load(System::Object^  sender, System::EventArgs^  e) {
		//labelProductName->Text = L"Moj Notatnik";
		//labelProductVersion->Text = L"0.1alpha";
		//labelCopyright->Text = L"@Marcin Szewczak";
	}
	

private: System::Void labelProductName_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
