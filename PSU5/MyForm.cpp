#include "MyForm.h"
#include "Windows.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PSU5::MyForm form;
	Application::Run(% form);
	PSU5::MyForm1 forms;
	Application::Run(% forms);

	return 0;
}
