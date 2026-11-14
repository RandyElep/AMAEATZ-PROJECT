#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    SignInAccount::MyForm^ form = gcnew SignInAccount::MyForm();
    Application::Run(form);

    return 0;
}