#pragma once
#include "MyForm3.h"
namespace SignInAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomeForm
	/// </summary>
	public ref class WelcomeForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WelcomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Button^ contact;
	private: System::Windows::Forms::Button^ home;

	private: System::Windows::Forms::Button^ menu;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contact = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->home = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1134, 657);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Cyan;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->contact);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->menu);
			this->panel4->Location = System::Drawing::Point(18, 259);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1092, 377);
			this->panel4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(280, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(548, 116);
			this->button1->TabIndex = 6;
			this->button1->Text = L"GROUP PRESENTATION MEMBER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WelcomeForm::button1_Click_2);
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::Color::Black;
			this->contact->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->ForeColor = System::Drawing::Color::IndianRed;
			this->contact->Location = System::Drawing::Point(832, 19);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(205, 58);
			this->contact->TabIndex = 2;
			this->contact->Text = L"CONTACT";
			this->contact->UseVisualStyleBackColor = false;
			this->contact->Click += gcnew System::EventHandler(this, &WelcomeForm::contact_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(234, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(594, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"CLICK HERE TO START ORDERING TODAY";
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::Black;
			this->menu->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menu->ForeColor = System::Drawing::Color::Lime;
			this->menu->Location = System::Drawing::Point(447, 275);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(189, 58);
			this->menu->TabIndex = 0;
			this->menu->Text = L"CLICK HERE!";
			this->menu->UseVisualStyleBackColor = false;
			this->menu->Click += gcnew System::EventHandler(this, &WelcomeForm::menu_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Cyan;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->home);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(18, 15);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1092, 242);
			this->panel3->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SeaGreen;
			this->label8->Location = System::Drawing::Point(164, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(247, 38);
			this->label8->TabIndex = 8;
			this->label8->Text = L"HELLO \"Admin\"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Cyan;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(9, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(134, 126);
			this->panel2->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MintCream;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(314, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(444, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Making Every Breaktime Makes Amazing";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(585, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(315, 74);
			this->label6->TabIndex = 6;
			this->label6->Text = L"AMAZEats";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(159, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(420, 74);
			this->label7->TabIndex = 5;
			this->label7->Text = L"WELCOME TO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::PaleGoldenrod;
			this->label4->Location = System::Drawing::Point(324, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(444, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Making Every Breaktime Makes Amazing";
			this->label4->Click += gcnew System::EventHandler(this, &WelcomeForm::label4_Click);
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Black;
			this->home->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home->ForeColor = System::Drawing::Color::IndianRed;
			this->home->Location = System::Drawing::Point(832, 16);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(225, 58);
			this->home->TabIndex = 1;
			this->home->Text = L"EXIT";
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &WelcomeForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(584, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(315, 74);
			this->label3->TabIndex = 6;
			this->label3->Text = L"AMAZEats";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SeaShell;
			this->label1->Location = System::Drawing::Point(169, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 74);
			this->label1->TabIndex = 5;
			this->label1->Text = L"WELCOME TO";
			// 
			// WelcomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1159, 678);
			this->Controls->Add(this->panel1);
			this->Name = L"WelcomeForm";
			this->Text = L"WelcomeForm";
			this->Load += gcnew System::EventHandler(this, &WelcomeForm::WelcomeForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menu_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ order = gcnew MyForm3();
		this->Hide();          // hide the welcome screen
		order->ShowDialog();   // show the order form and wait until it closes
		this->Close();         // close the welcome form after the order form is closed
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void contact_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Get in Touch with AMAZEats!\n\n"
			"Have questions, suggestions, or feedback? We'd love to hear from you!\n"
			"Whether it is about our menu, food, or services, feel free to reach out.\n\n"

			"Email: amazeatscontact@gmail.com\n"
			"Contact Number: 09615125122\n"
			"Your satisfaction is our priority. Thank you for choosing AMAZEats!",
			"CONTACT",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
private: System::Void WelcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"--PRESENTATION BY---\n\n"
		"RANDY G. ELEP \n\n"
		"JOHN BENEDICT U.LIANTO \n\n"
		"MARY NIEL ANGELINE TAN \n\n"
		,
		"GROUP 8 PRESENTATION",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
};
}
