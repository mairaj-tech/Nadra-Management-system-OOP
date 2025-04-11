#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create the main form and run the application
    Project5::MyForm form;
    Application::Run(% form);

    return 0;
}


