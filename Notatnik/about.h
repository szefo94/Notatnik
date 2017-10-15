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
			this->aboutButton = (gcnew System::Windows::Forms::Button());
			this->labelProductName = (gcnew System::Windows::Forms::Label());
			this->labelProductVersion = (gcnew System::Windows::Forms::Label());
			this->labelCopyright = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// aboutButton
			// 
			this->aboutButton->Location = System::Drawing::Point(96, 113);
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
			this->labelProductName->Location = System::Drawing::Point(40, 20);
			this->labelProductName->Name = L"labelProductName";
			this->labelProductName->Size = System::Drawing::Size(35, 13);
			this->labelProductName->TabIndex = 1;
			this->labelProductName->Text = L"label1";
			// 
			// labelProductVersion
			// 
			this->labelProductVersion->AutoSize = true;
			this->labelProductVersion->Location = System::Drawing::Point(40, 52);
			this->labelProductVersion->Name = L"labelProductVersion";
			this->labelProductVersion->Size = System::Drawing::Size(35, 13);
			this->labelProductVersion->TabIndex = 1;
			this->labelProductVersion->Text = L"label1";
			// 
			// labelCopyright
			// 
			this->labelCopyright->AutoSize = true;
			this->labelCopyright->Location = System::Drawing::Point(40, 88);
			this->labelCopyright->Name = L"labelCopyright";
			this->labelCopyright->Size = System::Drawing::Size(35, 13);
			this->labelCopyright->TabIndex = 1;
			this->labelCopyright->Text = L"label1";
			// 
			// about
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(267, 168);
			this->Controls->Add(this->labelCopyright);
			this->Controls->Add(this->labelProductVersion);
			this->Controls->Add(this->labelProductName);
			this->Controls->Add(this->aboutButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"about";
			this->Text = L"about";
			this->Load += gcnew System::EventHandler(this, &about::about_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void about_Load(System::Object^  sender, System::EventArgs^  e) {
		labelProductName->Text = L"Moj Notatnik";
		labelProductVersion->Text = L"0.1alpha";
		labelCopyright->Text = L"@Marcin Szewczak";
	}
	

};
}
