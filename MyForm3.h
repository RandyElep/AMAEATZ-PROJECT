#pragma once

namespace SignInAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			ItemCost = 0;
			Sum = 0;
			i = 0;
			change = 0;
			Tax = 2.7;
			kikiamQty = 0;
			kikiamIndex = -1;
			itlogQty = kaninQty = noodlesQty = waterQty = 0;
			grahamQty = candiesQty = empanadaQty = fudgeeQty = 0;
			itlogIndex = kaninIndex = noodlesIndex = waterIndex = -1;
			grahamIndex = candiesIndex = empanadaIndex = fudgeeIndex = -1;
			cmbPayment->Items->Clear();
			cmbPayment->Items->Add("CASH");
			cmbPayment->Items->Add("GCASH");
			cmbPayment->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbPayment->SelectedIndex = 0;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ imgkanin;
	private: System::Windows::Forms::PictureBox^ imgitlog;
	private: System::Windows::Forms::PictureBox^ imggrahambar;
	private: System::Windows::Forms::PictureBox^ imgcandies;
	private: System::Windows::Forms::PictureBox^ imgmountaindew;
	private: System::Windows::Forms::PictureBox^ imgcoke;







	private: System::Windows::Forms::PictureBox^ imghotdog;
	private: System::Windows::Forms::PictureBox^ imgbottledwater;
	private: System::Windows::Forms::PictureBox^ imgchips;




	private: System::Windows::Forms::PictureBox^ imgsiomai;
	private: System::Windows::Forms::PictureBox^ imgnoodles;
	private: System::Windows::Forms::PictureBox^ imgfugeebar;



	private: System::Windows::Forms::PictureBox^ imgempanada;
	private: System::Windows::Forms::PictureBox^ imgpancitcanton;




	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTAX;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtCHANGE;
	private: System::Windows::Forms::TextBox^ txtTOTAL;
	private: System::Windows::Forms::TextBox^ txtSUB;
	private: System::Windows::Forms::TextBox^ txtCOST;




	private: System::Windows::Forms::Button^ btnRESET;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnEXIT;

	private: System::Windows::Forms::Button^ btnOPEN;

	private: System::Windows::Forms::Button^ btnTOTAL;
	private: System::Windows::Forms::ComboBox^ cmbPayment;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
private: System::ComponentModel::IContainer^ components;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		double ItemCost, Sum, i, Tax, change;
		double q, p, a;
		String^ Items;
		int kikiamQty;
