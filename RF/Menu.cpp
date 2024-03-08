#include "RacerBile.h"
#include "Track.h"
using namespace System;
using namespace::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RF::RacerBile form;
	RF::Track track;
	Application::Run(% form);

	bool StartGame = true;

	if (StartGame) {

		form.Close();
		Application::Run(% track);

	}
}
