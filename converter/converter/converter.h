#pragma once

namespace converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для converter
	/// </summary>
	public ref class converter : public System::Windows::Forms::Form
	{
	public:
		converter(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~converter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ convert;
	private: System::Windows::Forms::TextBox^ valueFromLength;
	private: System::Windows::Forms::ComboBox^ unitFromLength;


	private: System::Windows::Forms::TabControl^ tabs;
	private: System::Windows::Forms::TabPage^ length;
	private: System::Windows::Forms::TabPage^ volume;
	private: System::Windows::Forms::TextBox^ valueToLength;
	private: System::Windows::Forms::ComboBox^ unitToLength;

















	private: System::Windows::Forms::TabPage^ angle;
	private: System::Windows::Forms::Button^ convertLength;
	private: System::Windows::Forms::Label^ resultLength;
	private: System::Windows::Forms::TextBox^ outLength;





	private: System::Windows::Forms::Button^ changeLength;
	private: System::Windows::Forms::Button^ deleteLength;
	private: System::Windows::Forms::Button^ deleteVolume;

	private: System::Windows::Forms::Button^ changeVolume;
	private: System::Windows::Forms::Label^ resultVolume;


	private: System::Windows::Forms::TextBox^ outVolume;
	private: System::Windows::Forms::Button^ convertVolume;


	private: System::Windows::Forms::TextBox^ valueToVolume;
	private: System::Windows::Forms::ComboBox^ unitToVolume;


	private: System::Windows::Forms::TextBox^ valueFromVolume;
	private: System::Windows::Forms::ComboBox^ unitFromVolume;
	private: System::Windows::Forms::Button^ deleteAngle;




	private: System::Windows::Forms::Button^ changeAngle;
	private: System::Windows::Forms::Label^ resultAngle;
	private: System::Windows::Forms::TextBox^ outAngle;



	private: System::Windows::Forms::Button^ convertAngle;

	private: System::Windows::Forms::TextBox^ valueToAngle;
	private: System::Windows::Forms::ComboBox^ unitToAngle;


	private: System::Windows::Forms::TextBox^ valueFromAngle;
	private: System::Windows::Forms::ComboBox^ unitFromAngle;



















































	protected:

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
			this->convert = (gcnew System::Windows::Forms::Button());
			this->valueFromLength = (gcnew System::Windows::Forms::TextBox());
			this->unitFromLength = (gcnew System::Windows::Forms::ComboBox());
			this->tabs = (gcnew System::Windows::Forms::TabControl());
			this->length = (gcnew System::Windows::Forms::TabPage());
			this->deleteLength = (gcnew System::Windows::Forms::Button());
			this->changeLength = (gcnew System::Windows::Forms::Button());
			this->resultLength = (gcnew System::Windows::Forms::Label());
			this->outLength = (gcnew System::Windows::Forms::TextBox());
			this->convertLength = (gcnew System::Windows::Forms::Button());
			this->valueToLength = (gcnew System::Windows::Forms::TextBox());
			this->unitToLength = (gcnew System::Windows::Forms::ComboBox());
			this->volume = (gcnew System::Windows::Forms::TabPage());
			this->deleteVolume = (gcnew System::Windows::Forms::Button());
			this->changeVolume = (gcnew System::Windows::Forms::Button());
			this->resultVolume = (gcnew System::Windows::Forms::Label());
			this->outVolume = (gcnew System::Windows::Forms::TextBox());
			this->convertVolume = (gcnew System::Windows::Forms::Button());
			this->valueToVolume = (gcnew System::Windows::Forms::TextBox());
			this->unitToVolume = (gcnew System::Windows::Forms::ComboBox());
			this->valueFromVolume = (gcnew System::Windows::Forms::TextBox());
			this->unitFromVolume = (gcnew System::Windows::Forms::ComboBox());
			this->angle = (gcnew System::Windows::Forms::TabPage());
			this->deleteAngle = (gcnew System::Windows::Forms::Button());
			this->changeAngle = (gcnew System::Windows::Forms::Button());
			this->resultAngle = (gcnew System::Windows::Forms::Label());
			this->outAngle = (gcnew System::Windows::Forms::TextBox());
			this->convertAngle = (gcnew System::Windows::Forms::Button());
			this->valueToAngle = (gcnew System::Windows::Forms::TextBox());
			this->unitToAngle = (gcnew System::Windows::Forms::ComboBox());
			this->valueFromAngle = (gcnew System::Windows::Forms::TextBox());
			this->unitFromAngle = (gcnew System::Windows::Forms::ComboBox());
			this->tabs->SuspendLayout();
			this->length->SuspendLayout();
			this->volume->SuspendLayout();
			this->angle->SuspendLayout();
			this->SuspendLayout();
			// 
			// convert
			// 
			this->convert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->convert->Location = System::Drawing::Point(131, 128);
			this->convert->Name = L"convert";
			this->convert->Size = System::Drawing::Size(135, 36);
			this->convert->TabIndex = 0;
			this->convert->Text = L"Перевести";
			this->convert->UseVisualStyleBackColor = true;
			// 
			// valueFromLength
			// 
			this->valueFromLength->BackColor = System::Drawing::SystemColors::Window;
			this->valueFromLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueFromLength->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueFromLength->Location = System::Drawing::Point(19, 20);
			this->valueFromLength->Multiline = true;
			this->valueFromLength->Name = L"valueFromLength";
			this->valueFromLength->Size = System::Drawing::Size(159, 33);
			this->valueFromLength->TabIndex = 1;
			// 
			// unitFromLength
			// 
			this->unitFromLength->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitFromLength->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitFromLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitFromLength->FormattingEnabled = true;
			this->unitFromLength->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->unitFromLength->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Дюйм", L"Фут", L"Ярд", L"Миля", L"Нанометр",
					L"Микрометр", L"Миллиметр", L"Сантиметр", L"Дециметр", L"Метр", L"Километр"
			});
			this->unitFromLength->Location = System::Drawing::Point(19, 74);
			this->unitFromLength->Name = L"unitFromLength";
			this->unitFromLength->Size = System::Drawing::Size(84, 24);
			this->unitFromLength->TabIndex = 2;
			// 
			// tabs
			// 
			this->tabs->Controls->Add(this->length);
			this->tabs->Controls->Add(this->volume);
			this->tabs->Controls->Add(this->angle);
			this->tabs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabs->Location = System::Drawing::Point(0, 0);
			this->tabs->Name = L"tabs";
			this->tabs->SelectedIndex = 0;
			this->tabs->Size = System::Drawing::Size(385, 375);
			this->tabs->TabIndex = 4;
			// 
			// length
			// 
			this->length->Controls->Add(this->deleteLength);
			this->length->Controls->Add(this->changeLength);
			this->length->Controls->Add(this->resultLength);
			this->length->Controls->Add(this->outLength);
			this->length->Controls->Add(this->convertLength);
			this->length->Controls->Add(this->valueToLength);
			this->length->Controls->Add(this->unitToLength);
			this->length->Controls->Add(this->valueFromLength);
			this->length->Controls->Add(this->unitFromLength);
			this->length->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->length->Location = System::Drawing::Point(4, 24);
			this->length->Name = L"length";
			this->length->Padding = System::Windows::Forms::Padding(3);
			this->length->Size = System::Drawing::Size(377, 347);
			this->length->TabIndex = 0;
			this->length->Text = L"Длины";
			this->length->UseVisualStyleBackColor = true;
			// 
			// deleteLength
			// 
			this->deleteLength->Location = System::Drawing::Point(283, 163);
			this->deleteLength->Name = L"deleteLength";
			this->deleteLength->Size = System::Drawing::Size(75, 29);
			this->deleteLength->TabIndex = 10;
			this->deleteLength->Text = L"Del";
			this->deleteLength->UseVisualStyleBackColor = true;
			this->deleteLength->Click += gcnew System::EventHandler(this, &converter::deleteLength_Click);
			// 
			// changeLength
			// 
			this->changeLength->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changeLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeLength->Location = System::Drawing::Point(148, 74);
			this->changeLength->Name = L"changeLength";
			this->changeLength->Size = System::Drawing::Size(84, 24);
			this->changeLength->TabIndex = 9;
			this->changeLength->Text = L"⇄";
			this->changeLength->UseVisualStyleBackColor = true;
			this->changeLength->Click += gcnew System::EventHandler(this, &converter::changeLength_Click);
			// 
			// resultLength
			// 
			this->resultLength->AutoSize = true;
			this->resultLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLength->Location = System::Drawing::Point(145, 169);
			this->resultLength->Name = L"resultLength";
			this->resultLength->Size = System::Drawing::Size(87, 16);
			this->resultLength->TabIndex = 8;
			this->resultLength->Text = L"Результаты";
			// 
			// outLength
			// 
			this->outLength->Location = System::Drawing::Point(19, 203);
			this->outLength->Multiline = true;
			this->outLength->Name = L"outLength";
			this->outLength->ReadOnly = true;
			this->outLength->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outLength->Size = System::Drawing::Size(339, 126);
			this->outLength->TabIndex = 7;
			// 
			// convertLength
			// 
			this->convertLength->Cursor = System::Windows::Forms::Cursors::Hand;
			this->convertLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convertLength->Location = System::Drawing::Point(89, 117);
			this->convertLength->Name = L"convertLength";
			this->convertLength->Size = System::Drawing::Size(200, 33);
			this->convertLength->TabIndex = 6;
			this->convertLength->Text = L"Перевести";
			this->convertLength->UseVisualStyleBackColor = true;
			this->convertLength->Click += gcnew System::EventHandler(this, &converter::convertLength_Click);
			// 
			// valueToLength
			// 
			this->valueToLength->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->valueToLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueToLength->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueToLength->Location = System::Drawing::Point(199, 20);
			this->valueToLength->Multiline = true;
			this->valueToLength->Name = L"valueToLength";
			this->valueToLength->ReadOnly = true;
			this->valueToLength->Size = System::Drawing::Size(159, 33);
			this->valueToLength->TabIndex = 4;
			// 
			// unitToLength
			// 
			this->unitToLength->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitToLength->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitToLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitToLength->FormattingEnabled = true;
			this->unitToLength->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Дюйм", L"Фут", L"Ярд", L"Миля", L"Нанометр",
					L"Микрометр", L"Миллиметр", L"Сантиметр", L"Дециметр", L"Метр", L"Километр"
			});
			this->unitToLength->Location = System::Drawing::Point(274, 74);
			this->unitToLength->Name = L"unitToLength";
			this->unitToLength->Size = System::Drawing::Size(84, 24);
			this->unitToLength->TabIndex = 5;
			// 
			// volume
			// 
			this->volume->Controls->Add(this->deleteVolume);
			this->volume->Controls->Add(this->changeVolume);
			this->volume->Controls->Add(this->resultVolume);
			this->volume->Controls->Add(this->outVolume);
			this->volume->Controls->Add(this->convertVolume);
			this->volume->Controls->Add(this->valueToVolume);
			this->volume->Controls->Add(this->unitToVolume);
			this->volume->Controls->Add(this->valueFromVolume);
			this->volume->Controls->Add(this->unitFromVolume);
			this->volume->Location = System::Drawing::Point(4, 24);
			this->volume->Name = L"volume";
			this->volume->Padding = System::Windows::Forms::Padding(3);
			this->volume->Size = System::Drawing::Size(377, 347);
			this->volume->TabIndex = 1;
			this->volume->Text = L"Объемы";
			this->volume->UseVisualStyleBackColor = true;
			// 
			// deleteVolume
			// 
			this->deleteVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteVolume->Location = System::Drawing::Point(283, 163);
			this->deleteVolume->Name = L"deleteVolume";
			this->deleteVolume->Size = System::Drawing::Size(75, 29);
			this->deleteVolume->TabIndex = 19;
			this->deleteVolume->Text = L"Del";
			this->deleteVolume->UseVisualStyleBackColor = true;
			this->deleteVolume->Click += gcnew System::EventHandler(this, &converter::deleteVolume_Click);
			// 
			// changeVolume
			// 
			this->changeVolume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changeVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeVolume->Location = System::Drawing::Point(148, 74);
			this->changeVolume->Name = L"changeVolume";
			this->changeVolume->Size = System::Drawing::Size(84, 24);
			this->changeVolume->TabIndex = 18;
			this->changeVolume->Text = L"⇄";
			this->changeVolume->UseVisualStyleBackColor = true;
			this->changeVolume->Click += gcnew System::EventHandler(this, &converter::changeVolume_Click);
			// 
			// resultVolume
			// 
			this->resultVolume->AutoSize = true;
			this->resultVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultVolume->Location = System::Drawing::Point(145, 169);
			this->resultVolume->Name = L"resultVolume";
			this->resultVolume->Size = System::Drawing::Size(87, 16);
			this->resultVolume->TabIndex = 17;
			this->resultVolume->Text = L"Результаты";
			// 
			// outVolume
			// 
			this->outVolume->Location = System::Drawing::Point(19, 203);
			this->outVolume->Multiline = true;
			this->outVolume->Name = L"outVolume";
			this->outVolume->ReadOnly = true;
			this->outVolume->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outVolume->Size = System::Drawing::Size(339, 126);
			this->outVolume->TabIndex = 16;
			// 
			// convertVolume
			// 
			this->convertVolume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->convertVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convertVolume->Location = System::Drawing::Point(89, 117);
			this->convertVolume->Name = L"convertVolume";
			this->convertVolume->Size = System::Drawing::Size(200, 33);
			this->convertVolume->TabIndex = 15;
			this->convertVolume->Text = L"Перевести";
			this->convertVolume->UseVisualStyleBackColor = true;
			this->convertVolume->Click += gcnew System::EventHandler(this, &converter::convertVolume_Click);
			// 
			// valueToVolume
			// 
			this->valueToVolume->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->valueToVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueToVolume->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueToVolume->Location = System::Drawing::Point(199, 20);
			this->valueToVolume->Multiline = true;
			this->valueToVolume->Name = L"valueToVolume";
			this->valueToVolume->ReadOnly = true;
			this->valueToVolume->Size = System::Drawing::Size(159, 33);
			this->valueToVolume->TabIndex = 13;
			// 
			// unitToVolume
			// 
			this->unitToVolume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitToVolume->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitToVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitToVolume->FormattingEnabled = true;
			this->unitToVolume->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Дюйм", L"Фут", L"Ярд", L"Миля", L"Нанометр",
					L"Микрометр", L"Миллиметр", L"Сантиметр", L"Дециметр", L"Метр", L"Километр"
			});
			this->unitToVolume->Location = System::Drawing::Point(274, 74);
			this->unitToVolume->Name = L"unitToVolume";
			this->unitToVolume->Size = System::Drawing::Size(84, 24);
			this->unitToVolume->TabIndex = 14;
			// 
			// valueFromVolume
			// 
			this->valueFromVolume->BackColor = System::Drawing::SystemColors::Window;
			this->valueFromVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueFromVolume->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueFromVolume->Location = System::Drawing::Point(19, 20);
			this->valueFromVolume->Multiline = true;
			this->valueFromVolume->Name = L"valueFromVolume";
			this->valueFromVolume->Size = System::Drawing::Size(159, 33);
			this->valueFromVolume->TabIndex = 11;
			// 
			// unitFromVolume
			// 
			this->unitFromVolume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitFromVolume->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitFromVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitFromVolume->FormattingEnabled = true;
			this->unitFromVolume->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->unitFromVolume->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Дюйм", L"Фут", L"Ярд", L"Миля", L"Нанометр",
					L"Микрометр", L"Миллиметр", L"Сантиметр", L"Дециметр", L"Метр", L"Километр"
			});
			this->unitFromVolume->Location = System::Drawing::Point(19, 74);
			this->unitFromVolume->Name = L"unitFromVolume";
			this->unitFromVolume->Size = System::Drawing::Size(84, 24);
			this->unitFromVolume->TabIndex = 12;
			// 
			// angle
			// 
			this->angle->Controls->Add(this->deleteAngle);
			this->angle->Controls->Add(this->changeAngle);
			this->angle->Controls->Add(this->resultAngle);
			this->angle->Controls->Add(this->outAngle);
			this->angle->Controls->Add(this->convertAngle);
			this->angle->Controls->Add(this->valueToAngle);
			this->angle->Controls->Add(this->unitToAngle);
			this->angle->Controls->Add(this->valueFromAngle);
			this->angle->Controls->Add(this->unitFromAngle);
			this->angle->Location = System::Drawing::Point(4, 24);
			this->angle->Name = L"angle";
			this->angle->Size = System::Drawing::Size(377, 347);
			this->angle->TabIndex = 2;
			this->angle->Text = L"Углы";
			this->angle->UseVisualStyleBackColor = true;
			// 
			// deleteAngle
			// 
			this->deleteAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteAngle->Location = System::Drawing::Point(283, 163);
			this->deleteAngle->Name = L"deleteAngle";
			this->deleteAngle->Size = System::Drawing::Size(75, 29);
			this->deleteAngle->TabIndex = 28;
			this->deleteAngle->Text = L"Del";
			this->deleteAngle->UseVisualStyleBackColor = true;
			this->deleteAngle->Click += gcnew System::EventHandler(this, &converter::deleteAngle_Click);
			// 
			// changeAngle
			// 
			this->changeAngle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changeAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeAngle->Location = System::Drawing::Point(148, 74);
			this->changeAngle->Name = L"changeAngle";
			this->changeAngle->Size = System::Drawing::Size(84, 24);
			this->changeAngle->TabIndex = 27;
			this->changeAngle->Text = L"⇄";
			this->changeAngle->UseVisualStyleBackColor = true;
			this->changeAngle->Click += gcnew System::EventHandler(this, &converter::changeAngle_Click);
			// 
			// resultAngle
			// 
			this->resultAngle->AutoSize = true;
			this->resultAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultAngle->Location = System::Drawing::Point(145, 169);
			this->resultAngle->Name = L"resultAngle";
			this->resultAngle->Size = System::Drawing::Size(87, 16);
			this->resultAngle->TabIndex = 26;
			this->resultAngle->Text = L"Результаты";
			// 
			// outAngle
			// 
			this->outAngle->Location = System::Drawing::Point(19, 203);
			this->outAngle->Multiline = true;
			this->outAngle->Name = L"outAngle";
			this->outAngle->ReadOnly = true;
			this->outAngle->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outAngle->Size = System::Drawing::Size(339, 126);
			this->outAngle->TabIndex = 25;
			// 
			// convertAngle
			// 
			this->convertAngle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->convertAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convertAngle->Location = System::Drawing::Point(89, 117);
			this->convertAngle->Name = L"convertAngle";
			this->convertAngle->Size = System::Drawing::Size(200, 33);
			this->convertAngle->TabIndex = 24;
			this->convertAngle->Text = L"Перевести";
			this->convertAngle->UseVisualStyleBackColor = true;
			this->convertAngle->Click += gcnew System::EventHandler(this, &converter::convertAngle_Click);
			// 
			// valueToAngle
			// 
			this->valueToAngle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->valueToAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueToAngle->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueToAngle->Location = System::Drawing::Point(199, 20);
			this->valueToAngle->Multiline = true;
			this->valueToAngle->Name = L"valueToAngle";
			this->valueToAngle->ReadOnly = true;
			this->valueToAngle->Size = System::Drawing::Size(159, 33);
			this->valueToAngle->TabIndex = 22;
			// 
			// unitToAngle
			// 
			this->unitToAngle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitToAngle->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitToAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitToAngle->FormattingEnabled = true;
			this->unitToAngle->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Градус", L"Радиан" });
			this->unitToAngle->Location = System::Drawing::Point(274, 74);
			this->unitToAngle->Name = L"unitToAngle";
			this->unitToAngle->Size = System::Drawing::Size(84, 24);
			this->unitToAngle->TabIndex = 23;
			// 
			// valueFromAngle
			// 
			this->valueFromAngle->BackColor = System::Drawing::SystemColors::Window;
			this->valueFromAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->valueFromAngle->ForeColor = System::Drawing::SystemColors::WindowText;
			this->valueFromAngle->Location = System::Drawing::Point(19, 20);
			this->valueFromAngle->Multiline = true;
			this->valueFromAngle->Name = L"valueFromAngle";
			this->valueFromAngle->Size = System::Drawing::Size(159, 33);
			this->valueFromAngle->TabIndex = 20;
			// 
			// unitFromAngle
			// 
			this->unitFromAngle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unitFromAngle->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitFromAngle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->unitFromAngle->FormattingEnabled = true;
			this->unitFromAngle->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->unitFromAngle->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Градус", L"Радиан" });
			this->unitFromAngle->Location = System::Drawing::Point(19, 74);
			this->unitFromAngle->Name = L"unitFromAngle";
			this->unitFromAngle->Size = System::Drawing::Size(84, 24);
			this->unitFromAngle->TabIndex = 21;
			// 
			// converter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(385, 375);
			this->Controls->Add(this->tabs);
			this->Controls->Add(this->convert);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"converter";
			this->Text = L"Конвертер";
			this->tabs->ResumeLayout(false);
			this->length->ResumeLayout(false);
			this->length->PerformLayout();
			this->volume->ResumeLayout(false);
			this->volume->PerformLayout();
			this->angle->ResumeLayout(false);
			this->angle->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void convertLength_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteLength_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changeLength_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void convertAngle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteAngle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changeAngle_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void convertVolume_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteVolume_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changeVolume_Click(System::Object^ sender, System::EventArgs^ e);
};
}