private: System::Windows::Forms::PictureBox^ imgkikiam;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::ImageList^ imageList1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;

	   int kikiamIndex;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->txtTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->txtSUB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTAX = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->cmbPayment = (gcnew System::Windows::Forms::ComboBox());
			this->txtCOST = (gcnew System::Windows::Forms::TextBox());
			this->txtCHANGE = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imgkikiam = (gcnew System::Windows::Forms::PictureBox());
			this->imgkanin = (gcnew System::Windows::Forms::PictureBox());
			this->imgitlog = (gcnew System::Windows::Forms::PictureBox());
			this->imggrahambar = (gcnew System::Windows::Forms::PictureBox());
			this->imgcandies = (gcnew System::Windows::Forms::PictureBox());
			this->imgmountaindew = (gcnew System::Windows::Forms::PictureBox());
			this->imgcoke = (gcnew System::Windows::Forms::PictureBox());
			this->imghotdog = (gcnew System::Windows::Forms::PictureBox());
			this->imgbottledwater = (gcnew System::Windows::Forms::PictureBox());
			this->imgchips = (gcnew System::Windows::Forms::PictureBox());
			this->imgsiomai = (gcnew System::Windows::Forms::PictureBox());
			this->imgnoodles = (gcnew System::Windows::Forms::PictureBox());
			this->imgfugeebar = (gcnew System::Windows::Forms::PictureBox());
			this->imgempanada = (gcnew System::Windows::Forms::PictureBox());
			this->imgpancitcanton = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->btnRESET = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnEXIT = (gcnew System::Windows::Forms::Button());
			this->btnOPEN = (gcnew System::Windows::Forms::Button());
			this->btnTOTAL = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgkikiam))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgkanin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgitlog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imggrahambar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcandies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgmountaindew))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcoke))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imghotdog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbottledwater))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgchips))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgsiomai))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgnoodles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgfugeebar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgempanada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgpancitcanton))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel12->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(234, 370);
			this->panel1->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->btnClear);
			this->panel9->Controls->Add(this->btnDot);
			this->panel9->Controls->Add(this->btn0);
			this->panel9->Controls->Add(this->btn9);
			this->panel9->Controls->Add(this->btn8);
			this->panel9->Controls->Add(this->btn7);
			this->panel9->Controls->Add(this->btn6);
			this->panel9->Controls->Add(this->btn5);
			this->panel9->Controls->Add(this->btn4);
			this->panel9->Controls->Add(this->btn3);
			this->panel9->Controls->Add(this->btn2);
			this->panel9->Controls->Add(this->btn1);
			this->panel9->Controls->Add(this->label1);
			this->panel9->Location = System::Drawing::Point(3, 4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(222, 352);
			this->panel9->TabIndex = 3;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(152, 266);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(54, 59);
			this->btnClear->TabIndex = 30;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm3::btnClear_Click);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(82, 266);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(54, 59);
			this->btnDot->TabIndex = 29;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm3::btnDot_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(10, 266);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(54, 59);
			this->btn0->TabIndex = 28;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(152, 68);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(54, 59);
			this->btn9->TabIndex = 27;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(82, 68);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(54, 59);
			this->btn8->TabIndex = 26;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(11, 68);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(54, 59);
			this->btn7->TabIndex = 25;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(11, 135);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(54, 59);
			this->btn6->TabIndex = 24;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(82, 132);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(54, 59);
			this->btn5->TabIndex = 23;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(152, 132);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(54, 59);
			this->btn4->TabIndex = 22;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(152, 201);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(54, 59);
			this->btn3->TabIndex = 21;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(82, 201);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(54, 59);
			this->btn2->TabIndex = 20;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(10, 199);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(54, 59);
			this->btn1->TabIndex = 19;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm3::NumberClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"POS NUMBER";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Location = System::Drawing::Point(12, 443);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(680, 314);
			this->panel2->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->txtTOTAL);
			this->panel7->Controls->Add(this->txtSUB);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->txtTAX);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Location = System::Drawing::Point(16, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(325, 284);
			this->panel7->TabIndex = 2;
			// 
			// txtTOTAL
			// 
			this->txtTOTAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTOTAL->Location = System::Drawing::Point(186, 196);
			this->txtTOTAL->Name = L"txtTOTAL";
			this->txtTOTAL->Size = System::Drawing::Size(108, 38);
			this->txtTOTAL->TabIndex = 38;
			this->txtTOTAL->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtTOTAL->TextChanged += gcnew System::EventHandler(this, &MyForm3::txtTOTAL_TextChanged);
			// 
			// txtSUB
			// 
			this->txtSUB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSUB->Location = System::Drawing::Point(186, 121);
			this->txtSUB->Name = L"txtSUB";
			this->txtSUB->Size = System::Drawing::Size(108, 38);
			this->txtSUB->TabIndex = 37;
			this->txtSUB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtSUB->TextChanged += gcnew System::EventHandler(this, &MyForm3::txtSUB_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 38);
			this->label4->TabIndex = 33;
			this->label4->Text = L"TOTAL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 38);
			this->label3->TabIndex = 32;
			this->label3->Text = L"SUB TOTAL";
			// 
			// txtTAX
			// 
			this->txtTAX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTAX->Location = System::Drawing::Point(186, 21);
			this->txtTAX->Name = L"txtTAX";
			this->txtTAX->Size = System::Drawing::Size(108, 38);
			this->txtTAX->TabIndex = 36;
			this->txtTAX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtTAX->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 38);
			this->label2->TabIndex = 31;
			this->label2->Text = L"TAX";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Location = System::Drawing::Point(252, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(243, 414);
			this->panel3->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->label39);
			this->panel10->Controls->Add(this->label38);
			this->panel10->Controls->Add(this->listBox1);
			this->panel10->Location = System::Drawing::Point(4, 4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(235, 405);
			this->panel10->TabIndex = 4;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(133, 17);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(64, 24);
			this->label39->TabIndex = 64;
			this->label39->Text = L"Price";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(3, 17);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(70, 24);
			this->label38->TabIndex = 63;
			this->label38->Text = L"Items";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Silver;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(3, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(225, 327);
			this->listBox1->TabIndex = 18;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::listBox1_SelectedIndexChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->cmbPayment);
			this->panel8->Controls->Add(this->txtCOST);
			this->panel8->Controls->Add(this->txtCHANGE);
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Location = System::Drawing::Point(351, 12);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(316, 284);
			this->panel8->TabIndex = 3;
			// 
			// cmbPayment
			// 
			this->cmbPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbPayment->FormattingEnabled = true;
			this->cmbPayment->Location = System::Drawing::Point(190, 20);
			this->cmbPayment->Name = L"cmbPayment";
			this->cmbPayment->Size = System::Drawing::Size(103, 39);
			this->cmbPayment->TabIndex = 41;
			this->cmbPayment->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::cmbPayment_SelectedIndexChanged);
			// 
			// txtCOST
			// 
			this->txtCOST->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCOST->Location = System::Drawing::Point(187, 118);
			this->txtCOST->Name = L"txtCOST";
			this->txtCOST->Size = System::Drawing::Size(107, 38);
			this->txtCOST->TabIndex = 40;
			this->txtCOST->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCOST->TextChanged += gcnew System::EventHandler(this, &MyForm3::txtCOST_TextChanged);
			// 
			// txtCHANGE
			// 
			this->txtCHANGE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCHANGE->Location = System::Drawing::Point(187, 193);
			this->txtCHANGE->Name = L"txtCHANGE";
			this->txtCHANGE->Size = System::Drawing::Size(107, 38);
			this->txtCHANGE->TabIndex = 39;
			this->txtCHANGE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCHANGE->TextChanged += gcnew System::EventHandler(this, &MyForm3::txtCHANGE_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 38);
			this->label7->TabIndex = 38;
			this->label7->Text = L"CHANGE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 38);
			this->label6->TabIndex = 37;
			this->label6->Text = L"PAY METHOD";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 38);
			this->label5->TabIndex = 34;
			this->label5->Text = L"COST";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->panel11);
			this->panel5->Location = System::Drawing::Point(698, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(941, 760);
			this->panel5->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->label37);
			this->panel11->Controls->Add(this->label36);
			this->panel11->Controls->Add(this->label35);
			this->panel11->Controls->Add(this->label34);
			this->panel11->Controls->Add(this->label33);
			this->panel11->Controls->Add(this->label32);
			this->panel11->Controls->Add(this->label31);
			this->panel11->Controls->Add(this->label30);
			this->panel11->Controls->Add(this->label29);
			this->panel11->Controls->Add(this->label28);
			this->panel11->Controls->Add(this->label27);
			this->panel11->Controls->Add(this->label26);
			this->panel11->Controls->Add(this->label25);
			this->panel11->Controls->Add(this->label24);
			this->panel11->Controls->Add(this->label23);
			this->panel11->Controls->Add(this->label22);
			this->panel11->Controls->Add(this->label21);
			this->panel11->Controls->Add(this->label20);
			this->panel11->Controls->Add(this->label19);
			this->panel11->Controls->Add(this->label18);
			this->panel11->Controls->Add(this->label17);
			this->panel11->Controls->Add(this->label16);
			this->panel11->Controls->Add(this->label15);
			this->panel11->Controls->Add(this->label14);
			this->panel11->Controls->Add(this->label13);
			this->panel11->Controls->Add(this->label12);
			this->panel11->Controls->Add(this->label11);
			this->panel11->Controls->Add(this->label10);
			this->panel11->Controls->Add(this->label9);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->pictureBox15);
			this->panel11->Controls->Add(this->pictureBox14);
			this->panel11->Controls->Add(this->pictureBox13);
			this->panel11->Controls->Add(this->pictureBox12);
			this->panel11->Controls->Add(this->pictureBox11);
			this->panel11->Controls->Add(this->pictureBox10);
			this->panel11->Controls->Add(this->pictureBox9);
			this->panel11->Controls->Add(this->pictureBox8);
			this->panel11->Controls->Add(this->pictureBox7);
			this->panel11->Controls->Add(this->pictureBox6);
			this->panel11->Controls->Add(this->pictureBox5);
			this->panel11->Controls->Add(this->pictureBox4);
			this->panel11->Controls->Add(this->pictureBox3);
			this->panel11->Controls->Add(this->pictureBox2);
			this->panel11->Controls->Add(this->pictureBox1);
			this->panel11->Controls->Add(this->imgkikiam);
			this->panel11->Controls->Add(this->imgkanin);
			this->panel11->Controls->Add(this->imgitlog);
			this->panel11->Controls->Add(this->imggrahambar);
			this->panel11->Controls->Add(this->imgcandies);
			this->panel11->Controls->Add(this->imgmountaindew);
			this->panel11->Controls->Add(this->imgcoke);
			this->panel11->Controls->Add(this->imghotdog);
			this->panel11->Controls->Add(this->imgbottledwater);
			this->panel11->Controls->Add(this->imgchips);
			this->panel11->Controls->Add(this->imgsiomai);
			this->panel11->Controls->Add(this->imgnoodles);
			this->panel11->Controls->Add(this->imgfugeebar);
			this->panel11->Controls->Add(this->imgempanada);
			this->panel11->Controls->Add(this->imgpancitcanton);
			this->panel11->Location = System::Drawing::Point(3, 4);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(925, 749);
			this->panel11->TabIndex = 5;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label37->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::SeaGreen;
			this->label37->Location = System::Drawing::Point(777, 551);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(75, 27);
			this->label37->TabIndex = 62;
			this->label37->Text = L"25.00";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label36->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::SeaGreen;
			this->label36->Location = System::Drawing::Point(593, 551);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(75, 27);
			this->label36->TabIndex = 61;
			this->label36->Text = L"25.00";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label35->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::SeaGreen;
			this->label35->Location = System::Drawing::Point(427, 551);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(75, 27);
			this->label35->TabIndex = 60;
			this->label35->Text = L"15.00";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label34->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::SeaGreen;
			this->label34->Location = System::Drawing::Point(229, 551);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(75, 27);
			this->label34->TabIndex = 59;
			this->label34->Text = L"15.00";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm3::label34_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label33->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::SeaGreen;
			this->label33->Location = System::Drawing::Point(59, 551);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(75, 27);
			this->label33->TabIndex = 58;
			this->label33->Text = L"10.00";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label32->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::SeaGreen;
			this->label32->Location = System::Drawing::Point(791, 303);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(61, 27);
			this->label32->TabIndex = 57;
			this->label32->Text = L"1.00";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm3::label32_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label31->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::SeaGreen;
			this->label31->Location = System::Drawing::Point(615, 303);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(61, 27);
			this->label31->TabIndex = 56;
			this->label31->Text = L"5.00";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label30->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::SeaGreen;
			this->label30->Location = System::Drawing::Point(426, 303);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(75, 27);
			this->label30->TabIndex = 55;
			this->label30->Text = L"25.00";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label29->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::SeaGreen;
			this->label29->Location = System::Drawing::Point(229, 300);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 27);
			this->label29->TabIndex = 54;
			this->label29->Text = L"15.00";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label28->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::SeaGreen;
			this->label28->Location = System::Drawing::Point(59, 300);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(75, 27);
			this->label28->TabIndex = 53;
			this->label28->Text = L"10.00";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm3::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label27->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::SeaGreen;
			this->label27->Location = System::Drawing::Point(791, 50);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(75, 27);
			this->label27->TabIndex = 52;
			this->label27->Text = L"20.00";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label26->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::SeaGreen;
			this->label26->Location = System::Drawing::Point(615, 54);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(75, 27);
			this->label26->TabIndex = 51;
			this->label26->Text = L"10.00";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::SeaGreen;
			this->label25->Location = System::Drawing::Point(426, 54);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(75, 27);
			this->label25->TabIndex = 50;
			this->label25->Text = L"12.00";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::SeaGreen;
			this->label24->Location = System::Drawing::Point(229, 54);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(75, 27);
			this->label24->TabIndex = 49;
			this->label24->Text = L"12.00";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::SeaGreen;
			this->label23->Location = System::Drawing::Point(73, 54);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(61, 27);
			this->label23->TabIndex = 48;
			this->label23->Text = L"5.00";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm3::label23_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(700, 513);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(225, 27);
			this->label22->TabIndex = 47;
			this->label22->Text = L"MOUNTAIN DEW";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(583, 513);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 27);
			this->label21->TabIndex = 46;
			this->label21->Text = L"COKE";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(411, 513);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(110, 27);
			this->label20->TabIndex = 45;
			this->label20->Text = L"WATER";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(209, 513);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(165, 27);
			this->label19->TabIndex = 44;
			this->label19->Text = L"EMPANADA";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(11, 513);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(182, 27);
			this->label18->TabIndex = 43;
			this->label18->Text = L"FUDGEE BAR";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(754, 266);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(129, 27);
			this->label17->TabIndex = 42;
			this->label17->Text = L"CANDIES";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(593, 264);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 27);
			this->label16->TabIndex = 41;
			this->label16->Text = L"KIKIAM";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(382, 264);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 27);
			this->label15->TabIndex = 40;
			this->label15->Text = L"GRAHAM BAR";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(216, 266);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 27);
			this->label14->TabIndex = 39;
			this->label14->Text = L"CHIPS";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(38, 264);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(136, 27);
			this->label13->TabIndex = 38;
			this->label13->Text = L"NOODLES";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(758, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 27);
			this->label12->TabIndex = 37;
			this->label12->Text = L"CANTON";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(593, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 27);
			this->label11->TabIndex = 36;
			this->label11->Text = L"KANIN";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(411, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 27);
			this->label10->TabIndex = 35;
			this->label10->Text = L"ITLOG";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(209, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 27);
			this->label9->TabIndex = 34;
			this->label9->Text = L"HATDOG";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm3::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(43, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 27);
			this->label8->TabIndex = 33;
			this->label8->Text = L"SIOMAI";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm3::label8_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox15->Location = System::Drawing::Point(16, 92);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(132, 85);
			this->pictureBox15->TabIndex = 32;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox14->Location = System::Drawing::Point(203, 93);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(131, 85);
			this->pictureBox14->TabIndex = 31;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox13->Location = System::Drawing::Point(394, 92);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(131, 87);
			this->pictureBox13->TabIndex = 30;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox12->Location = System::Drawing::Point(584, 93);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(129, 86);
			this->pictureBox12->TabIndex = 29;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox11->Location = System::Drawing::Point(759, 87);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(134, 85);
			this->pictureBox11->TabIndex = 28;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox10->Location = System::Drawing::Point(16, 333);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(132, 85);
			this->pictureBox10->TabIndex = 27;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox9->Location = System::Drawing::Point(394, 581);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(132, 85);
			this->pictureBox9->TabIndex = 26;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox8->Location = System::Drawing::Point(394, 333);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(132, 85);
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Location = System::Drawing::Point(581, 333);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(132, 85);
			this->pictureBox7->TabIndex = 24;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox6->Location = System::Drawing::Point(759, 333);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(132, 85);
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Location = System::Drawing::Point(16, 581);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(132, 85);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(202, 581);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(132, 85);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(202, 333);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(132, 85);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(572, 588);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(132, 85);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(759, 588);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(132, 85);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox1_Click);
			// 
			// imgkikiam
			// 
			this->imgkikiam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgkikiam.BackgroundImage")));
			this->imgkikiam->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgkikiam->Location = System::Drawing::Point(572, 424);
			this->imgkikiam->Name = L"imgkikiam";
			this->imgkikiam->Size = System::Drawing::Size(161, 66);
			this->imgkikiam->TabIndex = 18;
			this->imgkikiam->TabStop = false;
			this->imgkikiam->Click += gcnew System::EventHandler(this, &MyForm3::imgkikiam_Click_1);
			// 
			// imgkanin
			// 
			this->imgkanin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgkanin.BackgroundImage")));
			this->imgkanin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgkanin->Location = System::Drawing::Point(566, 185);
			this->imgkanin->Name = L"imgkanin";
			this->imgkanin->Size = System::Drawing::Size(161, 66);
			this->imgkanin->TabIndex = 17;
			this->imgkanin->TabStop = false;
			this->imgkanin->Click += gcnew System::EventHandler(this, &MyForm3::imgkanin_Click);
			// 
			// imgitlog
			// 
			this->imgitlog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgitlog.BackgroundImage")));
			this->imgitlog->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgitlog->Location = System::Drawing::Point(387, 183);
			this->imgitlog->Name = L"imgitlog";
			this->imgitlog->Size = System::Drawing::Size(161, 66);
			this->imgitlog->TabIndex = 16;
			this->imgitlog->TabStop = false;
			this->imgitlog->Click += gcnew System::EventHandler(this, &MyForm3::imgitlog_Click);
			// 
			// imggrahambar
			// 
			this->imggrahambar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imggrahambar.BackgroundImage")));
			this->imggrahambar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imggrahambar->Location = System::Drawing::Point(387, 424);
			this->imggrahambar->Name = L"imggrahambar";
			this->imggrahambar->Size = System::Drawing::Size(161, 66);
			this->imggrahambar->TabIndex = 15;
			this->imggrahambar->TabStop = false;
			this->imggrahambar->Click += gcnew System::EventHandler(this, &MyForm3::imggrahambar_Click);
			// 
			// imgcandies
			// 
			this->imgcandies->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgcandies.BackgroundImage")));
			this->imgcandies->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgcandies->Location = System::Drawing::Point(748, 424);
			this->imgcandies->Name = L"imgcandies";
			this->imgcandies->Size = System::Drawing::Size(161, 66);
			this->imgcandies->TabIndex = 14;
			this->imgcandies->TabStop = false;
			this->imgcandies->Click += gcnew System::EventHandler(this, &MyForm3::imgcandies_Click);
			// 
			// imgmountaindew
			// 
			this->imgmountaindew->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgmountaindew.BackgroundImage")));
			this->imgmountaindew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgmountaindew->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgmountaindew->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgmountaindew.ErrorImage")));
			this->imgmountaindew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgmountaindew.Image")));
			this->imgmountaindew->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgmountaindew.InitialImage")));
			this->imgmountaindew->Location = System::Drawing::Point(744, 672);
			this->imgmountaindew->Name = L"imgmountaindew";
			this->imgmountaindew->Size = System::Drawing::Size(161, 66);
			this->imgmountaindew->TabIndex = 13;
			this->imgmountaindew->TabStop = false;
			this->imgmountaindew->Click += gcnew System::EventHandler(this, &MyForm3::imgmountaindew_Click);
			// 
			// imgcoke
			// 
			this->imgcoke->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgcoke.BackgroundImage")));
			this->imgcoke->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgcoke->Location = System::Drawing::Point(566, 672);
			this->imgcoke->Name = L"imgcoke";
			this->imgcoke->Size = System::Drawing::Size(161, 66);
			this->imgcoke->TabIndex = 12;
			this->imgcoke->TabStop = false;
			this->imgcoke->Click += gcnew System::EventHandler(this, &MyForm3::imgcoke_Click);
			// 
			// imghotdog
			// 
			this->imghotdog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imghotdog.BackgroundImage")));
			this->imghotdog->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imghotdog->Location = System::Drawing::Point(202, 183);
			this->imghotdog->Name = L"imghotdog";
			this->imghotdog->Size = System::Drawing::Size(161, 66);
			this->imghotdog->TabIndex = 11;
			this->imghotdog->TabStop = false;
			this->imghotdog->Click += gcnew System::EventHandler(this, &MyForm3::imghotdog_Click);
			// 
			// imgbottledwater
			// 
			this->imgbottledwater->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbottledwater.BackgroundImage")));
			this->imgbottledwater->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgbottledwater->Location = System::Drawing::Point(387, 672);
			this->imgbottledwater->Name = L"imgbottledwater";
			this->imgbottledwater->Size = System::Drawing::Size(161, 66);
			this->imgbottledwater->TabIndex = 10;
			this->imgbottledwater->TabStop = false;
			this->imgbottledwater->Click += gcnew System::EventHandler(this, &MyForm3::imgbottledwater_Click);
			// 
			// imgchips
			// 
			this->imgchips->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgchips.BackgroundImage")));
			this->imgchips->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgchips->Location = System::Drawing::Point(202, 424);
			this->imgchips->Name = L"imgchips";
			this->imgchips->Size = System::Drawing::Size(161, 66);
			this->imgchips->TabIndex = 9;
			this->imgchips->TabStop = false;
			this->imgchips->Click += gcnew System::EventHandler(this, &MyForm3::imgchips_Click);
			// 
			// imgsiomai
			// 
			this->imgsiomai->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgsiomai.BackgroundImage")));
			this->imgsiomai->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgsiomai->Location = System::Drawing::Point(16, 183);
			this->imgsiomai->Name = L"imgsiomai";
			this->imgsiomai->Size = System::Drawing::Size(161, 66);
			this->imgsiomai->TabIndex = 8;
			this->imgsiomai->TabStop = false;
			this->imgsiomai->Click += gcnew System::EventHandler(this, &MyForm3::imgsiomai_Click);
			// 
			// imgnoodles
			// 
			this->imgnoodles->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgnoodles.BackgroundImage")));
			this->imgnoodles->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgnoodles->Location = System::Drawing::Point(16, 424);
			this->imgnoodles->Name = L"imgnoodles";
			this->imgnoodles->Size = System::Drawing::Size(161, 66);
			this->imgnoodles->TabIndex = 7;
			this->imgnoodles->TabStop = false;
			this->imgnoodles->Click += gcnew System::EventHandler(this, &MyForm3::imgnoodles_Click);
			// 
			// imgfugeebar
			// 
			this->imgfugeebar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgfugeebar.BackgroundImage")));
			this->imgfugeebar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgfugeebar->Location = System::Drawing::Point(13, 672);
			this->imgfugeebar->Name = L"imgfugeebar";
			this->imgfugeebar->Size = System::Drawing::Size(161, 66);
			this->imgfugeebar->TabIndex = 6;
			this->imgfugeebar->TabStop = false;
			this->imgfugeebar->Click += gcnew System::EventHandler(this, &MyForm3::imgfugeebar_Click);
			// 
			// imgempanada
			// 
			this->imgempanada->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgempanada.BackgroundImage")));
			this->imgempanada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgempanada->Location = System::Drawing::Point(202, 672);
			this->imgempanada->Name = L"imgempanada";
			this->imgempanada->Size = System::Drawing::Size(161, 66);
			this->imgempanada->TabIndex = 5;
			this->imgempanada->TabStop = false;
			this->imgempanada->Click += gcnew System::EventHandler(this, &MyForm3::imgempanada_Click);
			// 
			// imgpancitcanton
			// 
			this->imgpancitcanton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgpancitcanton.BackgroundImage")));
			this->imgpancitcanton->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgpancitcanton->Location = System::Drawing::Point(748, 185);
			this->imgpancitcanton->Name = L"imgpancitcanton";
			this->imgpancitcanton->Size = System::Drawing::Size(161, 66);
			this->imgpancitcanton->TabIndex = 4;
			this->imgpancitcanton->TabStop = false;
			this->imgpancitcanton->Click += gcnew System::EventHandler(this, &MyForm3::imgpancitcanton_Click);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->panel12);
			this->panel6->Location = System::Drawing::Point(501, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(193, 399);
			this->panel6->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->btnRESET);
			this->panel12->Controls->Add(this->btnSave);
			this->panel12->Controls->Add(this->btnEXIT);
			this->panel12->Controls->Add(this->btnOPEN);
			this->panel12->Controls->Add(this->btnTOTAL);
			this->panel12->Location = System::Drawing::Point(8, 4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(172, 379);
			this->panel12->TabIndex = 4;
			// 
			// btnRESET
			// 
			this->btnRESET->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRESET->Location = System::Drawing::Point(13, 87);
			this->btnRESET->Name = L"btnRESET";
			this->btnRESET->Size = System::Drawing::Size(135, 53);
			this->btnRESET->TabIndex = 36;
			this->btnRESET->Text = L"RESET";
			this->btnRESET->UseVisualStyleBackColor = true;
			this->btnRESET->Click += gcnew System::EventHandler(this, &MyForm3::btnRESET_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(13, 238);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(135, 53);
			this->btnSave->TabIndex = 35;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm3::btnSave_Click);
			// 
			// btnEXIT
			// 
			this->btnEXIT->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEXIT->Location = System::Drawing::Point(13, 146);
			this->btnEXIT->Name = L"btnEXIT";
			this->btnEXIT->Size = System::Drawing::Size(135, 53);
			this->btnEXIT->TabIndex = 34;
			this->btnEXIT->Text = L"EXIT";
			this->btnEXIT->UseVisualStyleBackColor = true;
			this->btnEXIT->Click += gcnew System::EventHandler(this, &MyForm3::btnEXIT_Click);
			// 
			// btnOPEN
			// 
			this->btnOPEN->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOPEN->Location = System::Drawing::Point(13, 297);
			this->btnOPEN->Name = L"btnOPEN";
			this->btnOPEN->Size = System::Drawing::Size(135, 53);
			this->btnOPEN->TabIndex = 33;
			this->btnOPEN->Text = L"OPEN";
			this->btnOPEN->UseVisualStyleBackColor = true;
			this->btnOPEN->Click += gcnew System::EventHandler(this, &MyForm3::btnOPEN_Click);
			// 
			// btnTOTAL
			// 
			this->btnTOTAL->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTOTAL->Location = System::Drawing::Point(13, 28);
			this->btnTOTAL->Name = L"btnTOTAL";
			this->btnTOTAL->Size = System::Drawing::Size(135, 53);
			this->btnTOTAL->TabIndex = 31;
			this->btnTOTAL->Text = L"PAY";
			this->btnTOTAL->UseVisualStyleBackColor = true;
			this->btnTOTAL->Click += gcnew System::EventHandler(this, &MyForm3::btnTOTAL_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(1646, 778);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AMAZEats";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->panel1->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgkikiam))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgkanin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgitlog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imggrahambar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcandies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgmountaindew))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgcoke))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imghotdog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbottledwater))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgchips))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgsiomai))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgnoodles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgfugeebar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgempanada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgpancitcanton))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: int itlogQty = 0, itlogIndex = -1;
private: int kaninQty = 0, kaninIndex = -1;
private: int pancitQty = 0, pancitIndex = -1;
private: int noodlesQty = 0, noodlesIndex = -1;
private: int waterQty = 0, waterIndex = -1;
private: int grahamQty = 0, grahamIndex = -1;
private: int candiesQty = 0, candiesIndex = -1;
private: int empanadaQty = 0, empanadaIndex = -1;
private: int fudgeeQty = 0, fudgeeIndex = -1;
	private: int chipsQty = 0, chipsIndex = -1;
	private: int cokeQty = 0, cokeIndex = -1;
	private: int mountaindewQty = 0, mountaindewIndex = -1;
	   private: int siomaiQty = 0, siomaiIndex = -1;
			  private: int hatdogQty = 0, hatdogIndex = -1;
private: double subtotal = 0;

private: System::Void AddItem(String^ name, double price, int% qty, int% index) {
	qty++;
	subtotal += price;

	String^ line = name + " x" + qty + "   " + Char::ConvertFromUtf32(0x20B1) + (price * qty).ToString("F2");

	if (index < 0 || index >= listBox1->Items->Count)
		index = listBox1->Items->Add(line);
	else
		listBox1->Items[index] = line;

	double tax = subtotal * 0.12;
	txtSUB->Text = subtotal.ToString("F2");
	txtTAX->Text = tax.ToString("F2");
	txtTOTAL->Text = (subtotal + tax).ToString("F2");
}

	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cmbPayment_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Handle the selected payment method here.
}
	private: System::Void NumberClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);   // the button that was clicked
		txtCOST->Text = txtCOST->Text + btn->Text;
	}

	private: System::Void txtCOST_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ clean = "";
		for each (Char c in txtCOST->Text) {
			if (Char::IsDigit(c) || c == '.')
				clean += c;
		}
		if (clean != txtCOST->Text) {
			txtCOST->Text = clean;
			txtCOST->SelectionStart = txtCOST->Text->Length;  // keep cursor at the end
		}
	}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCOST->Text == "")
	{
		txtCOST->Text = "0.";
	}
	else if (!txtCOST->Text->Contains("."))
	{
		txtCOST->Text = txtCOST->Text + ".";
	}

}
 private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtCOST->Text = "0";

}
private: System::Void txtSUB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void imgkikiam_Click(System::Object^ sender, System::EventArgs^ e) {
		   AddItem("Kikiam", 5.00, kikiamQty, kikiamIndex);
	   }
