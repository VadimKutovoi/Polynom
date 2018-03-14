#pragma once
#include"C:\Users\kutovoj.v\Desktop\Polynom\TList\include\TList.h"
#include <msclr\marshal_cppstd.h>

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	TPolynom poly1, poly2;
	TMonom inp;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  Polynom1;
	private: System::Windows::Forms::TextBox^  Polynom2;

	private: System::Windows::Forms::TextBox^  result;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  minus;
	private: System::Windows::Forms::TextBox^  Constant;
	private: System::Windows::Forms::Label^  constlabel;
	private: System::Windows::Forms::Button^  multonconst;
	private: System::Windows::Forms::Button^  multonmonom;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Polynom1 = (gcnew System::Windows::Forms::TextBox());
			this->Polynom2 = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->Constant = (gcnew System::Windows::Forms::TextBox());
			this->constlabel = (gcnew System::Windows::Forms::Label());
			this->multonconst = (gcnew System::Windows::Forms::Button());
			this->multonmonom = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(20, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(371, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add monome to 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(30, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"x^";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(83, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"y^";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(140, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"z^";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(20, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(114, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(20, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(4, 12);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(20, 20);
			this->textBox6->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(478, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 43);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Add monome to 2";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Polynom1
			// 
			this->Polynom1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Polynom1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Polynom1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Polynom1->ForeColor = System::Drawing::Color::White;
			this->Polynom1->Location = System::Drawing::Point(12, 158);
			this->Polynom1->Name = L"Polynom1";
			this->Polynom1->Size = System::Drawing::Size(497, 27);
			this->Polynom1->TabIndex = 13;
			// 
			// Polynom2
			// 
			this->Polynom2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Polynom2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Polynom2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Polynom2->ForeColor = System::Drawing::Color::White;
			this->Polynom2->Location = System::Drawing::Point(12, 184);
			this->Polynom2->Name = L"Polynom2";
			this->Polynom2->Size = System::Drawing::Size(497, 27);
			this->Polynom2->TabIndex = 14;
			// 
			// result
			// 
			this->result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->result->BackColor = System::Drawing::Color::LightSlateGray;
			this->result->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->Location = System::Drawing::Point(12, 231);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(497, 27);
			this->result->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(515, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 18);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Polynom1";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(515, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 18);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Polynom2";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(515, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 18);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Result";
			// 
			// plus
			// 
			this->plus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->plus->BackColor = System::Drawing::Color::CornflowerBlue;
			this->plus->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->plus->Location = System::Drawing::Point(371, 59);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(101, 43);
			this->plus->TabIndex = 19;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minus->BackColor = System::Drawing::Color::CornflowerBlue;
			this->minus->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->minus->Location = System::Drawing::Point(477, 59);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(101, 43);
			this->minus->TabIndex = 20;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// Constant
			// 
			this->Constant->Location = System::Drawing::Point(4, 48);
			this->Constant->Name = L"Constant";
			this->Constant->Size = System::Drawing::Size(20, 20);
			this->Constant->TabIndex = 21;
			// 
			// constlabel
			// 
			this->constlabel->AutoSize = true;
			this->constlabel->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->constlabel->ForeColor = System::Drawing::Color::White;
			this->constlabel->Location = System::Drawing::Point(30, 51);
			this->constlabel->Name = L"constlabel";
			this->constlabel->Size = System::Drawing::Size(15, 13);
			this->constlabel->TabIndex = 22;
			this->constlabel->Text = L"C";
			// 
			// multonconst
			// 
			this->multonconst->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->multonconst->BackColor = System::Drawing::Color::CornflowerBlue;
			this->multonconst->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multonconst->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->multonconst->Location = System::Drawing::Point(61, 41);
			this->multonconst->Name = L"multonconst";
			this->multonconst->Size = System::Drawing::Size(73, 32);
			this->multonconst->TabIndex = 23;
			this->multonconst->Text = L"*";
			this->multonconst->UseVisualStyleBackColor = false;
			this->multonconst->Click += gcnew System::EventHandler(this, &MyForm::multonconst_Click);
			// 
			// multonmonom
			// 
			this->multonmonom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->multonmonom->BackColor = System::Drawing::Color::CornflowerBlue;
			this->multonmonom->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multonmonom->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->multonmonom->Location = System::Drawing::Point(371, 109);
			this->multonmonom->Name = L"multonmonom";
			this->multonmonom->Size = System::Drawing::Size(101, 43);
			this->multonmonom->TabIndex = 24;
			this->multonmonom->Text = L"*";
			this->multonmonom->UseVisualStyleBackColor = false;
			this->multonmonom->Click += gcnew System::EventHandler(this, &MyForm::multonmonom_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(608, 420);
			this->Controls->Add(this->multonmonom);
			this->Controls->Add(this->multonconst);
			this->Controls->Add(this->constlabel);
			this->Controls->Add(this->Constant);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->result);
			this->Controls->Add(this->Polynom2);
			this->Controls->Add(this->Polynom1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		//add monome
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		inp.coeff = Convert::ToInt32(textBox6->Text);
		inp.x = Convert::ToInt32(textBox1->Text);
		inp.y = Convert::ToInt32(textBox5->Text);
		inp.z = Convert::ToInt32(textBox4->Text);

		poly1.insFirst(inp);

		Polynom1->Text = "";

		for (poly1.reset(); !poly1.isEnd(); poly1.goNext())
		{	
			Polynom1->Text += poly1.getElem().coeff + "*x^" + poly1.getElem().x + "*y^" + poly1.getElem().y + "*z^" + poly1.getElem().z;	
			if (!poly1.isLast()) Polynom1->Text += "+";
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		inp.coeff = Convert::ToInt32(textBox6->Text);
		inp.x = Convert::ToInt32(textBox1->Text);
		inp.y = Convert::ToInt32(textBox5->Text);
		inp.z = Convert::ToInt32(textBox4->Text);

		poly2.insFirst(inp);

		Polynom2->Text = "";

		for (poly2.reset(); !poly2.isEnd(); poly2.goNext())
		{
			Polynom2->Text += poly2.getElem().coeff + "*x^" + poly2.getElem().x + "*y^" + poly2.getElem().y + "*z^" + poly2.getElem().z;
			if (!poly2.isLast()) Polynom2->Text += "+";
		}
}
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
		poly1 += poly2;

		for (poly1.reset();!poly1.isEnd();poly1.goNext())
		{
			result->Text += poly1.getElem().coeff + "*x^" + poly1.getElem().x + "*y^" + poly1.getElem().y + "*z^" + poly1.getElem().z;
			if (!poly1.isLast()) result->Text += "+";
		}
}
private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
		poly1 -= poly2;

		for (poly1.reset();!poly1.isEnd();poly1.goNext())
		{
			result->Text += poly1.getElem().coeff + "*x^" + poly1.getElem().x + "*y^" + poly1.getElem().y + "*z^" + poly1.getElem().z;
			if (!poly1.isLast()) result->Text += "+";
		}
}
private: System::Void multonconst_Click(System::Object^  sender, System::EventArgs^  e) { 
		poly1 *= Convert::ToInt32(Constant->Text);

		if (Convert::ToInt32(Constant->Text) == 0) result->Text = "0";
		else
		{
			for (poly1.reset();!poly1.isEnd();poly1.goNext())
			{
				result->Text += poly1.getElem().coeff + "*x^" + poly1.getElem().x + "*y^" + poly1.getElem().y + "*z^" + poly1.getElem().z;
				if (!poly1.isLast()) result->Text += "+";
			}
		}
}
private: System::Void multonmonom_Click(System::Object^  sender, System::EventArgs^  e) {
		
		inp.coeff = Convert::ToInt32(textBox6->Text);
		inp.x = Convert::ToInt32(textBox1->Text);
		inp.y = Convert::ToInt32(textBox5->Text);
		inp.z = Convert::ToInt32(textBox4->Text);

		poly1 *= inp;

		for (poly1.reset();!poly1.isEnd();poly1.goNext())
		{
			result->Text += poly1.getElem().coeff + "*x^" + poly1.getElem().x + "*y^" + poly1.getElem().y + "*z^" + poly1.getElem().z;
			if (!poly1.isLast()) result->Text += "+";
		}
}
};
}
