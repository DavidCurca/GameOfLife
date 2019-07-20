#pragma once
#include <exception>
#include <fstream>

namespace GameOfLife {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	bool map[10][10];
	bool next[10][10];

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::Button^  button101;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Button^  button103;
private: System::Windows::Forms::Button^  button104;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Button^  button105;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(34, 9);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(332, 32);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Conway\'s Game Of Life";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(11, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 33);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(50, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 33);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(89, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 33);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(128, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 33);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(167, 69);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 33);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(206, 69);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 33);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(245, 69);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 33);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(284, 69);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 33);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(323, 69);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 33);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(362, 69);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 33);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(362, 101);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 33);
			this->button11->TabIndex = 20;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(323, 101);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(40, 33);
			this->button12->TabIndex = 19;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(284, 101);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(40, 33);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Location = System::Drawing::Point(245, 101);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(40, 33);
			this->button14->TabIndex = 17;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Location = System::Drawing::Point(206, 101);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(40, 33);
			this->button15->TabIndex = 16;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Location = System::Drawing::Point(167, 101);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 33);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Location = System::Drawing::Point(128, 101);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(40, 33);
			this->button17->TabIndex = 14;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Location = System::Drawing::Point(89, 101);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(40, 33);
			this->button18->TabIndex = 13;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Location = System::Drawing::Point(50, 101);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(40, 33);
			this->button19->TabIndex = 12;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Location = System::Drawing::Point(11, 101);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(40, 33);
			this->button20->TabIndex = 11;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Location = System::Drawing::Point(362, 134);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 33);
			this->button21->TabIndex = 30;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->ForeColor = System::Drawing::SystemColors::Control;
			this->button22->Location = System::Drawing::Point(323, 134);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 33);
			this->button22->TabIndex = 29;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->ForeColor = System::Drawing::SystemColors::Control;
			this->button23->Location = System::Drawing::Point(284, 134);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(40, 33);
			this->button23->TabIndex = 28;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->ForeColor = System::Drawing::SystemColors::Control;
			this->button24->Location = System::Drawing::Point(245, 134);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(40, 33);
			this->button24->TabIndex = 27;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->ForeColor = System::Drawing::SystemColors::Control;
			this->button25->Location = System::Drawing::Point(206, 134);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(40, 33);
			this->button25->TabIndex = 26;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->ForeColor = System::Drawing::SystemColors::Control;
			this->button26->Location = System::Drawing::Point(167, 134);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(40, 33);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->ForeColor = System::Drawing::SystemColors::Control;
			this->button27->Location = System::Drawing::Point(128, 134);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(40, 33);
			this->button27->TabIndex = 24;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->ForeColor = System::Drawing::SystemColors::Control;
			this->button28->Location = System::Drawing::Point(89, 134);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 33);
			this->button28->TabIndex = 23;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->ForeColor = System::Drawing::SystemColors::Control;
			this->button29->Location = System::Drawing::Point(50, 134);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 33);
			this->button29->TabIndex = 22;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->ForeColor = System::Drawing::SystemColors::Control;
			this->button30->Location = System::Drawing::Point(11, 134);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(40, 33);
			this->button30->TabIndex = 21;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->ForeColor = System::Drawing::SystemColors::Control;
			this->button31->Location = System::Drawing::Point(362, 167);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(40, 33);
			this->button31->TabIndex = 40;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->ForeColor = System::Drawing::SystemColors::Control;
			this->button32->Location = System::Drawing::Point(323, 167);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(40, 33);
			this->button32->TabIndex = 39;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->ForeColor = System::Drawing::SystemColors::Control;
			this->button33->Location = System::Drawing::Point(284, 167);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(40, 33);
			this->button33->TabIndex = 38;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->ForeColor = System::Drawing::SystemColors::Control;
			this->button34->Location = System::Drawing::Point(245, 167);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(40, 33);
			this->button34->TabIndex = 37;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->ForeColor = System::Drawing::SystemColors::Control;
			this->button35->Location = System::Drawing::Point(206, 167);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(40, 33);
			this->button35->TabIndex = 36;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->ForeColor = System::Drawing::SystemColors::Control;
			this->button36->Location = System::Drawing::Point(167, 167);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(40, 33);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->ForeColor = System::Drawing::SystemColors::Control;
			this->button37->Location = System::Drawing::Point(128, 167);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(40, 33);
			this->button37->TabIndex = 34;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::White;
			this->button38->ForeColor = System::Drawing::SystemColors::Control;
			this->button38->Location = System::Drawing::Point(89, 167);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(40, 33);
			this->button38->TabIndex = 33;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::White;
			this->button39->ForeColor = System::Drawing::SystemColors::Control;
			this->button39->Location = System::Drawing::Point(50, 167);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(40, 33);
			this->button39->TabIndex = 32;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->ForeColor = System::Drawing::SystemColors::Control;
			this->button40->Location = System::Drawing::Point(11, 167);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(40, 33);
			this->button40->TabIndex = 31;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::White;
			this->button41->ForeColor = System::Drawing::SystemColors::Control;
			this->button41->Location = System::Drawing::Point(362, 199);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(40, 33);
			this->button41->TabIndex = 50;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::White;
			this->button42->ForeColor = System::Drawing::SystemColors::Control;
			this->button42->Location = System::Drawing::Point(323, 199);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(40, 33);
			this->button42->TabIndex = 49;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::White;
			this->button43->ForeColor = System::Drawing::SystemColors::Control;
			this->button43->Location = System::Drawing::Point(284, 199);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(40, 33);
			this->button43->TabIndex = 48;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::White;
			this->button44->ForeColor = System::Drawing::SystemColors::Control;
			this->button44->Location = System::Drawing::Point(245, 199);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(40, 33);
			this->button44->TabIndex = 47;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::White;
			this->button45->ForeColor = System::Drawing::SystemColors::Control;
			this->button45->Location = System::Drawing::Point(206, 199);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(40, 33);
			this->button45->TabIndex = 46;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::White;
			this->button46->ForeColor = System::Drawing::SystemColors::Control;
			this->button46->Location = System::Drawing::Point(167, 199);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(40, 33);
			this->button46->TabIndex = 45;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::White;
			this->button47->ForeColor = System::Drawing::SystemColors::Control;
			this->button47->Location = System::Drawing::Point(128, 199);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(40, 33);
			this->button47->TabIndex = 44;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::White;
			this->button48->ForeColor = System::Drawing::SystemColors::Control;
			this->button48->Location = System::Drawing::Point(89, 199);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(40, 33);
			this->button48->TabIndex = 43;
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::White;
			this->button49->ForeColor = System::Drawing::SystemColors::Control;
			this->button49->Location = System::Drawing::Point(50, 199);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(40, 33);
			this->button49->TabIndex = 42;
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::White;
			this->button50->ForeColor = System::Drawing::SystemColors::Control;
			this->button50->Location = System::Drawing::Point(11, 199);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(40, 33);
			this->button50->TabIndex = 41;
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::White;
			this->button51->ForeColor = System::Drawing::SystemColors::Control;
			this->button51->Location = System::Drawing::Point(362, 361);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(40, 33);
			this->button51->TabIndex = 100;
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::White;
			this->button52->ForeColor = System::Drawing::SystemColors::Control;
			this->button52->Location = System::Drawing::Point(323, 361);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(40, 33);
			this->button52->TabIndex = 99;
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::White;
			this->button53->ForeColor = System::Drawing::SystemColors::Control;
			this->button53->Location = System::Drawing::Point(284, 361);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(40, 33);
			this->button53->TabIndex = 98;
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::White;
			this->button54->ForeColor = System::Drawing::SystemColors::Control;
			this->button54->Location = System::Drawing::Point(245, 361);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(40, 33);
			this->button54->TabIndex = 97;
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::White;
			this->button55->ForeColor = System::Drawing::SystemColors::Control;
			this->button55->Location = System::Drawing::Point(206, 361);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(40, 33);
			this->button55->TabIndex = 96;
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::White;
			this->button56->ForeColor = System::Drawing::SystemColors::Control;
			this->button56->Location = System::Drawing::Point(167, 361);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(40, 33);
			this->button56->TabIndex = 95;
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::White;
			this->button57->ForeColor = System::Drawing::SystemColors::Control;
			this->button57->Location = System::Drawing::Point(128, 361);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(40, 33);
			this->button57->TabIndex = 94;
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::White;
			this->button58->ForeColor = System::Drawing::SystemColors::Control;
			this->button58->Location = System::Drawing::Point(89, 361);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(40, 33);
			this->button58->TabIndex = 93;
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::White;
			this->button59->ForeColor = System::Drawing::SystemColors::Control;
			this->button59->Location = System::Drawing::Point(50, 361);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(40, 33);
			this->button59->TabIndex = 92;
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::White;
			this->button60->ForeColor = System::Drawing::SystemColors::Control;
			this->button60->Location = System::Drawing::Point(11, 361);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(40, 33);
			this->button60->TabIndex = 91;
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button60_Click);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::White;
			this->button61->ForeColor = System::Drawing::SystemColors::Control;
			this->button61->Location = System::Drawing::Point(362, 329);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(40, 33);
			this->button61->TabIndex = 90;
			this->button61->UseVisualStyleBackColor = false;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::White;
			this->button62->ForeColor = System::Drawing::SystemColors::Control;
			this->button62->Location = System::Drawing::Point(323, 329);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(40, 33);
			this->button62->TabIndex = 89;
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::White;
			this->button63->ForeColor = System::Drawing::SystemColors::Control;
			this->button63->Location = System::Drawing::Point(284, 329);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(40, 33);
			this->button63->TabIndex = 88;
			this->button63->UseVisualStyleBackColor = false;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::White;
			this->button64->ForeColor = System::Drawing::SystemColors::Control;
			this->button64->Location = System::Drawing::Point(245, 329);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(40, 33);
			this->button64->TabIndex = 87;
			this->button64->UseVisualStyleBackColor = false;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button64_Click);
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::Color::White;
			this->button65->ForeColor = System::Drawing::SystemColors::Control;
			this->button65->Location = System::Drawing::Point(206, 329);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(40, 33);
			this->button65->TabIndex = 86;
			this->button65->UseVisualStyleBackColor = false;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::White;
			this->button66->ForeColor = System::Drawing::SystemColors::Control;
			this->button66->Location = System::Drawing::Point(167, 329);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(40, 33);
			this->button66->TabIndex = 85;
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::White;
			this->button67->ForeColor = System::Drawing::SystemColors::Control;
			this->button67->Location = System::Drawing::Point(128, 329);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(40, 33);
			this->button67->TabIndex = 84;
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::White;
			this->button68->ForeColor = System::Drawing::SystemColors::Control;
			this->button68->Location = System::Drawing::Point(89, 329);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(40, 33);
			this->button68->TabIndex = 83;
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::Color::White;
			this->button69->ForeColor = System::Drawing::SystemColors::Control;
			this->button69->Location = System::Drawing::Point(50, 329);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(40, 33);
			this->button69->TabIndex = 82;
			this->button69->UseVisualStyleBackColor = false;
			this->button69->Click += gcnew System::EventHandler(this, &MyForm::button69_Click);
			// 
			// button70
			// 
			this->button70->BackColor = System::Drawing::Color::White;
			this->button70->ForeColor = System::Drawing::SystemColors::Control;
			this->button70->Location = System::Drawing::Point(11, 329);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(40, 33);
			this->button70->TabIndex = 81;
			this->button70->UseVisualStyleBackColor = false;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::button70_Click);
			// 
			// button71
			// 
			this->button71->BackColor = System::Drawing::Color::White;
			this->button71->ForeColor = System::Drawing::SystemColors::Control;
			this->button71->Location = System::Drawing::Point(362, 296);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(40, 33);
			this->button71->TabIndex = 80;
			this->button71->UseVisualStyleBackColor = false;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button71_Click);
			// 
			// button72
			// 
			this->button72->BackColor = System::Drawing::Color::White;
			this->button72->ForeColor = System::Drawing::SystemColors::Control;
			this->button72->Location = System::Drawing::Point(323, 296);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(40, 33);
			this->button72->TabIndex = 79;
			this->button72->UseVisualStyleBackColor = false;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button72_Click);
			// 
			// button73
			// 
			this->button73->BackColor = System::Drawing::Color::White;
			this->button73->ForeColor = System::Drawing::SystemColors::Control;
			this->button73->Location = System::Drawing::Point(284, 296);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(40, 33);
			this->button73->TabIndex = 78;
			this->button73->UseVisualStyleBackColor = false;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button73_Click);
			// 
			// button74
			// 
			this->button74->BackColor = System::Drawing::Color::White;
			this->button74->ForeColor = System::Drawing::SystemColors::Control;
			this->button74->Location = System::Drawing::Point(245, 296);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(40, 33);
			this->button74->TabIndex = 77;
			this->button74->UseVisualStyleBackColor = false;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::button74_Click);
			// 
			// button75
			// 
			this->button75->BackColor = System::Drawing::Color::White;
			this->button75->ForeColor = System::Drawing::SystemColors::Control;
			this->button75->Location = System::Drawing::Point(206, 296);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(40, 33);
			this->button75->TabIndex = 76;
			this->button75->UseVisualStyleBackColor = false;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::button75_Click);
			// 
			// button76
			// 
			this->button76->BackColor = System::Drawing::Color::White;
			this->button76->ForeColor = System::Drawing::SystemColors::Control;
			this->button76->Location = System::Drawing::Point(167, 296);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(40, 33);
			this->button76->TabIndex = 75;
			this->button76->UseVisualStyleBackColor = false;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::button76_Click);
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::White;
			this->button77->ForeColor = System::Drawing::SystemColors::Control;
			this->button77->Location = System::Drawing::Point(128, 296);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(40, 33);
			this->button77->TabIndex = 74;
			this->button77->UseVisualStyleBackColor = false;
			this->button77->Click += gcnew System::EventHandler(this, &MyForm::button77_Click);
			// 
			// button78
			// 
			this->button78->BackColor = System::Drawing::Color::White;
			this->button78->ForeColor = System::Drawing::SystemColors::Control;
			this->button78->Location = System::Drawing::Point(89, 296);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(40, 33);
			this->button78->TabIndex = 73;
			this->button78->UseVisualStyleBackColor = false;
			this->button78->Click += gcnew System::EventHandler(this, &MyForm::button78_Click);
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::Color::White;
			this->button79->ForeColor = System::Drawing::SystemColors::Control;
			this->button79->Location = System::Drawing::Point(50, 296);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(40, 33);
			this->button79->TabIndex = 72;
			this->button79->UseVisualStyleBackColor = false;
			this->button79->Click += gcnew System::EventHandler(this, &MyForm::button79_Click);
			// 
			// button80
			// 
			this->button80->BackColor = System::Drawing::Color::White;
			this->button80->ForeColor = System::Drawing::SystemColors::Control;
			this->button80->Location = System::Drawing::Point(11, 296);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(40, 33);
			this->button80->TabIndex = 71;
			this->button80->UseVisualStyleBackColor = false;
			this->button80->Click += gcnew System::EventHandler(this, &MyForm::button80_Click);
			// 
			// button81
			// 
			this->button81->BackColor = System::Drawing::Color::White;
			this->button81->ForeColor = System::Drawing::SystemColors::Control;
			this->button81->Location = System::Drawing::Point(362, 263);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(40, 33);
			this->button81->TabIndex = 70;
			this->button81->UseVisualStyleBackColor = false;
			this->button81->Click += gcnew System::EventHandler(this, &MyForm::button81_Click);
			// 
			// button82
			// 
			this->button82->BackColor = System::Drawing::Color::White;
			this->button82->ForeColor = System::Drawing::SystemColors::Control;
			this->button82->Location = System::Drawing::Point(323, 263);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(40, 33);
			this->button82->TabIndex = 69;
			this->button82->UseVisualStyleBackColor = false;
			this->button82->Click += gcnew System::EventHandler(this, &MyForm::button82_Click);
			// 
			// button83
			// 
			this->button83->BackColor = System::Drawing::Color::White;
			this->button83->ForeColor = System::Drawing::SystemColors::Control;
			this->button83->Location = System::Drawing::Point(284, 263);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(40, 33);
			this->button83->TabIndex = 68;
			this->button83->UseVisualStyleBackColor = false;
			this->button83->Click += gcnew System::EventHandler(this, &MyForm::button83_Click);
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::Color::White;
			this->button84->ForeColor = System::Drawing::SystemColors::Control;
			this->button84->Location = System::Drawing::Point(245, 263);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(40, 33);
			this->button84->TabIndex = 67;
			this->button84->UseVisualStyleBackColor = false;
			this->button84->Click += gcnew System::EventHandler(this, &MyForm::button84_Click);
			// 
			// button85
			// 
			this->button85->BackColor = System::Drawing::Color::White;
			this->button85->ForeColor = System::Drawing::SystemColors::Control;
			this->button85->Location = System::Drawing::Point(206, 263);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(40, 33);
			this->button85->TabIndex = 66;
			this->button85->UseVisualStyleBackColor = false;
			this->button85->Click += gcnew System::EventHandler(this, &MyForm::button85_Click);
			// 
			// button86
			// 
			this->button86->BackColor = System::Drawing::Color::White;
			this->button86->ForeColor = System::Drawing::SystemColors::Control;
			this->button86->Location = System::Drawing::Point(167, 263);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(40, 33);
			this->button86->TabIndex = 65;
			this->button86->UseVisualStyleBackColor = false;
			this->button86->Click += gcnew System::EventHandler(this, &MyForm::button86_Click);
			// 
			// button87
			// 
			this->button87->BackColor = System::Drawing::Color::White;
			this->button87->ForeColor = System::Drawing::SystemColors::Control;
			this->button87->Location = System::Drawing::Point(128, 263);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(40, 33);
			this->button87->TabIndex = 64;
			this->button87->UseVisualStyleBackColor = false;
			this->button87->Click += gcnew System::EventHandler(this, &MyForm::button87_Click);
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::Color::White;
			this->button88->ForeColor = System::Drawing::SystemColors::Control;
			this->button88->Location = System::Drawing::Point(89, 263);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(40, 33);
			this->button88->TabIndex = 63;
			this->button88->UseVisualStyleBackColor = false;
			this->button88->Click += gcnew System::EventHandler(this, &MyForm::button88_Click);
			// 
			// button89
			// 
			this->button89->BackColor = System::Drawing::Color::White;
			this->button89->ForeColor = System::Drawing::SystemColors::Control;
			this->button89->Location = System::Drawing::Point(50, 263);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(40, 33);
			this->button89->TabIndex = 62;
			this->button89->UseVisualStyleBackColor = false;
			this->button89->Click += gcnew System::EventHandler(this, &MyForm::button89_Click);
			// 
			// button90
			// 
			this->button90->BackColor = System::Drawing::Color::White;
			this->button90->ForeColor = System::Drawing::SystemColors::Control;
			this->button90->Location = System::Drawing::Point(11, 263);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(40, 33);
			this->button90->TabIndex = 61;
			this->button90->UseVisualStyleBackColor = false;
			this->button90->Click += gcnew System::EventHandler(this, &MyForm::button90_Click);
			// 
			// button91
			// 
			this->button91->BackColor = System::Drawing::Color::White;
			this->button91->ForeColor = System::Drawing::SystemColors::Control;
			this->button91->Location = System::Drawing::Point(362, 231);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(40, 33);
			this->button91->TabIndex = 60;
			this->button91->UseVisualStyleBackColor = false;
			this->button91->Click += gcnew System::EventHandler(this, &MyForm::button91_Click);
			// 
			// button92
			// 
			this->button92->BackColor = System::Drawing::Color::White;
			this->button92->ForeColor = System::Drawing::SystemColors::Control;
			this->button92->Location = System::Drawing::Point(323, 231);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(40, 33);
			this->button92->TabIndex = 59;
			this->button92->UseVisualStyleBackColor = false;
			this->button92->Click += gcnew System::EventHandler(this, &MyForm::button92_Click);
			// 
			// button93
			// 
			this->button93->BackColor = System::Drawing::Color::White;
			this->button93->ForeColor = System::Drawing::SystemColors::Control;
			this->button93->Location = System::Drawing::Point(284, 231);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(40, 33);
			this->button93->TabIndex = 58;
			this->button93->UseVisualStyleBackColor = false;
			this->button93->Click += gcnew System::EventHandler(this, &MyForm::button93_Click);
			// 
			// button94
			// 
			this->button94->BackColor = System::Drawing::Color::White;
			this->button94->ForeColor = System::Drawing::SystemColors::Control;
			this->button94->Location = System::Drawing::Point(245, 231);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(40, 33);
			this->button94->TabIndex = 57;
			this->button94->UseVisualStyleBackColor = false;
			this->button94->Click += gcnew System::EventHandler(this, &MyForm::button94_Click);
			// 
			// button95
			// 
			this->button95->BackColor = System::Drawing::Color::White;
			this->button95->ForeColor = System::Drawing::SystemColors::Control;
			this->button95->Location = System::Drawing::Point(206, 231);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(40, 33);
			this->button95->TabIndex = 56;
			this->button95->UseVisualStyleBackColor = false;
			this->button95->Click += gcnew System::EventHandler(this, &MyForm::button95_Click);
			// 
			// button96
			// 
			this->button96->BackColor = System::Drawing::Color::White;
			this->button96->ForeColor = System::Drawing::SystemColors::Control;
			this->button96->Location = System::Drawing::Point(167, 231);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(40, 33);
			this->button96->TabIndex = 55;
			this->button96->UseVisualStyleBackColor = false;
			this->button96->Click += gcnew System::EventHandler(this, &MyForm::button96_Click);
			// 
			// button97
			// 
			this->button97->BackColor = System::Drawing::Color::White;
			this->button97->ForeColor = System::Drawing::SystemColors::Control;
			this->button97->Location = System::Drawing::Point(128, 231);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(40, 33);
			this->button97->TabIndex = 54;
			this->button97->UseVisualStyleBackColor = false;
			this->button97->Click += gcnew System::EventHandler(this, &MyForm::button97_Click);
			// 
			// button98
			// 
			this->button98->BackColor = System::Drawing::Color::White;
			this->button98->ForeColor = System::Drawing::SystemColors::Control;
			this->button98->Location = System::Drawing::Point(89, 231);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(40, 33);
			this->button98->TabIndex = 53;
			this->button98->UseVisualStyleBackColor = false;
			this->button98->Click += gcnew System::EventHandler(this, &MyForm::button98_Click);
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::Color::White;
			this->button99->ForeColor = System::Drawing::SystemColors::Control;
			this->button99->Location = System::Drawing::Point(50, 231);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(40, 33);
			this->button99->TabIndex = 52;
			this->button99->UseVisualStyleBackColor = false;
			this->button99->Click += gcnew System::EventHandler(this, &MyForm::button99_Click);
			// 
			// button100
			// 
			this->button100->BackColor = System::Drawing::Color::White;
			this->button100->ForeColor = System::Drawing::SystemColors::Control;
			this->button100->Location = System::Drawing::Point(11, 231);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(40, 33);
			this->button100->TabIndex = 51;
			this->button100->UseVisualStyleBackColor = false;
			this->button100->Click += gcnew System::EventHandler(this, &MyForm::button100_Click);
			// 
			// button101
			// 
			this->button101->Location = System::Drawing::Point(4, 400);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(93, 36);
			this->button101->TabIndex = 101;
			this->button101->Text = L"RESET";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &MyForm::button101_Click);
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(97, 400);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(108, 36);
			this->button102->TabIndex = 102;
			this->button102->Text = L"NEXT STEP";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &MyForm::button102_Click);
			// 
			// button103
			// 
			this->button103->Location = System::Drawing::Point(317, 400);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(93, 36);
			this->button103->TabIndex = 103;
			this->button103->Text = L"EXIT";
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &MyForm::button103_Click);
			// 
			// button104
			// 
			this->button104->Location = System::Drawing::Point(206, 400);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(111, 36);
			this->button104->TabIndex = 104;
			this->button104->Text = L"TEXT MODE";
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &MyForm::button104_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(408, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 17);
			this->label1->TabIndex = 105;
			this->label1->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(408, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 17);
			this->label2->TabIndex = 106;
			this->label2->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(408, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 17);
			this->label3->TabIndex = 107;
			this->label3->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(408, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 108;
			this->label4->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(408, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 17);
			this->label5->TabIndex = 109;
			this->label5->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(408, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 17);
			this->label6->TabIndex = 114;
			this->label6->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(408, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 17);
			this->label7->TabIndex = 113;
			this->label7->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(408, 338);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 17);
			this->label8->TabIndex = 112;
			this->label8->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(408, 321);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 17);
			this->label9->TabIndex = 111;
			this->label9->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(408, 304);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 17);
			this->label10->TabIndex = 110;
			this->label10->Text = L"0 0 0 0 0 0 0 0 0 0";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(408, 198);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 17);
			this->label11->TabIndex = 115;
			this->label11->Text = L"This Is Text Mode";
			this->label11->Visible = false;
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(408, 162);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(119, 28);
			this->button105->TabIndex = 116;
			this->button105->Text = L"HIDE";
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Visible = false;
			this->button105->Click += gcnew System::EventHandler(this, &MyForm::button105_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(408, 77);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 17);
			this->label12->TabIndex = 117;
			this->label12->Text = L"Nothing To See";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(408, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 17);
			this->label13->TabIndex = 118;
			this->label13->Text = L"Here!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 453);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button105);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button104);
			this->Controls->Add(this->button103);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->button101);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button68);
			this->Controls->Add(this->button69);
			this->Controls->Add(this->button70);
			this->Controls->Add(this->button71);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->button76);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button78);
			this->Controls->Add(this->button79);
			this->Controls->Add(this->button80);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->button82);
			this->Controls->Add(this->button83);
			this->Controls->Add(this->button84);
			this->Controls->Add(this->button85);
			this->Controls->Add(this->button86);
			this->Controls->Add(this->button87);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button89);
			this->Controls->Add(this->button90);
			this->Controls->Add(this->button91);
			this->Controls->Add(this->button92);
			this->Controls->Add(this->button93);
			this->Controls->Add(this->button94);
			this->Controls->Add(this->button95);
			this->Controls->Add(this->button96);
			this->Controls->Add(this->button97);
			this->Controls->Add(this->button98);
			this->Controls->Add(this->button99);
			this->Controls->Add(this->button100);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"MyForm";
			this->Text = L"Conway\'s Game Of Life";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void text() {
			label1->Text = ""; label2->Text = ""; label3->Text = ""; label4->Text = ""; label5->Text = "";
			label6->Text = ""; label7->Text = ""; label8->Text = ""; label9->Text = ""; label10->Text = "";
			for (int j = 1; j <= 10; j++) { if (next[1][j] == true) { label1->Text += "1 "; } else { label1->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[2][j] == true) { label2->Text += "1 "; } else { label2->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[3][j] == true) { label3->Text += "1 "; } else { label3->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[4][j] == true) { label4->Text += "1 "; } else { label4->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[5][j] == true) { label5->Text += "1 "; } else { label5->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[6][j] == true) { label10->Text += "1 "; } else { label10->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[7][j] == true) { label9->Text += "1 "; } else { label9->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[8][j] == true) { label8->Text += "1 "; } else { label8->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[9][j] == true) { label7->Text += "1 "; } else { label7->Text += "0 "; } }
			for (int j = 1; j <= 10; j++) { if (next[10][j] == true) { label6->Text += "1 "; } else { label6->Text += "0 "; } }
			change();
		}
		void next_map() {
			text();  change(); text(); for (int i = 1; i <= 10; i++) { for (int j = 1; j <= 10; j++) { map[i][j] = next[i][j]; } } text();
			if (next[1][1] == true) { button1->BackColor = SystemColors::ActiveCaptionText; }else { button1->BackColor = SystemColors::ControlLightLight; }
			if (next[1][2] == true) { button2->BackColor = SystemColors::ActiveCaptionText; }else { button2->BackColor = SystemColors::ControlLightLight; }
			if (next[1][3] == true) { button3->BackColor = SystemColors::ActiveCaptionText; }else { button3->BackColor = SystemColors::ControlLightLight; }
			if (next[1][4] == true) { button4->BackColor = SystemColors::ActiveCaptionText; }else { button4->BackColor = SystemColors::ControlLightLight; }
			if (next[1][5] == true) { button5->BackColor = SystemColors::ActiveCaptionText; }else { button5->BackColor = SystemColors::ControlLightLight; }
			if (next[1][6] == true) { button6->BackColor = SystemColors::ActiveCaptionText; }else { button6->BackColor = SystemColors::ControlLightLight; }
			if (next[1][7] == true) { button7->BackColor = SystemColors::ActiveCaptionText; }else { button7->BackColor = SystemColors::ControlLightLight; }
			if (next[1][8] == true) { button8->BackColor = SystemColors::ActiveCaptionText; }else { button8->BackColor = SystemColors::ControlLightLight; }
			if (next[1][9] == true) { button9->BackColor = SystemColors::ActiveCaptionText; }else { button9->BackColor = SystemColors::ControlLightLight; }
			if (next[1][10] == true) { button10->BackColor = SystemColors::ActiveCaptionText; }else { button10->BackColor = SystemColors::ControlLightLight; }
			if (next[2][1] == true) { button20->BackColor = SystemColors::ActiveCaptionText; }else { button20->BackColor = SystemColors::ControlLightLight; }
			if (next[2][2] == true) { button19->BackColor = SystemColors::ActiveCaptionText; }else { button19->BackColor = SystemColors::ControlLightLight; }
			if (next[2][3] == true) { button18->BackColor = SystemColors::ActiveCaptionText; }else { button18->BackColor = SystemColors::ControlLightLight; }
			if (next[2][4] == true) { button17->BackColor = SystemColors::ActiveCaptionText; }else { button17->BackColor = SystemColors::ControlLightLight; }
			if (next[2][5] == true) { button16->BackColor = SystemColors::ActiveCaptionText; }else { button16->BackColor = SystemColors::ControlLightLight; }
			if (next[2][6] == true) { button15->BackColor = SystemColors::ActiveCaptionText; }else { button15->BackColor = SystemColors::ControlLightLight; }
			if (next[2][7] == true) { button14->BackColor = SystemColors::ActiveCaptionText; }else { button14->BackColor = SystemColors::ControlLightLight; }
			if (next[2][8] == true) { button13->BackColor = SystemColors::ActiveCaptionText; }else { button13->BackColor = SystemColors::ControlLightLight; }
			if (next[2][9] == true) { button12->BackColor = SystemColors::ActiveCaptionText; }else { button12->BackColor = SystemColors::ControlLightLight; }
			if (next[2][10] == true) { button11->BackColor = SystemColors::ActiveCaptionText; }else { button11->BackColor = SystemColors::ControlLightLight; }
			if (next[3][1] == true) { button30->BackColor = SystemColors::ActiveCaptionText; }else { button30->BackColor = SystemColors::ControlLightLight; }
			if (next[3][2] == true) { button29->BackColor = SystemColors::ActiveCaptionText; }else { button29->BackColor = SystemColors::ControlLightLight; }
			if (next[3][3] == true) { button28->BackColor = SystemColors::ActiveCaptionText; }else { button28->BackColor = SystemColors::ControlLightLight; }
			if (next[3][4] == true) { button27->BackColor = SystemColors::ActiveCaptionText; }else { button27->BackColor = SystemColors::ControlLightLight; }
			if (next[3][5] == true) { button26->BackColor = SystemColors::ActiveCaptionText; }else { button26->BackColor = SystemColors::ControlLightLight; }
			if (next[3][6] == true) { button25->BackColor = SystemColors::ActiveCaptionText; }else { button25->BackColor = SystemColors::ControlLightLight; }
			if (next[3][7] == true) { button24->BackColor = SystemColors::ActiveCaptionText; }else { button24->BackColor = SystemColors::ControlLightLight; }
			if (next[3][8] == true) { button23->BackColor = SystemColors::ActiveCaptionText; }else { button23->BackColor = SystemColors::ControlLightLight; }
			if (next[3][9] == true) { button22->BackColor = SystemColors::ActiveCaptionText; }else { button22->BackColor = SystemColors::ControlLightLight; }
			if (next[3][10] == true) { button21->BackColor = SystemColors::ActiveCaptionText; }else { button21->BackColor = SystemColors::ControlLightLight; }
			if (next[3][1] == true) { button30->BackColor = SystemColors::ActiveCaptionText; }else { button30->BackColor = SystemColors::ControlLightLight; }
			if (next[3][2] == true) { button29->BackColor = SystemColors::ActiveCaptionText; }else { button29->BackColor = SystemColors::ControlLightLight; }
			if (next[3][3] == true) { button28->BackColor = SystemColors::ActiveCaptionText; }else { button28->BackColor = SystemColors::ControlLightLight; }
			if (next[3][4] == true) { button27->BackColor = SystemColors::ActiveCaptionText; }else { button27->BackColor = SystemColors::ControlLightLight; }
			if (next[3][5] == true) { button26->BackColor = SystemColors::ActiveCaptionText; }else { button26->BackColor = SystemColors::ControlLightLight; }
			if (next[3][6] == true) { button25->BackColor = SystemColors::ActiveCaptionText; }else { button25->BackColor = SystemColors::ControlLightLight; }
			if (next[3][7] == true) { button24->BackColor = SystemColors::ActiveCaptionText; }else { button24->BackColor = SystemColors::ControlLightLight; }
			if (next[3][8] == true) { button23->BackColor = SystemColors::ActiveCaptionText; }else { button23->BackColor = SystemColors::ControlLightLight; }
			if (next[3][9] == true) { button22->BackColor = SystemColors::ActiveCaptionText; }else { button22->BackColor = SystemColors::ControlLightLight; }
			if (next[3][10] == true) { button21->BackColor = SystemColors::ActiveCaptionText; }else { button21->BackColor = SystemColors::ControlLightLight; }
			if (next[4][1] == true) { button40->BackColor = SystemColors::ActiveCaptionText; }else { button40->BackColor = SystemColors::ControlLightLight; }
			if (next[4][2] == true) { button39->BackColor = SystemColors::ActiveCaptionText; }else { button39->BackColor = SystemColors::ControlLightLight; }
			if (next[4][3] == true) { button38->BackColor = SystemColors::ActiveCaptionText; }else { button38->BackColor = SystemColors::ControlLightLight; }
			if (next[4][4] == true) { button37->BackColor = SystemColors::ActiveCaptionText; }else { button37->BackColor = SystemColors::ControlLightLight; }
			if (next[4][5] == true) { button36->BackColor = SystemColors::ActiveCaptionText; }else { button36->BackColor = SystemColors::ControlLightLight; }
			if (next[4][6] == true) { button35->BackColor = SystemColors::ActiveCaptionText; }else { button35->BackColor = SystemColors::ControlLightLight; }
			if (next[4][7] == true) { button34->BackColor = SystemColors::ActiveCaptionText; }else { button34->BackColor = SystemColors::ControlLightLight; }
			if (next[4][8] == true) { button33->BackColor = SystemColors::ActiveCaptionText; }else { button33->BackColor = SystemColors::ControlLightLight; }
			if (next[4][9] == true) { button32->BackColor = SystemColors::ActiveCaptionText; }else { button32->BackColor = SystemColors::ControlLightLight; }
			if (next[4][10] == true) { button31->BackColor = SystemColors::ActiveCaptionText; }else { button31->BackColor = SystemColors::ControlLightLight; }
			if (next[5][1] == true) { button50->BackColor = SystemColors::ActiveCaptionText; }else { button50->BackColor = SystemColors::ControlLightLight; }
			if (next[5][2] == true) { button49->BackColor = SystemColors::ActiveCaptionText; }else { button49->BackColor = SystemColors::ControlLightLight; }
			if (next[5][3] == true) { button48->BackColor = SystemColors::ActiveCaptionText; }else { button48->BackColor = SystemColors::ControlLightLight; }
			if (next[5][4] == true) { button47->BackColor = SystemColors::ActiveCaptionText; }else { button47->BackColor = SystemColors::ControlLightLight; }
			if (next[5][5] == true) { button46->BackColor = SystemColors::ActiveCaptionText; }else { button46->BackColor = SystemColors::ControlLightLight; }
			if (next[5][6] == true) { button45->BackColor = SystemColors::ActiveCaptionText; }else { button45->BackColor = SystemColors::ControlLightLight; }
			if (next[5][7] == true) { button44->BackColor = SystemColors::ActiveCaptionText; }else { button44->BackColor = SystemColors::ControlLightLight; }
			if (next[5][8] == true) { button43->BackColor = SystemColors::ActiveCaptionText; }else { button43->BackColor = SystemColors::ControlLightLight; }
			if (next[5][9] == true) { button42->BackColor = SystemColors::ActiveCaptionText; }else { button42->BackColor = SystemColors::ControlLightLight; }
			if (next[5][10] == true) { button41->BackColor = SystemColors::ActiveCaptionText; }else { button41->BackColor = SystemColors::ControlLightLight; }
			if (next[6][1] == true) { button100->BackColor = SystemColors::ActiveCaptionText; }else { button100->BackColor = SystemColors::ControlLightLight; }
			if (next[6][2] == true) { button99->BackColor = SystemColors::ActiveCaptionText; }else { button99->BackColor = SystemColors::ControlLightLight; }
			if (next[6][3] == true) { button98->BackColor = SystemColors::ActiveCaptionText; }else { button98->BackColor = SystemColors::ControlLightLight; }
			if (next[6][4] == true) { button97->BackColor = SystemColors::ActiveCaptionText; }else { button97->BackColor = SystemColors::ControlLightLight; }
			if (next[6][5] == true) { button96->BackColor = SystemColors::ActiveCaptionText; }else { button96->BackColor = SystemColors::ControlLightLight; }
			if (next[6][6] == true) { button95->BackColor = SystemColors::ActiveCaptionText; }else { button95->BackColor = SystemColors::ControlLightLight; }
			if (next[6][7] == true) { button94->BackColor = SystemColors::ActiveCaptionText; }else { button94->BackColor = SystemColors::ControlLightLight; }
			if (next[6][8] == true) { button93->BackColor = SystemColors::ActiveCaptionText; }else { button93->BackColor = SystemColors::ControlLightLight; }
			if (next[6][9] == true) { button92->BackColor = SystemColors::ActiveCaptionText; }else { button92->BackColor = SystemColors::ControlLightLight; }
			if (next[6][10] == true) { button91->BackColor = SystemColors::ActiveCaptionText; }else { button91->BackColor = SystemColors::ControlLightLight; }
			if (next[7][1] == true) { button90->BackColor = SystemColors::ActiveCaptionText; }else { button90->BackColor = SystemColors::ControlLightLight; }
			if (next[7][2] == true) { button89->BackColor = SystemColors::ActiveCaptionText; }else { button89->BackColor = SystemColors::ControlLightLight; }
			if (next[7][3] == true) { button88->BackColor = SystemColors::ActiveCaptionText; }else { button88->BackColor = SystemColors::ControlLightLight; }
			if (next[7][4] == true) { button87->BackColor = SystemColors::ActiveCaptionText; }else { button87->BackColor = SystemColors::ControlLightLight; }
			if (next[7][5] == true) { button86->BackColor = SystemColors::ActiveCaptionText; }else { button86->BackColor = SystemColors::ControlLightLight; }
			if (next[7][6] == true) { button85->BackColor = SystemColors::ActiveCaptionText; }else { button85->BackColor = SystemColors::ControlLightLight; }
			if (next[7][7] == true) { button84->BackColor = SystemColors::ActiveCaptionText; }else { button84->BackColor = SystemColors::ControlLightLight; }
			if (next[7][8] == true) { button83->BackColor = SystemColors::ActiveCaptionText; }else { button83->BackColor = SystemColors::ControlLightLight; }
			if (next[7][9] == true) { button82->BackColor = SystemColors::ActiveCaptionText; }else { button82->BackColor = SystemColors::ControlLightLight; }
			if (next[7][10] == true) { button81->BackColor = SystemColors::ActiveCaptionText; }else { button81->BackColor = SystemColors::ControlLightLight; }
			if (next[8][1] == true) { button80->BackColor = SystemColors::ActiveCaptionText; }else { button80->BackColor = SystemColors::ControlLightLight; }
			if (next[8][2] == true) { button79->BackColor = SystemColors::ActiveCaptionText; }else { button79->BackColor = SystemColors::ControlLightLight; }
			if (next[8][3] == true) { button78->BackColor = SystemColors::ActiveCaptionText; }else { button78->BackColor = SystemColors::ControlLightLight; }
			if (next[8][4] == true) { button77->BackColor = SystemColors::ActiveCaptionText; }else { button77->BackColor = SystemColors::ControlLightLight; }
			if (next[8][5] == true) { button76->BackColor = SystemColors::ActiveCaptionText; }else { button76->BackColor = SystemColors::ControlLightLight; }
			if (next[8][6] == true) { button75->BackColor = SystemColors::ActiveCaptionText; }else { button75->BackColor = SystemColors::ControlLightLight; }
			if (next[8][7] == true) { button74->BackColor = SystemColors::ActiveCaptionText; }else { button74->BackColor = SystemColors::ControlLightLight; }
			if (next[8][8] == true) { button73->BackColor = SystemColors::ActiveCaptionText; }else { button73->BackColor = SystemColors::ControlLightLight; }
			if (next[8][9] == true) { button72->BackColor = SystemColors::ActiveCaptionText; }else { button72->BackColor = SystemColors::ControlLightLight; }
			if (next[8][10] == true) { button71->BackColor = SystemColors::ActiveCaptionText; }else { button71->BackColor = SystemColors::ControlLightLight; }
			if (next[9][1] == true) { button70->BackColor = SystemColors::ActiveCaptionText; }else { button70->BackColor = SystemColors::ControlLightLight; }
			if (next[9][2] == true) { button69->BackColor = SystemColors::ActiveCaptionText; }else { button69->BackColor = SystemColors::ControlLightLight; }
			if (next[9][3] == true) { button68->BackColor = SystemColors::ActiveCaptionText; }else { button68->BackColor = SystemColors::ControlLightLight; }
			if (next[9][4] == true) { button67->BackColor = SystemColors::ActiveCaptionText; }else { button67->BackColor = SystemColors::ControlLightLight; }
			if (next[9][5] == true) { button66->BackColor = SystemColors::ActiveCaptionText; }else { button66->BackColor = SystemColors::ControlLightLight; }
			if (next[9][6] == true) { button65->BackColor = SystemColors::ActiveCaptionText; }else { button65->BackColor = SystemColors::ControlLightLight; }
			if (next[9][7] == true) { button64->BackColor = SystemColors::ActiveCaptionText; }else { button64->BackColor = SystemColors::ControlLightLight; }
			if (next[9][8] == true) { button63->BackColor = SystemColors::ActiveCaptionText; }else { button63->BackColor = SystemColors::ControlLightLight; }
			if (next[9][9] == true) { button62->BackColor = SystemColors::ActiveCaptionText; }else { button62->BackColor = SystemColors::ControlLightLight; }
			if (next[9][10] == true) { button61->BackColor = SystemColors::ActiveCaptionText; }else { button61->BackColor = SystemColors::ControlLightLight; }
			if (next[10][1] == true) { button60->BackColor = SystemColors::ActiveCaptionText; }else { button60->BackColor = SystemColors::ControlLightLight; }
			if (next[10][2] == true) { button59->BackColor = SystemColors::ActiveCaptionText; }else { button59->BackColor = SystemColors::ControlLightLight; }
			if (next[10][3] == true) { button58->BackColor = SystemColors::ActiveCaptionText; }else { button58->BackColor = SystemColors::ControlLightLight; }
			if (next[10][4] == true) { button57->BackColor = SystemColors::ActiveCaptionText; }else { button57->BackColor = SystemColors::ControlLightLight; }
			if (next[10][5] == true) { button56->BackColor = SystemColors::ActiveCaptionText; }else { button56->BackColor = SystemColors::ControlLightLight; }
			if (next[10][6] == true) { button55->BackColor = SystemColors::ActiveCaptionText; }else { button55->BackColor = SystemColors::ControlLightLight; }
			if (next[10][7] == true) { button54->BackColor = SystemColors::ActiveCaptionText; }else { button54->BackColor = SystemColors::ControlLightLight; }
			if (next[10][8] == true) { button53->BackColor = SystemColors::ActiveCaptionText; }else { button53->BackColor = SystemColors::ControlLightLight; }
			if (next[10][9] == true) { button52->BackColor = SystemColors::ActiveCaptionText; }else { button52->BackColor = SystemColors::ControlLightLight; }
			if (next[10][10] == true) { button51->BackColor = SystemColors::ActiveCaptionText; }else { button51->BackColor = SystemColors::ControlLightLight; }
		}
		void change() {
			std::ofstream fout("date.txt");
			for (int i = 1; i <= 10; i++) {
				for (int j = 1; j <= 10; j++) {
					int alive = 0;
					if (map[i - 1][j - 1] == true) { alive++; }
					if (map[i][j - 1] == true) { alive++; }
					if (map[i + 1][j - 1] == true) { alive++; }
					if (map[i + 1][j] == true) { alive++; }
					if (map[i + 1][j + 1] == true) { alive++; }
					if (map[i][j + 1] == true) { alive++; }
					if (map[i - 1][j + 1] == true) { alive++; }
					if (map[i - 1][j] == true) { alive++; }
					
					if (map[i][j] == false && alive == 3) {
						next[i][j] = 1;
					}
					else if (map[i][j] == true && (alive < 2 || alive > 3)) {
						next[i][j] = 0;
					}
					else {
						next[i][j] = map[i][j];
					}
					fout << alive;
				}
				fout << std::endl;
			}
			fout << std::endl;
			for (int i = 1; i <= 10; i++) {
				for (int j = 1; j <= 10; j++) {
					if (next[i][j] == true) {
						fout << "1";
					}else{
						fout << "0";
					}
				}
				fout << std::endl;
			}
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {SystemColors::ControlLightLight;
		if (map[1][1] == false) { map[1][1] = true; button1->BackColor = SystemColors::ActiveCaptionText;}else {map[1][1] = false; button1->BackColor = SystemColors::ControlLightLight;}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		text();
	}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][1] == false) { map[3][1] = true; button30->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][1] = false; button30->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][9] == false) { map[3][9] = true; button22->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][9] = false; button22->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][8] == false) { map[3][8] = true; button23->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][8] = false; button23->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][7] == false) { map[3][7] = true; button24->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][7] = false; button24->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][6] == false) { map[3][6] = true; button25->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][6] = false; button25->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][5] == false) { map[3][5] = true; button26->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][5] = false; button26->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][4] == false) { map[3][4] = true; button27->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][4] = false; button27->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][3] == false) { map[3][3] = true; button28->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][3] = false; button28->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][2] == false) { map[3][2] = true; button29->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][2] = false; button29->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[3][10] == false) { map[3][10] = true; button21->BackColor = SystemColors::ActiveCaptionText; }
	else { map[3][10] = false; button21->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][2] == false) { map[1][2] = true; button2->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][2] = false; button2->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][3] == false) { map[1][3] = true; button3->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][3] = false; button3->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][4] == false) { map[1][4] = true; button4->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][4] = false; button4->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][6] == false) { map[1][6] = true; button6->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][6] = false; button6->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][5] == false) { map[1][5] = true; button5->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][5] = false; button5->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][7] == false) { map[1][7] = true; button7->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][7] = false; button7->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][8] == false) { map[1][8] = true; button8->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][8] = false; button8->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][9] == false) { map[1][9] = true; button9->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][9] = false; button9->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[1][10] == false) { map[1][10] = true; button10->BackColor = SystemColors::ActiveCaptionText; }
	else { map[1][10] = false; button10->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][1] == false) { map[2][1] = true; button20->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][1] = false; button20->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][2] == false) { map[2][2] = true; button19->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][2] = false; button19->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][3] == false) { map[2][3] = true; button18->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][3] = false; button18->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][4] == false) { map[2][4] = true; button17->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][4] = false; button17->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][5] == false) { map[2][5] = true; button16->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][5] = false; button16->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][6] == false) { map[2][6] = true; button15->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][6] = false; button15->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][7] == false) { map[2][7] = true; button14->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][7] = false; button14->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][8] == false) { map[2][8] = true; button13->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][8] = false; button13->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][9] == false) { map[2][9] = true; button12->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][9] = false; button12->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[2][10] == false) { map[2][10] = true; button11->BackColor = SystemColors::ActiveCaptionText; }
	else { map[2][10] = false; button11->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][1] == false) { map[4][1] = true; button40->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][1] = false; button40->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][2] == false) { map[4][2] = true; button39->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][2] = false; button39->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][3] == false) { map[4][3] = true; button38->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][3] = false; button38->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][4] == false) { map[4][4] = true; button37->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][4] = false; button37->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][5] == false) { map[4][5] = true; button36->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][5] = false; button36->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][6] == false) { map[4][6] = true; button35->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][6] = false; button35->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][7] == false) { map[4][7] = true; button34->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][7] = false; button34->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][8] == false) { map[4][8] = true; button33->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][8] = false; button33->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][9] == false) { map[4][9] = true; button32->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][9] = false; button32->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[4][10] == false) { map[4][10] = true; button31->BackColor = SystemColors::ActiveCaptionText; }
	else { map[4][10] = false; button31->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][1] == false) { map[5][1] = true; button50->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][1] = false; button50->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][9] == false) { map[5][9] = true; button42->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][9] = false; button42->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][8] == false) { map[5][8] = true; button43->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][8] = false; button43->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][7] == false) { map[5][7] = true; button44->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][7] = false; button44->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][6] == false) { map[5][6] = true; button45->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][6] = false; button45->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][5] == false) { map[5][5] = true; button46->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][5] = false; button46->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][4] == false) { map[5][4] = true; button47->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][4] = false; button47->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][3] == false) { map[5][3] = true; button48->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][3] = false; button48->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][2] == false) { map[5][2] = true; button49->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][2] = false; button49->BackColor = SystemColors::ControlLightLight; }
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[5][10] == false) { map[5][10] = true; button41->BackColor = SystemColors::ActiveCaptionText; }
	else { map[5][10] = false; button41->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][1] == false) { map[6][1] = true; button100->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][1] = false; button100->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][9] == false) { map[6][9] = true; button92->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][9] = false; button92->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][8] == false) { map[6][8] = true; button93->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][8] = false; button93->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][7] == false) { map[6][7] = true; button94->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][7] = false; button94->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][6] == false) { map[6][6] = true; button95->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][6] = false; button95->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][5] == false) { map[6][5] = true; button96->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][5] = false; button96->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][4] == false) { map[6][4] = true; button97->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][4] = false; button97->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][3] == false) { map[6][3] = true; button98->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][3] = false; button98->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][2] == false) { map[6][2] = true; button99->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][2] = false; button99->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[6][10] == false) { map[6][10] = true; button91->BackColor = SystemColors::ActiveCaptionText; }
	else { map[6][10] = false; button91->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][1] == false) { map[7][1] = true; button90->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][1] = false; button90->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][9] == false) { map[7][9] = true; button82->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][9] = false; button82->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][8] == false) { map[7][8] = true; button83->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][8] = false; button83->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][7] == false) { map[7][7] = true; button84->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][7] = false; button84->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][6] == false) { map[7][6] = true; button85->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][6] = false; button85->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][5] == false) { map[7][5] = true; button86->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][5] = false; button86->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][4] == false) { map[7][4] = true; button87->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][4] = false; button87->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][3] == false) { map[7][3] = true; button88->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][3] = false; button88->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][2] == false) { map[7][2] = true; button89->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][2] = false; button89->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[7][10] == false) { map[7][10] = true; button81->BackColor = SystemColors::ActiveCaptionText; }
	else { map[7][10] = false; button81->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][1] == false) { map[8][1] = true; button80->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][1] = false; button80->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][9] == false) { map[8][9] = true; button72->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][9] = false; button72->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][8] == false) { map[8][8] = true; button73->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][8] = false; button73->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][7] == false) { map[8][7] = true; button74->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][7] = false; button74->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][6] == false) { map[8][6] = true; button75->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][6] = false; button75->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][5] == false) { map[8][5] = true; button76->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][5] = false; button76->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][4] == false) { map[8][4] = true; button77->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][4] = false; button77->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][3] == false) { map[8][3] = true; button78->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][3] = false; button78->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][2] == false) { map[8][2] = true; button79->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][2] = false; button79->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[8][10] == false) { map[8][10] = true; button71->BackColor = SystemColors::ActiveCaptionText; }
	else { map[8][10] = false; button71->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][1] == false) { map[9][1] = true; button70->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][1] = false; button70->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][9] == false) { map[9][9] = true; button62->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][9] = false; button62->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][8] == false) { map[9][8] = true; button63->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][8] = false; button63->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][7] == false) { map[9][7] = true; button64->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][7] = false; button64->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][6] == false) { map[9][6] = true; button65->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][6] = false; button65->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][5] == false) { map[9][5] = true; button66->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][5] = false; button66->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][4] == false) { map[9][4] = true; button67->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][4] = false; button67->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][3] == false) { map[9][3] = true; button68->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][3] = false; button68->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][2] == false) { map[9][2] = true; button69->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][2] = false; button69->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[9][10] == false) { map[9][10] = true; button61->BackColor = SystemColors::ActiveCaptionText; }
	else { map[9][10] = false; button61->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][1] == false) { map[10][1] = true; button60->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][1] = false; button60->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][9] == false) { map[10][9] = true; button52->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][9]= false; button52->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][8] == false) { map[10][8] = true; button53->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][8] = false; button53->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][7] == false) { map[10][7] = true; button54->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][7] = false; button54->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][6] == false) { map[10][6] = true; button55->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][6] = false; button55->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][5] == false) { map[10][5] = true; button56->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][5] = false; button56->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][4] == false) { map[10][4] = true; button57->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][4] = false; button57->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][3] == false) { map[10][3] = true; button58->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][3] = false; button58->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][2] == false) { map[10][2] = true; button59->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][2] = false; button59->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	if (map[10][10] == false) { map[10][10] = true; button51->BackColor = SystemColors::ActiveCaptionText; }
	else { map[10][10] = false; button51->BackColor = SystemColors::ControlLightLight; }
	text();
}
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 1; i <= 10; i++) { for (int j = 1; j <= 10; j++) { next[i][j] = map[i][j]; } } text();  next_map(); text();
}
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false; label2->Visible = false; label3->Visible = false; label4->Visible = false; label5->Visible = false;
	label6->Visible = false; label7->Visible = false; label8->Visible = false; label9->Visible = false; label10->Visible = false;
	label11->Visible = false; button105->Visible = false;
}
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = true; label2->Visible = true; label3->Visible = true; label4->Visible = true; label5->Visible = true;
	label6->Visible = true; label7->Visible = true; label8->Visible = true; label9->Visible = true; label10->Visible = true;
	label11->Visible = true; button105->Visible = true;
}
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 1; i <= 10; i++) {
		map[1][i] = false; map[2][i] = false; map[3][i] = false; map[4][i] = false; map[5][i] = false;
		map[6][i] = false; map[7][i] = false; map[8][i] = false; map[9][i] = false; map[10][i] = false;
		next[1][i] = false; next[2][i] = false; next[3][i] = false; next[4][i] = false; next[5][i] = false;
		next[6][i] = false; next[7][i] = false; next[8][i] = false; next[9][i] = false; next[10][i] = false;
	}
	text();
	button1->BackColor = SystemColors::ControlLightLight; button2->BackColor = SystemColors::ControlLightLight; button3->BackColor = SystemColors::ControlLightLight; button4->BackColor = SystemColors::ControlLightLight; button5->BackColor = SystemColors::ControlLightLight; button6->BackColor = SystemColors::ControlLightLight; button7->BackColor = SystemColors::ControlLightLight; button8->BackColor = SystemColors::ControlLightLight; button9->BackColor = SystemColors::ControlLightLight; button10->BackColor = SystemColors::ControlLightLight;
	button11->BackColor = SystemColors::ControlLightLight; button12->BackColor = SystemColors::ControlLightLight; button13->BackColor = SystemColors::ControlLightLight; button14->BackColor = SystemColors::ControlLightLight; button15->BackColor = SystemColors::ControlLightLight; button16->BackColor = SystemColors::ControlLightLight; button17->BackColor = SystemColors::ControlLightLight; button18->BackColor = SystemColors::ControlLightLight; button19->BackColor = SystemColors::ControlLightLight; button20->BackColor = SystemColors::ControlLightLight;
	button21->BackColor = SystemColors::ControlLightLight; button22->BackColor = SystemColors::ControlLightLight; button23->BackColor = SystemColors::ControlLightLight; button24->BackColor = SystemColors::ControlLightLight; button25->BackColor = SystemColors::ControlLightLight; button26->BackColor = SystemColors::ControlLightLight; button27->BackColor = SystemColors::ControlLightLight; button28->BackColor = SystemColors::ControlLightLight; button29->BackColor = SystemColors::ControlLightLight; button30->BackColor = SystemColors::ControlLightLight;
	button31->BackColor = SystemColors::ControlLightLight; button32->BackColor = SystemColors::ControlLightLight; button33->BackColor = SystemColors::ControlLightLight; button34->BackColor = SystemColors::ControlLightLight; button35->BackColor = SystemColors::ControlLightLight; button36->BackColor = SystemColors::ControlLightLight; button37->BackColor = SystemColors::ControlLightLight; button38->BackColor = SystemColors::ControlLightLight; button39->BackColor = SystemColors::ControlLightLight; button40->BackColor = SystemColors::ControlLightLight;
	button41->BackColor = SystemColors::ControlLightLight; button42->BackColor = SystemColors::ControlLightLight; button43->BackColor = SystemColors::ControlLightLight; button44->BackColor = SystemColors::ControlLightLight; button45->BackColor = SystemColors::ControlLightLight; button46->BackColor = SystemColors::ControlLightLight; button47->BackColor = SystemColors::ControlLightLight; button48->BackColor = SystemColors::ControlLightLight; button49->BackColor = SystemColors::ControlLightLight; button50->BackColor = SystemColors::ControlLightLight;
	button51->BackColor = SystemColors::ControlLightLight; button52->BackColor = SystemColors::ControlLightLight; button53->BackColor = SystemColors::ControlLightLight; button54->BackColor = SystemColors::ControlLightLight; button55->BackColor = SystemColors::ControlLightLight; button56->BackColor = SystemColors::ControlLightLight; button57->BackColor = SystemColors::ControlLightLight; button58->BackColor = SystemColors::ControlLightLight; button59->BackColor = SystemColors::ControlLightLight; button60->BackColor = SystemColors::ControlLightLight;
	button61->BackColor = SystemColors::ControlLightLight; button62->BackColor = SystemColors::ControlLightLight; button63->BackColor = SystemColors::ControlLightLight; button64->BackColor = SystemColors::ControlLightLight; button65->BackColor = SystemColors::ControlLightLight; button66->BackColor = SystemColors::ControlLightLight; button67->BackColor = SystemColors::ControlLightLight; button68->BackColor = SystemColors::ControlLightLight; button69->BackColor = SystemColors::ControlLightLight; button70->BackColor = SystemColors::ControlLightLight;
	button71->BackColor = SystemColors::ControlLightLight; button72->BackColor = SystemColors::ControlLightLight; button73->BackColor = SystemColors::ControlLightLight; button74->BackColor = SystemColors::ControlLightLight; button75->BackColor = SystemColors::ControlLightLight; button76->BackColor = SystemColors::ControlLightLight; button77->BackColor = SystemColors::ControlLightLight; button78->BackColor = SystemColors::ControlLightLight; button79->BackColor = SystemColors::ControlLightLight; button80->BackColor = SystemColors::ControlLightLight;
	button81->BackColor = SystemColors::ControlLightLight; button82->BackColor = SystemColors::ControlLightLight; button83->BackColor = SystemColors::ControlLightLight; button84->BackColor = SystemColors::ControlLightLight; button85->BackColor = SystemColors::ControlLightLight; button86->BackColor = SystemColors::ControlLightLight; button87->BackColor = SystemColors::ControlLightLight; button88->BackColor = SystemColors::ControlLightLight; button89->BackColor = SystemColors::ControlLightLight; button90->BackColor = SystemColors::ControlLightLight;
	button91->BackColor = SystemColors::ControlLightLight; button92->BackColor = SystemColors::ControlLightLight; button93->BackColor = SystemColors::ControlLightLight; button94->BackColor = SystemColors::ControlLightLight; button95->BackColor = SystemColors::ControlLightLight; button96->BackColor = SystemColors::ControlLightLight; button97->BackColor = SystemColors::ControlLightLight; button98->BackColor = SystemColors::ControlLightLight; button99->BackColor = SystemColors::ControlLightLight; button100->BackColor = SystemColors::ControlLightLight;
}
};
}
