#include "okno_notatnika.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
int main(array<String^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Notatnik::okno_notatnika form;
	Application::Run(%form);
	return 0;
}