#pragma once
#include<iostream>
#include<string>
#include "SecondForm.h"
namespace Vehicle {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 172);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 249);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Employee ID:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(329, 164);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 30);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(329, 241);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 30);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Edwardian Script ITC", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(466, 57);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Vehicle Management System";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 38);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->ClientSize = System::Drawing::Size(798, 485);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Vehicle Management System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//initalize the connection to the database
	String^ constring = L"datasource=localhost;port=3306;username=root;password=****";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM vehicle.user WHERE EmployeeName='"+this->textBox1->Text+"' AND EmployeeID='"+this->textBox2->Text+"';",conDataBase);
	MySqlDataReader^ myReader;
	
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;


		while (myReader->Read()) {
			count = count + 1;
		}
		//checking to see if the employee name and id are valid
		if (count == 1) {
			//hides the first form
			this->Hide();
			//creates the second form using the 1 parameter ctor for transfering data across forms
			SecondForm ^ frm = gcnew SecondForm(textBox1->Text);
			frm->ShowDialog();
			this->Show();
			
		}
		else if (count > 1) {
			//if there is duplicate name or id pring out
			MessageBox::Show("Duplicate EmployeeName and EmployeeID ...Access Denied!");
		}
		else {
			//print out if employee name and id are not correct
			MessageBox::Show("EmployeeName and EmployeeID Is Not Correct ...Please Try Again!");
		}


	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

};
}
