#pragma once
#include "Header.h"
#include <iomanip>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^ textBox_lambda;






	private: System::Windows::Forms::TextBox^ textBox_sample_size;



	private: System::Windows::Forms::Label^  label5;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi_sample;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Eη;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vubor_srednee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Eη_vubor_srednee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Dη;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Dη_S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Me;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  R;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxD;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_Hystogram;
	private: System::Windows::Forms::DataGridView^  dataGridView3_Hystogram;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;

	//private: System::Windows::Forms::DataGridViewTextBoxColumn^  Granica;
	private: System::Windows::Forms::Button^  buttonHystogram;

	private: System::Windows::Forms::DataGridView^  dataGridView4HLongTable;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  zj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fηzj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nj_ndj;
	private: System::Windows::Forms::TextBox^  textBoxHystogram;
	private: System::Windows::Forms::TextBox^  textBoxHError;
	private: System::Windows::Forms::Label^  labelHError;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView_hypothesis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn61;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn71;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::TextBox^ textBox_hypothesis;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox_F;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_R_0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;












	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi_sample = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_lambda = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sample_size = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Eη = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vubor_srednee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Eη_vubor_srednee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dη = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dη_S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Me = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxD = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl2_Hystogram = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView3_Hystogram = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonHystogram = (gcnew System::Windows::Forms::Button());
			this->dataGridView4HLongTable = (gcnew System::Windows::Forms::DataGridView());
			this->zj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fηzj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nj_ndj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxHystogram = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHError = (gcnew System::Windows::Forms::TextBox());
			this->labelHError = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView_hypothesis = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->textBox_hypothesis = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox_F = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_R_0 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_Hystogram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4HLongTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_hypothesis))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zedGraphControl1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zedGraphControl1.BackgroundImage")));
			this->zedGraphControl1->Location = System::Drawing::Point(171, 41);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(425, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->N, this->xi_sample });
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(153, 327);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// N
			// 
			this->N->HeaderText = L"¹";
			this->N->Name = L"N";
			this->N->ReadOnly = true;
			this->N->Width = 50;
			// 
			// xi_sample
			// 
			this->xi_sample->HeaderText = L"Xi sample";
			this->xi_sample->Name = L"xi_sample";
			this->xi_sample->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(12, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lambda";
			// 
			// textBox_lambda
			// 
			this->textBox_lambda->ForeColor = System::Drawing::Color::Navy;
			this->textBox_lambda->Location = System::Drawing::Point(117, 386);
			this->textBox_lambda->Name = L"textBox_lambda";
			this->textBox_lambda->Size = System::Drawing::Size(48, 20);
			this->textBox_lambda->TabIndex = 4;
			this->textBox_lambda->Text = L"0";
			// 
			// textBox_sample_size
			// 
			this->textBox_sample_size->ForeColor = System::Drawing::Color::Navy;
			this->textBox_sample_size->Location = System::Drawing::Point(117, 412);
			this->textBox_sample_size->Name = L"textBox_sample_size";
			this->textBox_sample_size->Size = System::Drawing::Size(48, 20);
			this->textBox_sample_size->TabIndex = 11;
			this->textBox_sample_size->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(12, 415);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Sample size";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(12, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Generate sample";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(587, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"С.в η - время обслуживания покупателя в кассе магазина. Пусть η распределена пока"
				L"зательно с параметром  λ.";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Eη, this->Vubor_srednee,
					this->Eη_vubor_srednee, this->Dη, this->S2, this->Dη_S2, this->Me, this->R
			});
			this->dataGridView2->GridColor = System::Drawing::Color::Silver;
			this->dataGridView2->Location = System::Drawing::Point(12, 474);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(842, 61);
			this->dataGridView2->TabIndex = 14;
			// 
			// Eη
			// 
			this->Eη->HeaderText = L"Eη";
			this->Eη->Name = L"Eη";
			// 
			// Vubor_srednee
			// 
			this->Vubor_srednee->HeaderText = L"Vubor_srednee";
			this->Vubor_srednee->Name = L"Vubor_srednee";
			// 
			// Eη_vubor_srednee
			// 
			this->Eη_vubor_srednee->HeaderText = L"|Eη-vubor_srednee|";
			this->Eη_vubor_srednee->Name = L"Eη_vubor_srednee";
			// 
			// Dη
			// 
			this->Dη->HeaderText = L"Dη";
			this->Dη->Name = L"Dη";
			// 
			// S2
			// 
			this->S2->HeaderText = L"S2";
			this->S2->Name = L"S2";
			// 
			// Dη_S2
			// 
			this->Dη_S2->HeaderText = L"|Dη-S2|";
			this->Dη_S2->Name = L"Dη_S2";
			// 
			// Me
			// 
			this->Me->HeaderText = L"Me";
			this->Me->Name = L"Me";
			// 
			// R
			// 
			this->R->HeaderText = L"R";
			this->R->Name = L"R";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(184, 389);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"D";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBoxD
			// 
			this->textBoxD->BackColor = System::Drawing::Color::White;
			this->textBoxD->ForeColor = System::Drawing::Color::Navy;
			this->textBoxD->Location = System::Drawing::Point(252, 382);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->ReadOnly = true;
			this->textBoxD->Size = System::Drawing::Size(100, 20);
			this->textBoxD->TabIndex = 16;
			this->textBoxD->Text = L"0";
			this->textBoxD->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxD_TextChanged);
			// 
			// zedGraphControl2_Hystogram
			// 
			this->zedGraphControl2_Hystogram->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->zedGraphControl2_Hystogram->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zedGraphControl2_Hystogram.BackgroundImage")));
			this->zedGraphControl2_Hystogram->Location = System::Drawing::Point(602, 41);
			this->zedGraphControl2_Hystogram->Name = L"zedGraphControl2_Hystogram";
			this->zedGraphControl2_Hystogram->ScrollGrace = 0;
			this->zedGraphControl2_Hystogram->ScrollMaxX = 0;
			this->zedGraphControl2_Hystogram->ScrollMaxY = 0;
			this->zedGraphControl2_Hystogram->ScrollMaxY2 = 0;
			this->zedGraphControl2_Hystogram->ScrollMinX = 0;
			this->zedGraphControl2_Hystogram->ScrollMinY = 0;
			this->zedGraphControl2_Hystogram->ScrollMinY2 = 0;
			this->zedGraphControl2_Hystogram->Size = System::Drawing::Size(425, 327);
			this->zedGraphControl2_Hystogram->TabIndex = 17;
			// 
			// dataGridView3_Hystogram
			// 
			this->dataGridView3_Hystogram->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView3_Hystogram->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3_Hystogram->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dataGridView3_Hystogram->Location = System::Drawing::Point(1030, 41);
			this->dataGridView3_Hystogram->Name = L"dataGridView3_Hystogram";
			this->dataGridView3_Hystogram->RowHeadersVisible = false;
			this->dataGridView3_Hystogram->Size = System::Drawing::Size(143, 327);
			this->dataGridView3_Hystogram->TabIndex = 35;
			this->dataGridView3_Hystogram->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_Hystogram_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Граница";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// buttonHystogram
			// 
			this->buttonHystogram->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonHystogram->ForeColor = System::Drawing::Color::Navy;
			this->buttonHystogram->Location = System::Drawing::Point(171, 435);
			this->buttonHystogram->Name = L"buttonHystogram";
			this->buttonHystogram->Size = System::Drawing::Size(75, 23);
			this->buttonHystogram->TabIndex = 19;
			this->buttonHystogram->Text = L"Равномерная";
			this->buttonHystogram->UseVisualStyleBackColor = false;
			this->buttonHystogram->Click += gcnew System::EventHandler(this, &MyForm::Hystogram_Click);
			// 
			// dataGridView4HLongTable
			// 
			this->dataGridView4HLongTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView4HLongTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4HLongTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->zj,
					this->fηzj, this->nj_ndj
			});
			this->dataGridView4HLongTable->Location = System::Drawing::Point(6, 541);
			this->dataGridView4HLongTable->Name = L"dataGridView4HLongTable";
			this->dataGridView4HLongTable->Size = System::Drawing::Size(493, 150);
			this->dataGridView4HLongTable->TabIndex = 20;
			// 
			// zj
			// 
			this->zj->HeaderText = L"zj";
			this->zj->Name = L"zj";
			this->zj->ReadOnly = true;
			this->zj->Width = 80;
			// 
			// fηzj
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->fηzj->DefaultCellStyle = dataGridViewCellStyle1;
			this->fηzj->HeaderText = L"fη(zj)";
			this->fηzj->Name = L"fηzj";
			this->fηzj->ReadOnly = true;
			this->fηzj->Width = 150;
			// 
			// nj_ndj
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->nj_ndj->DefaultCellStyle = dataGridViewCellStyle2;
			this->nj_ndj->HeaderText = L"nj/n|dj|";
			this->nj_ndj->Name = L"nj_ndj";
			this->nj_ndj->ReadOnly = true;
			this->nj_ndj->Width = 150;
			// 
			// textBoxHystogram
			// 
			this->textBoxHystogram->ForeColor = System::Drawing::Color::Navy;
			this->textBoxHystogram->Location = System::Drawing::Point(253, 437);
			this->textBoxHystogram->Name = L"textBoxHystogram";
			this->textBoxHystogram->Size = System::Drawing::Size(100, 20);
			this->textBoxHystogram->TabIndex = 21;
			this->textBoxHystogram->Text = L"1";
			// 
			// textBoxHError
			// 
			this->textBoxHError->BackColor = System::Drawing::Color::White;
			this->textBoxHError->ForeColor = System::Drawing::Color::Navy;
			this->textBoxHError->Location = System::Drawing::Point(252, 411);
			this->textBoxHError->Name = L"textBoxHError";
			this->textBoxHError->ReadOnly = true;
			this->textBoxHError->Size = System::Drawing::Size(100, 20);
			this->textBoxHError->TabIndex = 22;
			// 
			// labelHError
			// 
			this->labelHError->AutoSize = true;
			this->labelHError->ForeColor = System::Drawing::Color::Navy;
			this->labelHError->Location = System::Drawing::Point(171, 412);
			this->labelHError->Name = L"labelHError";
			this->labelHError->Size = System::Drawing::Size(78, 13);
			this->labelHError->TabIndex = 23;
			this->labelHError->Text = L"Histogram error";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(359, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Равновероятностная";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView_hypothesis
			// 
			this->dataGridView_hypothesis->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView_hypothesis->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_hypothesis->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn61,
					this->dataGridViewTextBoxColumn7
			});
			this->dataGridView_hypothesis->Location = System::Drawing::Point(1179, 9);
			this->dataGridView_hypothesis->Name = L"dataGridView_hypothesis";
			this->dataGridView_hypothesis->RowHeadersVisible = false;
			this->dataGridView_hypothesis->Size = System::Drawing::Size(203, 384);
			this->dataGridView_hypothesis->TabIndex = 43;
			this->dataGridView_hypothesis->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_hypothesis_CellContentClick);
			// 
			// dataGridViewTextBoxColumn61
			// 
			this->dataGridViewTextBoxColumn61->HeaderText = L"j";
			this->dataGridViewTextBoxColumn61->Name = L"dataGridViewTextBoxColumn61";
			this->dataGridViewTextBoxColumn61->ReadOnly = true;
			this->dataGridViewTextBoxColumn61->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"q_j";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 150;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->ForeColor = System::Drawing::Color::Navy;
			this->label70->Location = System::Drawing::Point(355, 371);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(114, 13);
			this->label70->TabIndex = 44;
			this->label70->Text = L"Уровень значимости";
			// 
			// textBox_hypothesis
			// 
			this->textBox_hypothesis->ForeColor = System::Drawing::Color::Navy;
			this->textBox_hypothesis->Location = System::Drawing::Point(490, 368);
			this->textBox_hypothesis->Name = L"textBox_hypothesis";
			this->textBox_hypothesis->Size = System::Drawing::Size(48, 20);
			this->textBox_hypothesis->TabIndex = 45;
			this->textBox_hypothesis->Text = L"0,9";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(585, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 23);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Проверить гипотезу";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox_F
			// 
			this->textBox_F->BackColor = System::Drawing::Color::White;
			this->textBox_F->ForeColor = System::Drawing::Color::Navy;
			this->textBox_F->Location = System::Drawing::Point(421, 411);
			this->textBox_F->Name = L"textBox_F";
			this->textBox_F->ReadOnly = true;
			this->textBox_F->Size = System::Drawing::Size(104, 20);
			this->textBox_F->TabIndex = 47;
			this->textBox_F->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_F_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(358, 414);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 48;
			this->label8->Text = L"1 - F(R_0)";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->ForeColor = System::Drawing::Color::Navy;
			this->textBox1->Location = System::Drawing::Point(585, 411);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 49;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Navy;
			this->label9->Location = System::Drawing::Point(358, 395);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 51;
			this->label9->Text = L"R_0";
			// 
			// textBox_R_0
			// 
			this->textBox_R_0->BackColor = System::Drawing::Color::White;
			this->textBox_R_0->ForeColor = System::Drawing::Color::Navy;
			this->textBox_R_0->Location = System::Drawing::Point(405, 391);
			this->textBox_R_0->Name = L"textBox_R_0";
			this->textBox_R_0->ReadOnly = true;
			this->textBox_R_0->Size = System::Drawing::Size(120, 20);
			this->textBox_R_0->TabIndex = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1370, 692);
			this->Controls->Add(this->labelHError);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_R_0);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_F);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox_hypothesis);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->dataGridView_hypothesis);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxHError);
			this->Controls->Add(this->textBoxHystogram);
			this->Controls->Add(this->dataGridView4HLongTable);
			this->Controls->Add(this->buttonHystogram);
			this->Controls->Add(this->dataGridView3_Hystogram);
			this->Controls->Add(this->zedGraphControl2_Hystogram);
			this->Controls->Add(this->textBoxD);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_sample_size);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_lambda);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";
			this->Text = L"ТВиМС_ЛР_Кузнецова";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxD_TextChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_Hystogram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4HLongTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_hypothesis))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Random_Variable xi;
		int sample_size = Convert::ToInt32(textBox_sample_size->Text); //òîë÷íî Int32?
		double lambda = Convert::ToDouble(textBox_lambda->Text);

		xi.set_parameter(lambda);
		xi.generate_sample(sample_size);
		//Выборка
		dataGridView1->Rows->Clear();
		for (int i = 0; i < sample_size; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i+1;
			dataGridView1->Rows[i]->Cells[1]->Value = xi.get_sample(i);
		}
		
		//Отвечает за табличку, которая длинная
		dataGridView2->Rows->Clear();
		dataGridView2->Rows->Add(2);
		//dataGridView2->Rows[0]->Cells[0]->Value = "Среднее";
		dataGridView2->Rows[0]->Cells[0]->Value = xi.get_mean();
		dataGridView2->Rows[0]->Cells[1]->Value = xi.get_sample_mean();
		dataGridView2->Rows[0]->Cells[2]->Value = xi.get_mo_srednee();
		//dataGridView2->Rows[1]->Cells[0]->Value = "Дисперсия";
		dataGridView2->Rows[0]->Cells[3]->Value = xi.get_variance();
		dataGridView2->Rows[0]->Cells[4]->Value = xi.get_sample_variance();
		dataGridView2->Rows[0]->Cells[5]->Value = xi.get_dis_srednee();
		//dataGridView2->Rows[2]->Cells[0]->Value = "Медиана";
		//dataGridView2->Rows[1]->Cells[7]->Value = xi.get_median();
		dataGridView2->Rows[0]->Cells[6]->Value = xi.get_sample_median();
		dataGridView2->Rows[0]->Cells[7]->Value = xi.get_sample_range();

		//Штука, которая выводит D
		textBoxD->Text = Convert::ToString(xi.CDF_difference());

		//Графики
		double x_min = 0, x_max = 5, x_cur = x_min, h = 0.1;
		PointPairList^ CDF_point_list = gcnew ZedGraph::PointPairList();
		PointPairList^ sample_CDF_point_list = gcnew ZedGraph::PointPairList();
		while (x_cur < x_max) 
		{
			CDF_point_list->Add(x_cur, xi.cumulative_distribution_function(x_cur));
			x_cur += h;
		}
		//x_cur = 0;
		sample_CDF_point_list->Add(-100, 0);
		for (int i = 0; i < xi.get_sample_size(); i++) 
		{
			sample_CDF_point_list->Add(xi.get_sample(i) - 0.0000001, xi.sample_cumulative_distribution_function(xi.get_sample(i) - 0.0000001));
			sample_CDF_point_list->Add(xi.get_sample(i) + 0.0000001, xi.sample_cumulative_distribution_function(xi.get_sample(i) + 0.0000001));
			//sample_CDF_point_list->Add(x_cur, xi.sample_cumulative_distribution_function(xi.get_sample(i) + 0.0000001));
			//x_cur += h;
		}
		sample_CDF_point_list->Add(100, 1);
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->Title->Text = "График функций распределения";
		panel->XAxis->Title->Text = "Случайная величина";
		panel->YAxis->Title->Text = "Вероятность / частота";
		panel->CurveList->Clear();
		LineItem^ Curve_CDF = panel->AddCurve("Функция распределения", CDF_point_list, Color::Fuchsia, SymbolType::None);
		LineItem^ Curve_sample_CDF = panel->AddCurve("Выборочная функция распределения", sample_CDF_point_list, Color::Blue, SymbolType::None);
		//zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		//ГИСТОГРАММА

		PointPairList^ PD_point_list = gcnew ZedGraph::PointPairList();
		PointPairList^ histogram_point_list = gcnew ZedGraph::PointPairList();

		x_min = 0;
		x_max = 10;
		x_cur = x_min;
		h = 0.1;
		int n = xi.get_sample_size() - 1;
		while (x_cur < x_max) 
		{
			PD_point_list->Add(x_cur, xi.probability_density(x_cur));
			x_cur += h;
		}

		dataGridView4HLongTable->Rows->Clear();
		double left = Convert::ToDouble(dataGridView3_Hystogram->Rows[0]->Cells[1]->Value);
		double right;
		double z_j;
		double height;
		double histogram_error;
		double max_histogram_error = 0;
		for (int i = 0; i < dataGridView3_Hystogram->RowCount-2 ; i++) {
			left = Convert::ToDouble(dataGridView3_Hystogram->Rows[i]->Cells[1]->Value);
			right = Convert::ToDouble(dataGridView3_Hystogram->Rows[i+1]->Cells[1]->Value);			
			//left = Convert::ToDouble(dataGridView3_Hystogram->Rows[i]->Cells[0]->Value);
			//right = Convert::ToDouble(dataGridView3_Hystogram->Rows[i ]->Cells[0]->Value);
			z_j = 0.5 * (right + left);
			height = (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left)) / (right - left);
			dataGridView4HLongTable->Rows->Add();
			dataGridView4HLongTable->Rows[i]->Cells[0]->Value = z_j;
			dataGridView4HLongTable->Rows[i]->Cells[1]->Value = xi.probability_density(z_j);
			dataGridView4HLongTable->Rows[i]->Cells[2]->Value = height;
			histogram_error = abs(xi.probability_density(z_j) - height);
			if (histogram_error > max_histogram_error) max_histogram_error = histogram_error;

			histogram_point_list->Add(left, 0);
			histogram_point_list->Add(left, height);
			//right = 10;
			histogram_point_list->Add(right, height);
		}
		//right = 10;
		histogram_point_list->Add(right, 0);
		textBoxHError->Text = Convert::ToString(max_histogram_error);

		GraphPane^ panel2 = zedGraphControl2_Hystogram->GraphPane;
		panel2->Title->Text = "Гистограмма";
		panel2->XAxis->Title->Text = "Случайная величина";
		panel2->YAxis->Title->Text = "Плотность вероятности / частоты";

		panel2->CurveList->Clear();
		panel2->XAxis->Scale->Min=0;
		////////////////////////////////////////////////////////////////////
		panel2->XAxis->Scale->Max = (xi.get_sample(n)+0.3); //надо найти 
		LineItem^ Curve_PD = panel2->AddCurve("Функция плотности веротяности", PD_point_list, Color::Fuchsia, SymbolType::None);
		LineItem^ Curve_histogram = panel2->AddCurve("Гистограмма", histogram_point_list, Color::Blue, SymbolType::None);

		zedGraphControl2_Hystogram->Invalidate();
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxD_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView3_Hystogram_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void Hystogram_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView3_Hystogram->Rows->Clear();
	int n = Convert::ToDouble(textBoxHystogram->Text);

	double x_min = 0, x_max = 10, x_cur = x_min, h = (x_max - x_min) / n;
	for (int i = 0; i < n; i++) 
	{
		dataGridView3_Hystogram->Rows->Add();
		dataGridView3_Hystogram->Rows[i]->Cells[1]->Value = Convert::ToDouble(x_min + h * i);
		//dataGridView3_Hystogram->Rows[i]->Cells[0]->Value = Convert::ToDouble(x_min + h * i);
	}
	dataGridView3_Hystogram->Rows->Add();
	dataGridView3_Hystogram->Rows[n]->Cells[1]->Value = Convert::ToDouble(x_max);
	//dataGridView3_Hystogram->Rows[n]->Cells[0]->Value = Convert::ToDouble(x_max);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3_Hystogram->Rows->Clear();
	int n = Convert::ToDouble(textBoxHystogram->Text);
	Random_Variable xi;
	int sample_size = Convert::ToInt32(textBox_sample_size->Text); //толчно Int32?
	double lambda = Convert::ToDouble(textBox_lambda->Text);
	xi.set_parameter(lambda);
	double x_min = 0, x_max = 5;

	dataGridView3_Hystogram->Rows->Add();
	dataGridView3_Hystogram->Rows[0]->Cells[1]->Value = Convert::ToDouble(x_min);
	for (int i = 1; i < n; i++) {
		dataGridView3_Hystogram->Rows->Add();
		dataGridView3_Hystogram->Rows[i]->Cells[1]->Value = Convert::ToDouble(xi.inverse_probability(i / (double)n));
	}
	dataGridView3_Hystogram->Rows->Add();
	dataGridView3_Hystogram->Rows[n]->Cells[1]->Value = Convert::ToDouble(x_max);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView_hypothesis->Rows->Clear();
	Random_Variable xi;
	double lambda = Convert::ToDouble(textBox_lambda->Text);
	xi.set_parameter(lambda);
	int n = dataGridView3_Hystogram->Rows->Count - 1;

	//копирует выборку каким-то образом
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		xi.add_sample(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
	}
	xi.check_n_sort();

	//
	double right, left, q_j, R_0 = 0;
	int n_j=0;
	int sample_size = dataGridView1->Rows->Count - 1;

	left = Convert::ToDouble(dataGridView3_Hystogram->Rows[0]->Cells[1]->Value);
	right = Convert::ToDouble(dataGridView3_Hystogram->Rows[1]->Cells[1]->Value);

	dataGridView_hypothesis->Rows->Clear();

	q_j = xi.cumulative_distribution_function(right) - xi.cumulative_distribution_function(left);
	for (int i = 0; i < sample_size; i++)
	{
		if (xi.get_sample(i) >= left)
		{
			if (xi.get_sample(i) < right) 
			{
				n_j++;
			}				
		}			
	}
	//n_j = sample_size * (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left));

	dataGridView_hypothesis->Rows->Add();
	dataGridView_hypothesis->Rows[0]->Cells[0]->Value = 0;
	dataGridView_hypothesis->Rows[0]->Cells[1]->Value = Convert::ToDouble(q_j);

	//R_0 = 0;
	R_0 = ((n_j - sample_size * q_j)*(n_j - sample_size * q_j)) / (sample_size * q_j);

	for (int j = 1; j < n-1 ; j++)
	{ // n-1
		n_j = 0;
		left = Convert::ToDouble(dataGridView3_Hystogram->Rows[j ]->Cells[1]->Value);//-1
		right = Convert::ToDouble(dataGridView3_Hystogram->Rows[j+1]->Cells[1]->Value);//+1

		q_j = xi.cumulative_distribution_function(right) - xi.cumulative_distribution_function(left);
		for (int i = 0; i < sample_size; i++)
		{
			if (xi.get_sample(i) >= left)
			{
				if (xi.get_sample(i) < right)
				{
					n_j++;
				}
			}
		}		//n_j = sample_size * (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left));

		dataGridView_hypothesis->Rows->Add();
		dataGridView_hypothesis->Rows[j]->Cells[0]->Value = j; //j-1
		dataGridView_hypothesis->Rows[j]->Cells[1]->Value = Convert::ToDouble(q_j); //j-1

		R_0 =R_0 + ((n_j - sample_size * q_j)*(n_j - sample_size * q_j)) / (sample_size * q_j);
	}
	n_j = 0;
	q_j = 1 - xi.cumulative_distribution_function(right);
	for (int i = 0; i < sample_size; i++)
	{
		if (xi.get_sample(i) >= right)
			n_j++;
	}
	//n_j = sample_size * (1 - xi.sample_cumulative_distribution_function(right));

	dataGridView_hypothesis->Rows->Add();
	dataGridView_hypothesis->Rows[n-1]->Cells[0]->Value = n-1;
	dataGridView_hypothesis->Rows[n-1]->Cells[1]->Value = Convert::ToDouble(q_j);

	R_0 =R_0 + ((n_j - sample_size * q_j)*(n_j - sample_size * q_j)) / (sample_size * q_j);

	textBox_R_0->Text = Convert::ToString(R_0);


	int N = 5000;
	double F = 0;
	double step = R_0 / N;
	double r = n; //n
	if (R_0 != 0) {
		for (int i = 0; i < N; i++) 
		{
			F =F + step * pow(2, -r / 2.0) / tgamma(r / 2.0) * pow(i * step, r / 2.0 - 1) * exp(-i * step / 2.0);
		}
	}
	F = 1 - F;
	textBox_F->Text = Convert::ToString(F);

	if (F >= Convert::ToDouble(textBox_hypothesis->Text)) {
		textBox1->Text = "Принять";
	}
	else
		textBox1->Text = "Не принять";

}
private: System::Void dataGridView4HLongTable_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView_hypothesis_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void textBox_F_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}