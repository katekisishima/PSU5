#pragma once
#include <math.h>
#include "MyForm1.h"
#include <cmath>
#include <string.h>
#define M_PI
#include <stdio.h> 
#include <conio.h> 
double xn, xk, xh, x, y, a, ymax, ymin, yt;

int i, k, j;
int h;
int m;
using namespace System::IO;

using namespace System::Windows::Forms::DataVisualization::Charting;

namespace PSU5 {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÒåêñòàToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ãğàôèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÔîíàß÷ååêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûñîòàÑòğîêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øèğèíàÑòîëáöîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòØğèôòàÇàãîëîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÃğàôèêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÔîíàÃğàôèêàToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
























	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñîõğàíèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÒåêñòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàß÷ååêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûñîòàÑòğîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øèğèíàÑòîëáöîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğàôèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÃğàôèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàÃğàôèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem1,
					this->âèäToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(741, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripSeparator,
					this->ñîõğàíèòüToolStripMenuItem1, this->âûõîäToolStripMenuItem2
			});
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem1->Text = L"&Ôàéë";
			this->ôàéëToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ôàéëToolStripMenuItem1_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(223, 6);
			// 
			// ñîõğàíèòüToolStripMenuItem1
			// 
			this->ñîõğàíèòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripMenuItem1.Image")));
			this->ñîõğàíèòüToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripMenuItem1->Name = L"ñîõğàíèòüToolStripMenuItem1";
			this->ñîõğàíèòüToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõğàíèòüToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->ñîõğàíèòüToolStripMenuItem1->Text = L"&Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// âûõîäToolStripMenuItem2
			// 
			this->âûõîäToolStripMenuItem2->Name = L"âûõîäToolStripMenuItem2";
			this->âûõîäToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->âûõîäToolStripMenuItem2->Text = L"Âû&õîä";
			this->âûõîäToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem2_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òàáëèöàToolStripMenuItem,
					this->ãğàôèêToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// òàáëèöàToolStripMenuItem
			// 
			this->òàáëèöàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->öâåòÒåêñòàToolStripMenuItem,
					this->öâåòÔîíàß÷ååêToolStripMenuItem, this->âûñîòàÑòğîêToolStripMenuItem, this->øèğèíàÑòîëáöîâToolStripMenuItem, this->ïàğàìåòğûToolStripMenuItem,
					this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem
			});
			this->òàáëèöàToolStripMenuItem->Name = L"òàáëèöàToolStripMenuItem";
			this->òàáëèöàToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->òàáëèöàToolStripMenuItem->Text = L"Òàáëèöà";
			// 
			// öâåòÒåêñòàToolStripMenuItem
			// 
			this->öâåòÒåêñòàToolStripMenuItem->Name = L"öâåòÒåêñòàToolStripMenuItem";
			this->öâåòÒåêñòàToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->öâåòÒåêñòàToolStripMenuItem->Text = L"Öâåò òåêñòà";
			this->öâåòÒåêñòàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÒåêñòàToolStripMenuItem_Click);
			// 
			// öâåòÔîíàß÷ååêToolStripMenuItem
			// 
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Name = L"öâåòÔîíàß÷ååêToolStripMenuItem";
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Text = L"Öâåò ôîíà ÿ÷ååê";
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÔîíàß÷ååêToolStripMenuItem_Click);
			// 
			// âûñîòàÑòğîêToolStripMenuItem
			// 
			this->âûñîòàÑòğîêToolStripMenuItem->Name = L"âûñîòàÑòğîêToolStripMenuItem";
			this->âûñîòàÑòğîêToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->âûñîòàÑòğîêToolStripMenuItem->Text = L"Âûñîòà ñòğîê";
			this->âûñîòàÑòğîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûñîòàÑòğîêToolStripMenuItem_Click);
			// 
			// øèğèíàÑòîëáöîâToolStripMenuItem
			// 
			this->øèğèíàÑòîëáöîâToolStripMenuItem->Name = L"øèğèíàÑòîëáöîâToolStripMenuItem";
			this->øèğèíàÑòîëáöîâToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->øèğèíàÑòîëáöîâToolStripMenuItem->Text = L"Øèğèíà ñòîëáöîâ";
			this->øèğèíàÑòîëáöîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øèğèíàÑòîëáöîâToolStripMenuItem_Click);
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû øğèôòà çàãîëîâêà";
			this->ïàğàìåòğûToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàğàìåòğûToolStripMenuItem_Click);
			// 
			// öâåòØğèôòàÇàãîëîâêàToolStripMenuItem
			// 
			this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem->Name = L"öâåòØğèôòàÇàãîëîâêàToolStripMenuItem";
			this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem->Text = L"Öâåò øğèôòà çàãîëîâêà";
			this->öâåòØğèôòàÇàãîëîâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòØğèôòàÇàãîëîâêàToolStripMenuItem_Click);
			// 
			// ãğàôèêToolStripMenuItem
			// 
			this->ãğàôèêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòÃğàôèêàToolStripMenuItem,
					this->öâåòÔîíàÃğàôèêàToolStripMenuItem
			});
			this->ãğàôèêToolStripMenuItem->Name = L"ãğàôèêToolStripMenuItem";
			this->ãğàôèêToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->ãğàôèêToolStripMenuItem->Text = L"Ãğàôèê";
			// 
			// öâåòÃğàôèêàToolStripMenuItem
			// 
			this->öâåòÃğàôèêàToolStripMenuItem->Name = L"öâåòÃğàôèêàToolStripMenuItem";
			this->öâåòÃğàôèêàToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->öâåòÃğàôèêàToolStripMenuItem->Text = L"Öâåò ãğàôèêà";
			this->öâåòÃğàôèêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÃğàôèêàToolStripMenuItem_Click);
			// 
			// öâåòÔîíàÃğàôèêàToolStripMenuItem
			// 
			this->öâåòÔîíàÃğàôèêàToolStripMenuItem->Name = L"öâåòÔîíàÃğàôèêàToolStripMenuItem";
			this->öâåòÔîíàÃğàôèêàToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->öâåòÔîíàÃğàôèêàToolStripMenuItem->Text = L"Öâåò ôîíà ãğàôèêà";
			this->öâåòÔîíàÃğàôèêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÔîíàÃğàôèêàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 551);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(707, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Âûõîä";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(715, 514);
			this->tabControl1->TabIndex = 3;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged_1);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(707, 485);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ââîä äàííûõ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(374, 372);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(305, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"3";
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(374, 301);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(305, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0,6";
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(374, 233);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(305, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"7,1";
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(374, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(305, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"-1,3";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(50, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(304, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ââåäèòå ïîëîæèòåëüíîå çíà÷åíèå A=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(50, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ââåäèòå øàã XH= ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(50, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 54);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ââåäèòå íà÷àëüíîå çíà÷åíèå XK=\r\n\r\n\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(50, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(281, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ââåäèòå íà÷àëüíîå çíà÷åíèå XN= ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(171, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ââîä äàííûõ ïğîìåæóòêà";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(707, 485);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Òàáëèöà äàííûõ ïğîìåæóòêà";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(386, 383);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(415, 429);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(258, 22);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(415, 316);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(258, 22);
			this->textBox5->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(412, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(254, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ìèíèìàëüíîå çíà÷åíèå ôóíêöèè";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(412, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ìàêñèìàëüíîå çíà÷åíèå ôóíêöèè";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(641, 29);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Òàáëèöà çíà÷åíèé ôóíêöèè íà ïğîìåæóòêå[XN;XK]";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(707, 485);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ãğàôèê ôóíêöèè íà ïğîìåæóòêå";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(693, 457);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 642);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Âûïîëíèë Áîòåíêîâ Ä.À., 23-ÊÔ Çàäàíèå5";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void ôàéëToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void âûõîäToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		   

	   }
private: System::Void öâåòÒåêñòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->ForeColor = colorDialog1->Color;
	}
	
}

private: System::Void öâåòÔîíàß÷ååêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->BackColor = colorDialog1->Color;
	}
}

private: System::Void âûñîòàÑòğîêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f = gcnew MyForm1();
	this->Hide(); f->ShowDialog(); this->Show();
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		DataGridViewRow^ row = dataGridView1->Rows[i];
		row->Height = h;
	}
}
	private: System::Void øèğèíàÑòîëáöîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f = gcnew MyForm1();
		this->Hide(); f->ShowDialog(); this->Show();
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
		{
			DataGridViewColumn^ column = dataGridView1->Columns[i];
			column->Width = m;
		}
	}
private: System::Void ïàğàìåòğûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fontDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		label6->Font = fontDialog1->Font;
	}
}
private: System::Void öâåòØğèôòàÇàãîëîâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		plot1->Color = colorDialog1->Color;
}
private: System::Void öâåòÃğàôèêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK)
		plot1->Color = colorDialog1->Color;
}
private: System::Void öâåòÔîíàÃğàôèêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK) {
		chart1 -> BackColor = colorDialog1->Color;
	}
}
private: System::Void ñîõğàíèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2; saveFileDialog1->RestoreDirectory = true; if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog1->FileName);
		for (int i = 0; i < dataGridView1->RowCount; i++) pwriter->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "| " + dataGridView1->Rows[i]->Cells[1]->Value->ToString());
		pwriter->Close();
	}
}
private: System::Void tabControl1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	double xn, xk, xh, x, y, a, ymax, ymin, yt;
	int n, i;
	Series^ plot1 = chart1->Series[0];
	plot1->Points->Clear();
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != "")) {
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		a = Convert::ToDouble(textBox4->Text);

		if ((xn >= xk) || (xh > (xk - xn))) {
			MessageBox::Show("Äàííûå çàïîëíåíû íåâåğíî", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			dataGridView1->Columns->Clear();
			dataGridView1->ColumnCount = 2;
			dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1); dataGridView1->Rows[0]->Cells[0]->Value

				= Convert::ToString(" x");
			dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y");
			i = 1; x = xn; ymax = -
				1.8e307; ymin = 1.8e307;
			while (x <= xk)
			{
				if (x <= 0)
				{
					y = 3 * pow(x, 5) + 1 / tan(pow(x, 3) + 1);
				}
				else
					if (x <= a)

					{
						y = exp(x + 1) - sin(x);
					}
					else
						if (x > a)
						{
							y = pow(sqrt(sin(x) + 2), 5);
						}
				plot1->Points->AddXY(x, y);
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				yt = ceil(y * 100) / 100;
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
				if (y > ymax) ymax = ceil(y * 100) / 100;
				if (y < ymin) ymin = ceil(y * 100) / 100;
				x = x + xh;
				i++;
			}
		}
		textBox5->Text = Convert::ToString(ymax);
		textBox6->Text = Convert::ToString(ymin);
	}
	else
	{
		MessageBox::Show("Çàïîëíèòå, ïîæàëóéñòà, äàííûå", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàğàìåòğ XN íå ÿâëÿåòüñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàğàìåòğ XK íå ÿâëÿåòüñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox1->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàğàìåòğ XH íå ÿâëÿåòüñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox1->Focus();
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàğàìåòğ A íå ÿâëÿåòüñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox1->Focus();
	}
}
};
}
