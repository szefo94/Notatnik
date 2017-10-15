#pragma once
#include "about.h"

//#include <string>
namespace Notatnik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//string nameoffile;
	/// <summary>
	/// Podsumowanie informacji o okno_notatnika
	/// </summary>
	public ref class okno_notatnika : public System::Windows::Forms::Form
	{
	
	public:
		okno_notatnika(void)
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
		~okno_notatnika()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  otworzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszJakoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  zakonczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wytnijCTRLXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kopiujCTRLCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wklToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zawijanieWierszyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  czcionkaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stronaInternetowaToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  pole_tekstowe;
	private: System::Windows::Forms::ToolStripMenuItem^  cofnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  powtorzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem4;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->otworzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zakonczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijCTRLXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujCTRLCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cofnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->powtorzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zawijanieWierszyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stronaInternetowaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pole_tekstowe = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(406, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &okno_notatnika::menuStrip1_ItemClicked);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->nowyToolStripMenuItem,
					this->toolStripMenuItem1, this->otworzToolStripMenuItem, this->zapiszToolStripMenuItem, this->zapiszJakoToolStripMenuItem, this->toolStripMenuItem2,
					this->zakonczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"&Plik";
			// 
			// nowyToolStripMenuItem
			// 
			this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
			this->nowyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->nowyToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->nowyToolStripMenuItem->Text = L"&Nowy";
			this->nowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::nowyToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(169, 6);
			// 
			// otworzToolStripMenuItem
			// 
			this->otworzToolStripMenuItem->Name = L"otworzToolStripMenuItem";
			this->otworzToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->otworzToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->otworzToolStripMenuItem->Text = L"&Otworz";
			this->otworzToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::otworzToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->zapiszToolStripMenuItem->Text = L"Za&pisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::zapiszToolStripMenuItem_Click);
			// 
			// zapiszJakoToolStripMenuItem
			// 
			this->zapiszJakoToolStripMenuItem->Name = L"zapiszJakoToolStripMenuItem";
			this->zapiszJakoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->zapiszJakoToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->zapiszJakoToolStripMenuItem->Text = L"Zapi&sz jako";
			this->zapiszJakoToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::zapiszjakoToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(169, 6);
			// 
			// zakonczToolStripMenuItem
			// 
			this->zakonczToolStripMenuItem->Name = L"zakonczToolStripMenuItem";
			this->zakonczToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->zakonczToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->zakonczToolStripMenuItem->Text = L"Zakon&cz";
			this->zakonczToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::zakonczToolStripMenuItem_Click);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->wytnijCTRLXToolStripMenuItem,
					this->kopiujCTRLCToolStripMenuItem, this->wklToolStripMenuItem, this->toolStripMenuItem4, this->cofnijToolStripMenuItem, this->powtorzToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"&Edycja";
			// 
			// wytnijCTRLXToolStripMenuItem
			// 
			this->wytnijCTRLXToolStripMenuItem->Name = L"wytnijCTRLXToolStripMenuItem";
			this->wytnijCTRLXToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->wytnijCTRLXToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->wytnijCTRLXToolStripMenuItem->Text = L"W&ytnij";
			this->wytnijCTRLXToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::wytnijCTRLXToolStripMenuItem_Click);
			// 
			// kopiujCTRLCToolStripMenuItem
			// 
			this->kopiujCTRLCToolStripMenuItem->Name = L"kopiujCTRLCToolStripMenuItem";
			this->kopiujCTRLCToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->kopiujCTRLCToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->kopiujCTRLCToolStripMenuItem->Text = L"Kop&iuj";
			this->kopiujCTRLCToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::kopiujCTRLCToolStripMenuItem_Click);
			// 
			// wklToolStripMenuItem
			// 
			this->wklToolStripMenuItem->Name = L"wklToolStripMenuItem";
			this->wklToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->wklToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->wklToolStripMenuItem->Text = L"Wkle&j";
			this->wklToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::wklToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(187, 6);
			// 
			// cofnijToolStripMenuItem
			// 
			this->cofnijToolStripMenuItem->Name = L"cofnijToolStripMenuItem";
			this->cofnijToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->cofnijToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->cofnijToolStripMenuItem->Text = L"Cofn&ij";
			this->cofnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::cofnijToolStripMenuItem_Click);
			// 
			// powtorzToolStripMenuItem
			// 
			this->powtorzToolStripMenuItem->Name = L"powtorzToolStripMenuItem";
			this->powtorzToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::Z));
			this->powtorzToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->powtorzToolStripMenuItem->Text = L"Powtor&z";
			this->powtorzToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::powtorzToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zawijanieWierszyToolStripMenuItem,
					this->czcionkaToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->formatToolStripMenuItem->Text = L"&Format";
			// 
			// zawijanieWierszyToolStripMenuItem
			// 
			this->zawijanieWierszyToolStripMenuItem->Name = L"zawijanieWierszyToolStripMenuItem";
			this->zawijanieWierszyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->zawijanieWierszyToolStripMenuItem->Text = L"Z&awijanie wierszy";
			this->zawijanieWierszyToolStripMenuItem->EnabledChanged += gcnew System::EventHandler(this, &okno_notatnika::zawijanieWierszyToolStripMenuItem_EnabledChanged);
			// 
			// czcionkaToolStripMenuItem
			// 
			this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
			this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->czcionkaToolStripMenuItem->Text = L"&Czcionka";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"P&omoc";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oProgramieToolStripMenuItem,
					this->stronaInternetowaToolStripMenuItem
			});
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->informacjeToolStripMenuItem->Text = L"I&nformacje";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->oProgramieToolStripMenuItem->Text = L"O p&rogramie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &okno_notatnika::oProgramieToolStripMenuItem_Click);
			// 
			// stronaInternetowaToolStripMenuItem
			// 
			this->stronaInternetowaToolStripMenuItem->Name = L"stronaInternetowaToolStripMenuItem";
			this->stronaInternetowaToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->stronaInternetowaToolStripMenuItem->Text = L"Strona int&ernetowa";
			// 
			// pole_tekstowe
			// 
			this->pole_tekstowe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pole_tekstowe->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->pole_tekstowe->Location = System::Drawing::Point(0, 27);
			this->pole_tekstowe->Name = L"pole_tekstowe";
			this->pole_tekstowe->Size = System::Drawing::Size(406, 302);
			this->pole_tekstowe->TabIndex = 1;
			this->pole_tekstowe->Text = L"";
			this->pole_tekstowe->FontChanged += gcnew System::EventHandler(this, &okno_notatnika::pole_tekstowe_FontChanged);
			this->pole_tekstowe->MarginChanged += gcnew System::EventHandler(this, &okno_notatnika::pole_tekstowe_MarginChanged);
			// 
			// okno_notatnika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 326);
			this->Controls->Add(this->pole_tekstowe);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"okno_notatnika";
			this->Text = L"Moj Notatnik";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &okno_notatnika::okno_notatnika_FormClosing);
			this->Load += gcnew System::EventHandler(this, &okno_notatnika::okno_notatnika_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void otworzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
		OpenFileDialog OpenFileDialog1;
		OpenFileDialog1.InitialDirectory = "c:\\";
		OpenFileDialog1.Filter = "rich text format (*.rtf)|*.rtf|pliki tekstowe (*.txt)|*.txt|All files (*.*)|*.*";
		OpenFileDialog1.FilterIndex = 2;
		OpenFileDialog1.RestoreDirectory = true;
			

			if (OpenFileDialog1.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				pole_tekstowe->LoadFile(OpenFileDialog1.FileName, RichTextBoxStreamType::PlainText);
				//nameoffile = OpenFileDialog1.FileName;
			}
	
		

	}
