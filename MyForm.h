#pragma once
#include "AboutForm.h"

namespace $safeprojectname$
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ substract_button;
	private: System::Windows::Forms::Button^ multiply_button;
	private: System::Windows::Forms::Button^ divide_button;




	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Button^ about_button;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->substract_button = (gcnew System::Windows::Forms::Button());
			this->multiply_button = (gcnew System::Windows::Forms::Button());
			this->divide_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->about_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(28, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(199, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(148, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Op";
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(22, 104);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(56, 54);
			this->add_button->TabIndex = 3;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// substract_button
			// 
			this->substract_button->Location = System::Drawing::Point(102, 104);
			this->substract_button->Name = L"substract_button";
			this->substract_button->Size = System::Drawing::Size(56, 54);
			this->substract_button->TabIndex = 4;
			this->substract_button->Text = L"-";
			this->substract_button->UseVisualStyleBackColor = true;
			this->substract_button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// multiply_button
			// 
			this->multiply_button->Location = System::Drawing::Point(183, 104);
			this->multiply_button->Name = L"multiply_button";
			this->multiply_button->Size = System::Drawing::Size(56, 54);
			this->multiply_button->TabIndex = 5;
			this->multiply_button->Text = L"*";
			this->multiply_button->UseVisualStyleBackColor = true;
			this->multiply_button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// divide_button
			// 
			this->divide_button->Location = System::Drawing::Point(265, 104);
			this->divide_button->Name = L"divide_button";
			this->divide_button->Size = System::Drawing::Size(56, 54);
			this->divide_button->TabIndex = 6;
			this->divide_button->Text = L"/";
			this->divide_button->UseVisualStyleBackColor = true;
			this->divide_button->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(315, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"=";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->Location = System::Drawing::Point(348, 36);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 9;
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->exit_button->Location = System::Drawing::Point(22, 336);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(167, 54);
			this->exit_button->TabIndex = 10;
			this->exit_button->Text = L"EXIT";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &MyForm::exit_button_Click);
			// 
			// about_button
			// 
			this->about_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->about_button->Location = System::Drawing::Point(376, 336);
			this->about_button->Name = L"about_button";
			this->about_button->Size = System::Drawing::Size(167, 54);
			this->about_button->TabIndex = 11;
			this->about_button->Text = L"ABOUT";
			this->about_button->UseVisualStyleBackColor = true;
			this->about_button->Click += gcnew System::EventHandler(this, &MyForm::about_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 487);
			this->Controls->Add(this->about_button);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->divide_button);
			this->Controls->Add(this->multiply_button);
			this->Controls->Add(this->substract_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "+";
		float rezultat = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text);
		textBox3->Text = System::Convert::ToString(rezultat);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "-";
		float rezultat = System::Convert::ToDouble(textBox1->Text) - System::Convert::ToDouble(textBox2->Text);
		textBox3->Text = System::Convert::ToString(rezultat);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "*";
		float rezultat = System::Convert::ToDouble(textBox1->Text) * System::Convert::ToDouble(textBox2->Text);
		textBox3->Text = System::Convert::ToString(rezultat);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "/";
		float rezultat = System::Convert::ToDouble(textBox1->Text) / System::Convert::ToDouble(textBox2->Text);
		textBox3->Text = System::Convert::ToString(rezultat);
	}
	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if(MessageBox::Show("Are you sure?", "Making sure", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation)==System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}

	}
	private: System::Void about_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AboutForm^ about_form = gcnew AboutForm;
		about_form->ShowDialog();
	}
};
}
