#pragma once

#include <msclr/marshal_cppstd.h>

namespace MyNumbrix {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public: array <Control^, 2>^ CenterButtonArray = gcnew array <Control^, 2>(5, 5);

	private: System::Windows::Forms::Button^ SolveButton;
	public:
	public: array <Control^, 2>^ TextBoxButtonArray = gcnew array <Control^, 2>(5, 5);
	public:
		MyForm(void)
		{
			InitializeComponent();
			for each (Control ^ ctl in this->Controls)
			{

				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Center))
				{
					int x = (Convert::ToInt32(ctl->Text) - 1) % 5;
					int y = (Convert::ToInt32(ctl->Text) - 1) / 5;
					CenterButtonArray[x, y] = ctl;
					ctl->Text = String::Empty;

				}
				if ((dynamic_cast<TextBox^>(ctl) != nullptr) && (ctl->ForeColor == Color::Red))
				{
					int x = (Convert::ToInt32(ctl->Text) - 1) % 5;
					int y = (Convert::ToInt32(ctl->Text) - 1) / 5;
					TextBoxButtonArray[x, y] = ctl;
					ctl->ForeColor == Color::Black;
					ctl->Text = String::Empty;
					TextBoxButtonArray[x, y]->ForeColor = Color::Black;
					TextBoxButtonArray[x, y]->Visible = false;
					TextBoxButtonArray[x, y]->Enabled = false;

				}
			}
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		

		void InitializeComponent(void)
		{
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(80, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(135, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(190, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(245, 53);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(300, 53);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(80, 108);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 49);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(135, 108);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(190, 108);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 49);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(245, 108);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 49);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(300, 108);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 49);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(80, 163);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 49);
			this->button11->TabIndex = 10;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(135, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 49);
			this->button12->TabIndex = 11;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(190, 163);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 49);
			this->button13->TabIndex = 12;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(245, 163);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 49);
			this->button14->TabIndex = 13;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(300, 163);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 49);
			this->button15->TabIndex = 14;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(80, 218);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 49);
			this->button16->TabIndex = 15;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(135, 218);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 49);
			this->button17->TabIndex = 16;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(190, 218);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 49);
			this->button18->TabIndex = 17;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(245, 218);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 49);
			this->button19->TabIndex = 18;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(300, 218);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 49);
			this->button20->TabIndex = 19;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(80, 273);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 49);
			this->button21->TabIndex = 20;
			this->button21->Text = L"21";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(135, 273);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 49);
			this->button22->TabIndex = 21;
			this->button22->Text = L"22";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(190, 273);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 49);
			this->button23->TabIndex = 22;
			this->button23->Text = L"23";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(245, 273);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 49);
			this->button24->TabIndex = 23;
			this->button24->Text = L"24";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(300, 273);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(49, 49);
			this->button25->TabIndex = 24;
			this->button25->Text = L"25";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::TileRedactClick);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(80, 53);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 49);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"1";
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(135, 53);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 49);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"2";
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Red;
			this->textBox3->Location = System::Drawing::Point(190, 53);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 49);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"3";
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Red;
			this->textBox4->Location = System::Drawing::Point(245, 53);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 49);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"4";
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(300, 53);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 49);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"5";
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(80, 108);
			this->textBox6->Margin = System::Windows::Forms::Padding(5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 49);
			this->textBox6->TabIndex = 30;
			this->textBox6->Text = L"6";
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(137, 108);
			this->textBox7->Margin = System::Windows::Forms::Padding(5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 49);
			this->textBox7->TabIndex = 31;
			this->textBox7->Text = L"7";
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::Color::Red;
			this->textBox8->Location = System::Drawing::Point(190, 108);
			this->textBox8->Margin = System::Windows::Forms::Padding(5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(49, 49);
			this->textBox8->TabIndex = 32;
			this->textBox8->Text = L"8";
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::Color::Red;
			this->textBox9->Location = System::Drawing::Point(245, 108);
			this->textBox9->Margin = System::Windows::Forms::Padding(5);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 49);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"9";
			this->textBox9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->ForeColor = System::Drawing::Color::Red;
			this->textBox10->Location = System::Drawing::Point(300, 108);
			this->textBox10->Margin = System::Windows::Forms::Padding(5);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 49);
			this->textBox10->TabIndex = 34;
			this->textBox10->Text = L"10";
			this->textBox10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->ForeColor = System::Drawing::Color::Red;
			this->textBox11->Location = System::Drawing::Point(80, 163);
			this->textBox11->Margin = System::Windows::Forms::Padding(5);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 49);
			this->textBox11->TabIndex = 35;
			this->textBox11->Text = L"11";
			this->textBox11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->ForeColor = System::Drawing::Color::Red;
			this->textBox12->Location = System::Drawing::Point(135, 163);
			this->textBox12->Margin = System::Windows::Forms::Padding(5);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 49);
			this->textBox12->TabIndex = 36;
			this->textBox12->Text = L"12";
			this->textBox12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->ForeColor = System::Drawing::Color::Red;
			this->textBox13->Location = System::Drawing::Point(190, 163);
			this->textBox13->Margin = System::Windows::Forms::Padding(5);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(49, 49);
			this->textBox13->TabIndex = 37;
			this->textBox13->Text = L"13";
			this->textBox13->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->ForeColor = System::Drawing::Color::Red;
			this->textBox14->Location = System::Drawing::Point(245, 163);
			this->textBox14->Margin = System::Windows::Forms::Padding(5);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 49);
			this->textBox14->TabIndex = 38;
			this->textBox14->Text = L"14";
			this->textBox14->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->ForeColor = System::Drawing::Color::Red;
			this->textBox15->Location = System::Drawing::Point(300, 163);
			this->textBox15->Margin = System::Windows::Forms::Padding(5);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(49, 49);
			this->textBox15->TabIndex = 39;
			this->textBox15->Text = L"15";
			this->textBox15->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->ForeColor = System::Drawing::Color::Red;
			this->textBox16->Location = System::Drawing::Point(80, 218);
			this->textBox16->Margin = System::Windows::Forms::Padding(5);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(49, 49);
			this->textBox16->TabIndex = 40;
			this->textBox16->Text = L"16";
			this->textBox16->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->ForeColor = System::Drawing::Color::Red;
			this->textBox17->Location = System::Drawing::Point(135, 218);
			this->textBox17->Margin = System::Windows::Forms::Padding(5);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(49, 49);
			this->textBox17->TabIndex = 41;
			this->textBox17->Text = L"17";
			this->textBox17->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->ForeColor = System::Drawing::Color::Red;
			this->textBox18->Location = System::Drawing::Point(190, 218);
			this->textBox18->Margin = System::Windows::Forms::Padding(5);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(49, 49);
			this->textBox18->TabIndex = 42;
			this->textBox18->Text = L"18";
			this->textBox18->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox19->ForeColor = System::Drawing::Color::Red;
			this->textBox19->Location = System::Drawing::Point(245, 218);
			this->textBox19->Margin = System::Windows::Forms::Padding(5);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(49, 49);
			this->textBox19->TabIndex = 43;
			this->textBox19->Text = L"19";
			this->textBox19->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox20->ForeColor = System::Drawing::Color::Red;
			this->textBox20->Location = System::Drawing::Point(300, 218);
			this->textBox20->Margin = System::Windows::Forms::Padding(5);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(49, 49);
			this->textBox20->TabIndex = 44;
			this->textBox20->Text = L"20";
			this->textBox20->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox21->ForeColor = System::Drawing::Color::Red;
			this->textBox21->Location = System::Drawing::Point(80, 273);
			this->textBox21->Margin = System::Windows::Forms::Padding(5);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(49, 49);
			this->textBox21->TabIndex = 45;
			this->textBox21->Text = L"21";
			this->textBox21->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox22->ForeColor = System::Drawing::Color::Red;
			this->textBox22->Location = System::Drawing::Point(135, 273);
			this->textBox22->Margin = System::Windows::Forms::Padding(5);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(49, 49);
			this->textBox22->TabIndex = 46;
			this->textBox22->Text = L"22";
			this->textBox22->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox23->ForeColor = System::Drawing::Color::Red;
			this->textBox23->Location = System::Drawing::Point(190, 273);
			this->textBox23->Margin = System::Windows::Forms::Padding(5);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(49, 49);
			this->textBox23->TabIndex = 47;
			this->textBox23->Text = L"23";
			this->textBox23->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox24->ForeColor = System::Drawing::Color::Red;
			this->textBox24->Location = System::Drawing::Point(245, 273);
			this->textBox24->Margin = System::Windows::Forms::Padding(5);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(49, 49);
			this->textBox24->TabIndex = 48;
			this->textBox24->Text = L"24";
			this->textBox24->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox25->ForeColor = System::Drawing::Color::Red;
			this->textBox25->Location = System::Drawing::Point(300, 273);
			this->textBox25->Margin = System::Windows::Forms::Padding(5);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(49, 49);
			this->textBox25->TabIndex = 49;
			this->textBox25->Text = L"25";
			this->textBox25->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_Input_KeyDown);
			// 
			// SolveButton
			// 
			this->SolveButton->Location = System::Drawing::Point(497, 196);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(149, 54);
			this->SolveButton->TabIndex = 50;
			this->SolveButton->Text = L"Решить";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::SolveButton_MouseDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 471);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
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
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void TileRedactClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Button^ ctl = dynamic_cast<Button^>(sender); 
	for (int x = 0; x < 5; x++) 
	{
		for (int y = 0; y < 5; y++) 
		{
			if (ctl == dynamic_cast<Button^>(CenterButtonArray[x,y])) 
			{
				ctl->Enabled = false;
				ctl->Visible = false;
				TextBoxButtonArray[x, y]->Visible = true;
				TextBoxButtonArray[x, y]->Enabled = true;
				return;
			}
		}
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Text_Input_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	TextBox^ ctl = dynamic_cast<TextBox^>(sender);
	if (e->KeyCode == Keys::Enter) 
	{
		e->SuppressKeyPress = true;
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (ctl == dynamic_cast<TextBox^>(TextBoxButtonArray[x, y]))
				{
					ctl->Enabled = false;
					ctl->Visible = false;
					if (ctl->Text->Length < 3)
					{
						for (int i = 0; i < ctl->Text->Length; i++)
						{
							if (Convert::ToInt32(ctl->Text[i]) - 48 < 10 && Convert::ToInt32(ctl->Text[i]) - 48 > -1)
							{
								continue;
							}
							else
							{
								ctl->Text = String::Empty;
								CenterButtonArray[x, y]->Text = String::Empty;
								CenterButtonArray[x, y]->Visible = true;
								CenterButtonArray[x, y]->Enabled = true;
								return;
							}
						}
					}
					else 
					{
						ctl->Text = String::Empty;
						CenterButtonArray[x, y]->Text = String::Empty;
						CenterButtonArray[x, y]->Visible = true;
						CenterButtonArray[x, y]->Enabled = true;
						return;
					}
					CenterButtonArray[x, y]->Text = ctl->Text;
					CenterButtonArray[x, y]->Visible = true;
					CenterButtonArray[x, y]->Enabled = true;
				}
			}
		}
	}
	
	
}

	   
	   generic<typename SomeType>
	   ref class List
	   {
	   public:
		   
		   generic<typename SomeType>
		   ref class Node
		   {
		   public:						
			   Node^ PreviousAddress;  
			   Node^ NextAddress;		
			   SomeType data;

			   Node(SomeType data)
			   {
				   this->data = data;
				   this->NextAddress = this->PreviousAddress = nullptr;
			   }
		   };


		   Node<SomeType>^ Head;	
		   Node<SomeType>^ Tail; 
		   int Size;

		   List()
		   {
			   Size = 0;
			   Head = Tail = nullptr;

		   };

		   int get_size() { return Size; };

		   void add_first(SomeType data)
		   {
			   this->Tail = gcnew Node<SomeType>(data);
			   this->Head = Tail;
			   Size++;
		   };

		   void add_on_pos_right(int index, SomeType data)
		   {
			   if (this->get_size() == 0)
			   {
				   this->add_first(data);
			   }
			   else
			   {
				   if (index == this->Size - 1)
				   {
					   this->append(data);
				   }
				   else
				   {
					   int counter = 0;
					   Node<SomeType>^ NewNode = gcnew Node<SomeType>(data);
					   Node<SomeType>^ Current = this->Head;
					   while (index != counter)
					   {
						   Current = Current->NextAddress;
						   counter++;
					   }
					   Node<SomeType>^ Previous = Current;
					   Node<SomeType>^ Next = Current->NextAddress;
					   Current = NewNode;
					   Previous->NextAddress = Current;
					   Current->NextAddress = Next;
					   Next->PreviousAddress = Current;
					   Current->PreviousAddress = Previous;
					   this->Size++;
				   }
			   }
		   }
		   
		   void add_on_pos_left(int index, SomeType data)
		   {
			   if (this->get_size() == 0)
			   {
				   this->add_first(data);
			   }
			   else
			   {
				   if (index == 0)
				   {
					   this->add_front(data);
				   }
				   else
				   {
					   int counter = 0;
					   Node<SomeType>^ NewNode = gcnew Node<SomeType>(data);
					   Node<SomeType>^ Current = this->Head;
					   while (index != counter)
					   {
						   Current = Current->NextAddress;
						   counter++;
					   }
					   Node<SomeType>^ Next = Current;
					   Node<SomeType>^ Previous = Current->PreviousAddress;
					   Current = NewNode;
					   Next->PreviousAddress = Current;
					   Current->PreviousAddress = Previous;
					   Previous->NextAddress = Current;
					   Current->NextAddress = Next;
					   this->Size++;
				   }
			   }
		   }
		   void List<SomeType>::append(SomeType data)
		   {
			   if (this->Tail == nullptr)
			   {
				   this->add_first(data);
				   return;
			   }
			   else
			   {
				   this->Tail->NextAddress = gcnew Node<SomeType>(data);
				   Node<SomeType>^ Buffer = this->Tail;
				   this->Tail = this->Tail->NextAddress;
				   this->Tail->PreviousAddress = Buffer;
				   Size++;
			   }

		   }
		   void add_front(SomeType data)
		   {
			   if (Head == nullptr)
			   {
				   this->add_first(data);
				   return;
			   }
			   else
			   {
				   Node<SomeType>^ Next;
				   Node<SomeType>^ Current = this->Head;
				   Current->PreviousAddress = gcnew Node<SomeType>(data);
				   Next = Current;
				   Current = Current->PreviousAddress;
				   Current->NextAddress = Next;
				   this->Head = Current;
				   Size++;
			   }

		   }
		   void pop_element(int index)
		   {

			   if (this->get_size() == 0)
			   {
				   return;
			   }
			   if (this->get_size() == 1)
			   {
				   delete this->Head;
				   this->Size--;
				   return;
			   }
			   if (index == this->Size - 1)
			   {
				   Node<SomeType>^ Current = Tail;
				   Current = Current->PreviousAddress;
				   this->Tail = Current;
				   delete Current->NextAddress;
				   Current->NextAddress = nullptr;
				   this->Size--;
				   return;
			   }
			   if (index == 0)
			   {
				   Node<SomeType>^ Current = Head;
				   Current = Current->NextAddress;
				   this->Head = Current;
				   delete Current->PreviousAddress;
				   Current->PreviousAddress = nullptr;
				   this->Size--;
				   return;
			   }
			   else
			   {
				   int counter = 0;
				   Node<SomeType>^ Previous = nullptr;
				   Node<SomeType>^ Current = Head;
				   Node<SomeType>^ Next = nullptr;
				   while (counter != index)
				   {
					   Current = Current->NextAddress;
					   counter++;
				   }
				   Previous = Current->PreviousAddress;
				   Next = Current->NextAddress;
				   if (Previous != nullptr)
				   {
					   Previous->NextAddress = Next;
				   }

				   if (Next != nullptr)
				   {
					   Next->PreviousAddress = Previous;
				   }
				   delete Current;
				   this->Size--;
			   }
		   }
		   SomeType% get_low()
		   {
			   return this->Tail->data;
		   };
		   SomeType% get_top()
		   {
			   return this->Head->data;
		   };

		   SomeType% operator[](int index)
		   {
			   if (index == 0)
			   {
				   return this->Head->data;

			   }
			   else
			   {
				   if (index == this->Size - 1)
				   {
					   return this->Tail->data;
				   }
				   else
				   {
					   int counter = 0;
					   Node<SomeType>^ Current = this->Head;
					   while (Current != nullptr)
					   {
						   if (counter == index)
						   {
							   return Current->data;
						   }
						   Current = Current->NextAddress;
						   counter++;
					   }
				   }

			   }
		   };
	   };

	   ref class Hood_t {
	   private:
		   static const int SIZE = 4;
		   List <bool>^ bits = gcnew List<bool>;

	   public:
		   Hood_t() {
			   for (int i = 0; i < SIZE; i++) {
				   bits->append(false);
			   }
		   }

		   void set(int index) {
			   if (index >= 0 && index < SIZE) {
				   bits[index] = true;
			   }
		   }

		   bool operator[](int index){
			   if (index >= 0 && index < SIZE) {
				   return bits[index];
			   }
			   return false;
		   }
	   };
	   
	   ref struct node
	   {
	   public: int val;
	   public: Hood_t^ neighbors;
	   };
	   
	   ref class nSolver
	   {
	   public:
		   List<int> dx;
		   List<int> dy;
		   int wid, hei, max;
		   List<node^> arr;
		   List<bool> weHave;

		   void initialize_dx()
		   {
			   dx.append(-1);
			   dx.append(1);
			   dx.append(0);
			   dx.append(0);
		   }
		   void initialize_dy()
		   {
			   dy.append(0);
			   dy.append(0);
			   dy.append(-1);
			   dy.append(1);
		   }

		   void solve(List<String^>^ puzz, int max_wid)
		   {
			   if (puzz->get_size() < 1) return;
			   wid = max_wid;
			   hei = static_cast<int>(puzz->get_size()) / wid;
			   max = wid * hei;
			   int len = max, c = 0;
			   for (int i = 0; i < len; i++)
			   {
				   node^ newNode = gcnew node;
				   newNode->val = 0;
				   newNode->neighbors = gcnew Hood_t;
				   arr.append(newNode);
			   }
			   for (int i = 0; i < len + 1; i++)
			   {
				   weHave.append(false);
			   }

			   for (int i = 0; i < puzz->get_size(); i++)
			   {
				   System::String^ myString = puzz[i];
				   std::string s = msclr::interop::marshal_as<std::string>(myString);
				   if (s == "*") { max--; arr[c++]->val = -1; continue; }
				   arr[c]->val = atoi(s.c_str());
				   if (arr[c]->val > 0) weHave[arr[c]->val] = true;
				   c++;
			   }

			   solveIt(); 
			   c = 0;
			   for (int i = 0; i < puzz->get_size(); i++)
			   {
				   
				   System::String^ s1 = puzz[i];
				
				   std::string s2 = msclr::interop::marshal_as<std::string>(s1);
				   if (s2 == ".")
					   puzz[i] = msclr::interop::marshal_as<System::String^>(std::to_string(arr[c]->val));
				   c++;
			   }
		   }

		   void solveIt()
		   {
			   int x, y, z; findStart(x, y, z);
			   if (z == 99999) { return; }
			   search(x, y, z + 1, 1);
			   if (z > 1) search(x, y, z - 1, -1);
		   }

		   void findStart(int& x, int& y, int& z)
		   {
			   z = 99999;
			   for (int b = 0; b < hei; b++)
				   for (int a = 0; a < wid; a++)
					   if (arr[a + wid * b]->val > 0 && arr[a + wid * b]->val < z)
					   {
						   x = a; y = b;
						   z = arr[a + wid * b]->val;
					   }

		   }

		   bool search(int x, int y, int w, int dr)
		   {
			   if ((w > max && dr > 0) || (w < 1 && dr < 0) || (w == max && weHave[w])) return true;

			   node^ n = arr[x + y * wid];
			   n->neighbors = getNeighbors(x, y);
			   if (weHave[w])
			   {
				   for (int d = 0; d < 4; d++)
				   {
					   if (n->neighbors[d])
					   {
						   int a = x + dx[d], b = y + dy[d];
						   if (arr[a + b * wid]->val == w)
							   if (search(a, b, w + dr, dr))
								   return true;
					   }
				   }
				   return false;
			   }

			   for (int d = 0; d < 4; d++)
			   {
				   if (n->neighbors[d])
				   {
					   int a = x + dx[d], b = y + dy[d];
					   if (arr[a + b * wid]->val == 0)
					   {
						   arr[a + b * wid]->val = w;
						   if (search(a, b, w + dr, dr))
							   return true;
						   arr[a + b * wid]->val = 0;
					   }
				   }
			   }
			   return false;
		   }

		   Hood_t^ getNeighbors(int x, int y)
		   {
			   Hood_t^ retval = gcnew Hood_t;
			   for (int xx = 0; xx < 4; xx++)
			   {
				   int a = x + dx[xx], b = y + dy[xx];
				   if (a < 0 || b < 0 || a >= wid || b >= hei)
					   continue;
				   if (arr[a + b * wid]->val > -1)
					   retval->set(xx);
			   }
			   return retval;
		   }
	   };
	   
	

private: System::Void SolveButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	List <String^>^ TextBoxButtonNumberArray = gcnew List<String^>;
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++) 
		{
			if (CenterButtonArray[x,y]->Text != String::Empty) 
			{
				TextBoxButtonNumberArray->append(CenterButtonArray[x,y]->Text);
			}
			else 
			{
				TextBoxButtonNumberArray->append(".");
			}
		}
	}
	
	
	int wid = 5;
	nSolver s;
	s.initialize_dx();
	s.initialize_dy();
	s.solve(TextBoxButtonNumberArray, wid);

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			CenterButtonArray[x, y]->Text = TextBoxButtonNumberArray[x * wid + y];
		}
	}

}
};






}
