#include "MyForm.h"
#include "SecondForm.h"
//#include "Vehicle.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Vehicle::MyForm form;
	Application::Run(%form);
}
