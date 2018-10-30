#pragma once
#include<iostream>
//#include "MyForm.h"
#include "SecondForm.h"
//#include "Vehicle.h"
namespace Vehicle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{


	public:
		String ^ name;
	public:
		SecondForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//1 parameter ctor for sending data across forms
		SecondForm(String ^strTextBox)
		{
			InitializeComponent();
			name = strTextBox;
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MediumPurple;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(358, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(797, 224);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SecondForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(669, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load Vehicle Information";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add Vehicle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SecondForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SecondForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"EmployeeName:";
			this->label1->Click += gcnew System::EventHandler(this, &SecondForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"EmployeeID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Passengers:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"FuelCost:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"InsuranceName:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(156, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(156, 239);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 22);
			this->textBox5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(268, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Put Not Available For Certain Fields Only.";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(156, 292);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(156, 363);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(139, 22);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(156, 404);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(139, 22);
			this->textBox8->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"InsuracneID:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1, 365);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Date:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1, 406);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Miles:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(319, 365);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Contents:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(424, 363);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(147, 22);
			this->textBox9->TabIndex = 21;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &SecondForm::textBox9_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(424, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 33);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Add Contents";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SecondForm::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(320, 312);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(301, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Put Not Available If You Do Not Have Contents";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(0, 332);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(280, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Date Must Be Entered In \"Year-Month-Day\"";
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->ClientSize = System::Drawing::Size(1167, 501);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			this->Load += gcnew System::EventHandler(this, &SecondForm::SecondForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//initalize the connection to the database
		String^ constring = L"datasource=localhost;port=3306;username=root;password=****";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM vehicle.vehicles, vehicle.contents WHERE vehicles.EmployeeName = '"+ name +"' AND contents.SystemID = vehicles.SystemID;", conDataBase);
	//try and catch block just incase to throw an exception
		try {
			//fills the datatable on the GUI with the above select statement
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//initalize the connection to the database
		String^ constring = L"datasource=localhost;port=3306;username=root;password=*****";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO vehicle.vehicles (EmployeeName, EmployeeID, Passengers, FuelCost, InsuranceName, InsuranceNumber, Date, Miles) VALUES ('" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "','" + this->textBox5->Text + "','" + this->textBox6->Text + "','" + this->textBox7->Text + "','" + this->textBox8->Text + "');" , conDataBase);
		MySqlDataReader^ myReader;
		try {
			//check to see if the textboxes are empty, if they are empty show a message.
			if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "" || this->textBox6->Text == "" || this->textBox7->Text == "" || this->textBox8->Text == "") {
				MessageBox::Show("Please Do Not Leave Fields Empty");
			}
				conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Succesfully Imported");

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
		
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//initalize the connection to the database
	String^ constring = L"datasource=localhost;port=3306;username=root;password=*****";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO vehicle.contents (EmployeeName, items) VALUES ('" +name+ "','"+this->textBox9->Text+"');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		//Checks to see if the textbox is empty prints out if it is not
		if (this->textBox9->Text == "") {
			MessageBox::Show("Please Do Not Leave Field Empty");
		}
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Succesfully Imported");

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void SecondForm_Load(System::Object^  sender, System::EventArgs^  e) {



}
};
};