private: System::Void zapiszToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//dopracowac metode zapisz
	pole_tekstowe->SaveFile("buffer.txt", RichTextBoxStreamType::PlainText);
	//Form zapiszJakoToolStripMenuItem();
	/*
	if (nameoffile != " ") {
		pole_tekstowe->SaveFile(nameoffile);

	}
	else
	{
		Form zapiszJakoToolStripMenuItem(System::Windows::Forms::ma);
	}*/	

}
private: System::Void zapiszjakoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog savedialog;
	savedialog.InitialDirectory = "c:\\";
	savedialog.Title = "zapisuje";
	savedialog.Filter = "rich text format (*.rtf)|*.rtf|pliki tekstowe (*.txt)|*.txt|All files (*.*)|*.*";
	savedialog.FilterIndex = 2;
	if (savedialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		pole_tekstowe->SaveFile(savedialog.FileName, RichTextBoxStreamType::PlainText);
		//nameoffile = savedialog.FileName;
	}


}


private: System::Void okno_notatnika_Load(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//moj komentarz widoczny w githubie
	//nastepny komentarz


	//about ^form = gcnew about;
	//about::ShowDialog();
	//this->Hide();
/*	Form^ about;
	about->Show();
	this->Hide();*/
}
private: System::Void nowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog savedialog;
	savedialog.InitialDirectory = "c:\\";
	savedialog.Title = "zapisuje";
	savedialog.Filter = "rich text format (*.rtf)|*.rtf|pliki tekstowe (*.txt)|*.txt|All files (*.*)|*.*";
	savedialog.FilterIndex = 2;
	if (MessageBox::Show("Otwierasz nowy plik. Czy chcesz zapisac poprzedni?", "Nowy Plik", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes)
	{
		if (savedialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pole_tekstowe->SaveFile(savedialog.FileName, RichTextBoxStreamType::RichText);
			pole_tekstowe->Clear();
		}
	}	
	
}

private: System::Void cofnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pole_tekstowe->Undo();
}
private: System::Void powtorzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		pole_tekstowe->Redo();
}
private: System::Void wytnijCTRLXToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pole_tekstowe->Cut();
}
private: System::Void kopiujCTRLCToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pole_tekstowe->Copy();
}
private: System::Void wklToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pole_tekstowe->Paste();
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}

private: System::Void okno_notatnika_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	if (MessageBox::Show("Zamknac program?", "zamykanie", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true;
	}	
}
private: System::Void zakonczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	okno_notatnika::Close();

	/*if (MessageBox::Show("Zamknac program2?", "zamykanie", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes)
	{
	okno_notatnika::Close();
	}

	ta opcja nie jest juz potrzebna, bo uzywamy globalnego zamykania (formclosing)
	*/
}

private: System::Void pole_tekstowe_MarginChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void zawijanieWierszyToolStripMenuItem_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pole_tekstowe_FontChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

