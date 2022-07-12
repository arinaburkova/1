#pragma once
#include "MyForm1.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <fstream>
namespace Project39 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	struct student
	{
		std::string name;
		int marks[5];
		double mid;
		student() {};
		student(std::string n, int a1, int a2, int a3, int a4, int a5)
		{
			name = n;
			marks[0] = a1;
			marks[1] = a2;
			marks[2] = a3;
			marks[3] = a4;
			marks[4] = a5;
		}
	};
	struct NODE
	{
		student info;
		NODE* next;
		NODE() {};
		NODE(std::string s, int m1, int m2, int m3, int m4, int m5, NODE* ptr = nullptr)
		{
			next = ptr;
			info.name = s;
			info.marks[0] = m1;
			info.marks[1] = m2;
			info.marks[2] = m3;
			info.marks[3] = m4;
			info.marks[4] = m5;

		};
		~NODE()
		{
			next = nullptr;
		}

	};
	using ptrNODE = NODE*;
	void init(ptrNODE& list)
	{
		list = nullptr;
	}
	bool empty1(ptrNODE list)
	{
		return(list == nullptr);
	}
	void add_after_node(ptrNODE& pNode, student new_elem)
	{
		ptrNODE ptr = new NODE(new_elem.name, new_elem.marks[0], new_elem.marks[1], new_elem.marks[2], new_elem.marks[3], new_elem.marks[4], pNode->next);
		pNode->next = ptr;
	}
	bool test(student p)
	{
		int i = 0;
		while (i < 5 && p.marks[i] == 4)
		{

			i++;
		}
		return i == 5;
	}
	ptrNODE find_place(ptrNODE list)
	{

		ptrNODE result = list;
		while (result->next && test(result->next->info))
		{
			result = result->next;
		};

		return result;
	}
	ptrNODE find_place1(ptrNODE list, student elem)
	{

		ptrNODE result = list;
		while (result->next && result->next->info.name < elem.name)
		{
			result = result->next;
		};

		return result;
	}
	std::vector<student> ar;
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"dunamic_list";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::dunamic_list_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			/*this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);*/
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"new_dunamic_list";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 25);
			this->button3->TabIndex = 4;
			this->button3->Text = L"binary_tree";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 25);
			this->button4->TabIndex = 5;
			this->button4->Text = L"AVL_tree";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 26);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(307, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 397);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 25);
			this->button5->TabIndex = 11;
			this->button5->Text = L"max_mid_point";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(255, 173);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 249);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(249, 22);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(22, 22);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(236, 122);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(22, 22);
			this->textBox4->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(198, 122);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(22, 22);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(317, 122);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(22, 22);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(277, 122);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(22, 22);
			this->textBox8->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"label3";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 66);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 21;
			this->button6->Text = L"add";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(477, 115);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 22;
			this->button7->Text = L"save";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 463);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void dunamic_list_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		String^ str = textBox5->Text;
		std::string s = msclr::interop::marshal_as<std::string>(str);
		std::ifstream file(s);
		MyForm1^ f2 = gcnew MyForm1();
		f2->Show();
		
		ptrNODE list;
		init(list);
		list = new NODE();
		init(list->next);
		ptrNODE ptr;
		std::string st;
		int m1, m2, m3, m4, m5, i = 0;
		while (file)
		{
		
			std::getline(file, st);
			file >> m1 >> m2 >> m3 >> m4 >> m5;
			student p(st, m1, m2, m3, m4, m5);			
			if (test(p))
			{
				add_after_node(list, p);
			}
			else
			{	
					ptr = find_place(list);
					add_after_node(ptr, p);		
			}	
			std::string delim_line;
			std::getline(file, delim_line); 
		}
		list = list->next;
		
		while(list)
		{
	
			f2->textBox1->Text = f2->textBox1->Text+ msclr::interop::marshal_as<String^>(list->info.name) + "\r" + "\n"+ Convert::ToString(list->info.marks[0]) + Convert::ToString(list->info.marks[1]) + Convert::ToString(list->info.marks[2]) + Convert::ToString(list->info.marks[3]) + Convert::ToString(list->info.marks[4])+"\r" + "\n";
			list = list->next;
		}
	}
	


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{

		String^ str = textBox5->Text;
		std::string s = msclr::interop::marshal_as<std::string>(str);
		std::fstream file(s);
		std::string st;
		MyForm1^ f2 = gcnew MyForm1();
		f2->Show();
	
		ptrNODE list;
		init(list);
		list = new NODE();
		init(list->next);
		ptrNODE ptr;
		int m1, m2, m3, m4, m5, i = 0;
		while (file)
		{

		std::getline(file, st);
		file >> m1 >> m2 >> m3 >> m4 >> m5;
		student p(st, m1, m2, m3, m4, m5);

		ptr = find_place1(list,p);
		add_after_node(ptr, p);
		std::string delim_line;
		std::getline(file, delim_line);
		}
		list = list->next;

		while (list)
		{

			f2->textBox1->Text = f2->textBox1->Text + msclr::interop::marshal_as<String^>(list->info.name) + "\r" + "\n" + Convert::ToString(list->info.marks[0]) + Convert::ToString(list->info.marks[1]) + Convert::ToString(list->info.marks[2]) + Convert::ToString(list->info.marks[3]) + Convert::ToString(list->info.marks[4]) + "\r" + "\n";
			list = list->next;
		}

	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "but3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "but4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();
	String^ str = textBox5->Text;
	std::string s = msclr::interop::marshal_as<std::string>(str);
	std::fstream file(s);
	std::string st;
	int m1, m2, m3, m4, m5, i = 0;
	std::vector<student>res;
	double max = 0;
	while (file)
	{

		std::getline(file, st);
		file >> m1 >> m2 >> m3 >> m4 >> m5;
		student p(st, m1, m2, m3, m4, m5);


		if (max < m1 + m2 + m3 + m4 + m5)
		{
			res.clear();
			res.push_back(p);
			max = m1 + m2 + m3 + m4 + m5;
		}
		else
			if (max == m1 + m2 + m3 + m4 + m5)
				res.push_back(p);
		std::string delim_line;
		std::getline(file, delim_line);

	}
	for (int i = 0; i < res.size(); i++)
		f2->textBox1->Text = f2->textBox1->Text + msclr::interop::marshal_as<String^>(res[i].name) + "\r" + "\n" + Convert::ToString(res[i].marks[0]) + Convert::ToString(res[i].marks[1]) + Convert::ToString(res[i].marks[2]) + Convert::ToString(res[i].marks[3]) + Convert::ToString(res[i].marks[4]) + "\r" + "\n";
}
   //C://pr3//VVV1.txt
	  
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str;
	std::string s;
	str = textBox2->Text;
	s = msclr::interop::marshal_as<std::string>(str);

	
 
	int m1, m2, m3, m4, m5;
	m1= Convert::ToSingle(textBox3->Text);
	m2 = Convert::ToSingle(textBox6->Text);
	m3 = Convert::ToSingle(textBox4->Text);
	m4 = Convert::ToSingle(textBox8->Text);
	m5 = Convert::ToSingle(textBox7->Text);
	student S1(s, m1, m2, m3, m4, m5);
	ar.push_back(S1);
	textBox3->Clear();
	textBox6->Clear();
	textBox4->Clear();
	textBox8->Clear();
	textBox7->Clear();
	textBox2->Clear();
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = textBox5->Text;
	std::string s = msclr::interop::marshal_as<std::string>(str);
	std::fstream file(s);
	for (int i = 0; i < ar.size(); i++)
		file << ar[i].name << "\n" << ar[i].marks[0] << " " << ar[i].marks[1] << " " << ar[i].marks[2] << " " << ar[i].marks[3] << " " << ar[i].marks[4] << "\n"; 
	file.close();
	textBox3->Clear();
	textBox6->Clear();
	textBox4->Clear();
	textBox8->Clear();
	textBox7->Clear();
	textBox2->Clear();
}

};
}