private: System::Void imgitlog_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Itlog", 12.00, itlogQty, itlogIndex);
}
private: System::Void imgkanin_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Kanin", 10.00, kaninQty, kaninIndex);
}
private: System::Void imgpancitcanton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Pancit Canton", 20.00, pancitQty, pancitIndex);
}
private: System::Void imgnoodles_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Noodles", 15.00, noodlesQty, noodlesIndex);
}
private: System::Void imgbottledwater_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Bottled Water", 15.00, waterQty, waterIndex);
}
private: System::Void imggrahambar_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Graham Bar", 25.00, grahamQty, grahamIndex);
}
private: System::Void imgcandies_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Candies", 1.00, candiesQty, candiesIndex);
}
private: System::Void imgempanada_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Empanada", 15.00, empanadaQty, empanadaIndex);
}
private: System::Void imgfugeebar_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Fudgee Bar", 10.00, fudgeeQty, fudgeeIndex);
}
private: System::Void imgsiomai_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Siomai", 5.00, siomaiQty, siomaiIndex);
}
private: System::Void imghotdog_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Hotdog", 12.00, hatdogQty, hatdogIndex);
}
private: System::Void btnRESET_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();

	subtotal = 0;
	kikiamQty = 0;     kikiamIndex = -1;
	itlogQty = 0;     itlogIndex = -1;
	kaninQty = 0;     kaninIndex = -1;
	pancitQty = 0;    pancitIndex = -1;
	noodlesQty = 0;   noodlesIndex = -1;
	waterQty = 0;     waterIndex = -1;
	grahamQty = 0;    grahamIndex = -1;
	candiesQty = 0;   candiesIndex = -1;
	empanadaQty = 0;  empanadaIndex = -1;
	fudgeeQty = 0;    fudgeeIndex = -1;
	chipsQty = 0;     chipsIndex = -1;
	cokeQty = 0;      cokeIndex = -1;
	mountaindewQty = 0; mountaindewIndex = -1;
	siomaiQty = 0;    siomaiIndex = -1;
	hatdogQty = 0;    hatdogIndex = -1;
	chipsQty = 0;    chipsIndex = -1;
	cokeQty = 0;    cokeIndex = -1;
	mountaindewQty = 0;    mountaindewIndex = -1;

	txtCOST->Clear();
	txtSUB->Clear();
	txtTAX->Clear();
	txtTOTAL->Clear();
	txtCHANGE->Clear();

	cmbPayment->SelectedIndex = 0;
	txtCOST->Focus();
}
private: System::Void btnEXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count == 0) {
		MessageBox::Show("There is no order to save.", "Save", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->Title = "Save Order";
	sfd->Filter = "Text files (*.txt)|*.txt";
	sfd->FileName = "order.txt";

	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(sfd->FileName);
			for each (Object ^ item in listBox1->Items)
				writer->WriteLine(item->ToString());   // each order line
			writer->WriteLine("---");                  // separator
			writer->WriteLine("SUBTOTAL=" + txtSUB->Text);
			writer->WriteLine("TAX=" + txtTAX->Text);
			writer->WriteLine("TOTAL=" + txtTOTAL->Text);
			writer->Close();
			MessageBox::Show("Order saved.", "Save", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Could not save the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnOPEN_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Title = "Open Order";
	ofd->Filter = "Text files (*.txt)|*.txt";

	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			array<String^>^ lines = System::IO::File::ReadAllLines(ofd->FileName);
			listBox1->Items->Clear();
			bool inSummary = false;

			for each (String ^ line in lines) {
				if (line == "---") {          // everything after this is the totals
					inSummary = true;
					continue;
				}
				if (!inSummary)
					listBox1->Items->Add(line);
				else if (line->StartsWith("SUBTOTAL="))
					txtSUB->Text = line->Substring(9);
				else if (line->StartsWith("TAX="))
					txtTAX->Text = line->Substring(4);
				else if (line->StartsWith("TOTAL="))
					txtTOTAL->Text = line->Substring(6);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Could not open the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnTOTAL_Click(System::Object ^ sender, System::EventArgs ^ e) {
	double total, cost, change;

	Button^ btn = safe_cast<Button^>(sender);
	String^ peso = Char::ConvertFromUtf32(0x20B1);

	String^ totalText = txtTOTAL->Text->Replace(peso, "₱")->Trim();
	String^ costText = txtCOST->Text->Replace(peso, "₱")->Trim();

	if (!Double::TryParse(totalText, total) || !Double::TryParse(costText, cost)) {
		MessageBox::Show("Please enter valid numbers for Total and Cost.");
		return;
	}

	if (cost < total) {
		MessageBox::Show("Cost is less than the total.");
		return;
	}

	change = cost - total;

	txtCOST->Text = peso + cost.ToString("F2");
	txtCHANGE->Text = peso + change.ToString("F2");


}
private: System::Void txtCHANGE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnREMOVE_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex >= 0)
	{
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	}
}
private: System::Void txtTOTAL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void imgchips_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Chips", 15.00, chipsQty, chipsIndex);
}
private: System::Void imgcoke_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Coke", 25.00, cokeQty, cokeIndex);
}
private: System::Void imgmountaindew_Click(System::Object^ sender, System::EventArgs^ e) {
	AddItem("MountainDew", 25.00, mountaindewQty, mountaindewIndex);
}
private: System::Void imgkikiam_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AddItem("Kikiam", 5.00, kikiamQty, kikiamIndex);

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
// End of class MyForm3 declaration
}