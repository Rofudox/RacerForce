#include "RacerBile.h"
using namespace System;
using namespace::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RF::RacerBile form;
	Application::Run(% form);
}
