#include "converter.h"
#include <cctype>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    converter::converter form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}

// �������������� �����
System::Void converter::converter::convertLength_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool protect = 0;

    if (valueFromLength->Text != "" && valueFromLength->Text != "") {
        if (unitFromLength->Text != "" && unitToLength->Text != "") {
            if (unitFromLength->Text == "����") {
                if (unitToLength->Text == "����") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");

                }
                if (unitToLength->Text == "���") {
                    double ch = 0.08333 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.02778 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.00001578 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 25400000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 25400 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 25.4 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 2.54 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.254 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0254 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.0000254 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "���") {
                if (unitToLength->Text == "����") {
                    double ch = 12 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.3333 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0001894 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 304800000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 304800 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 304.8 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 30.48 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 3.048 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.3048 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.0003048 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "���") {
                if (unitToLength->Text == "����") {
                    double ch = 36 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 3 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0005682 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 914400000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 914400 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 914.4 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 91.44 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 9.144 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.9144 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.0009144 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "����") {
                if (unitToLength->Text == "����") {
                    double ch = 63360 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 5280 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 1760 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1609344000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1609344000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1609344 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 160934 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 16093 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 1609 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1.609 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "��������") {
                if (unitToLength->Text == "����") {
                    double ch = 0.00000003937 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.000000003281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.000000001094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0000000000006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.0000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.00000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.000000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.000000000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "���������") {
                if (unitToLength->Text == "����") {
                    double ch = 0.00003937 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.000003281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.000001094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0000000006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.0001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.00001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.000000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "���������") {
                if (unitToLength->Text == "����") {
                    double ch = 0.03937 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.003281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.001094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0000006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 10000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 0.1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.01 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.000001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "���������") {
                if (unitToLength->Text == "����") {
                    double ch = 0.3937 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.03281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.01094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.000006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 10000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 10000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 10 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.01 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.00001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "��������") {
                if (unitToLength->Text == "����") {
                    double ch = 3.937 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.3281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 0.1094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.00006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 100000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 100000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 100 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 10 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.0001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "����") {
                if (unitToLength->Text == "����") {
                    double ch = 39.37 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 3.281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 1.094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.0006214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1000000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 100 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 10 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 0.001 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }

            if (unitFromLength->Text == "��������") {
                if (unitToLength->Text == "����") {
                    double ch = 39370 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 3281 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���") {
                    double ch = 1094 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 0.6214 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1000000000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1000000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 1000000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "���������") {
                    double ch = 100000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 10000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "����") {
                    double ch = 1000 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
                if (unitToLength->Text == "��������") {
                    double ch = 1 * Convert::ToDouble(valueFromLength->Text);
                    valueToLength->Text = Convert::ToString(ch);
                    outLength->AppendText(valueFromLength->Text + " (" + unitFromLength->Text + ") = " + valueToLength->Text + "(" + unitToLength->Text + ")" + "\r\n");
                }
            }
        }
        else MessageBox::Show("�� ������� ������� ���������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    else {
        MessageBox::Show("�� ������� �������� �/��� ������� ���������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    return System::Void();
}

// ������� ���������� �����
System::Void converter::converter::deleteLength_Click(System::Object^ sender, System::EventArgs^ e)
{
    outLength->Clear();

    return System::Void();
}

// �������� ������� �������� � ������� ��������� �����
System::Void converter::converter::changeLength_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ chValueLength = valueFromLength->Text;
    valueFromLength->Text = valueToLength->Text;
    valueToLength->Text = chValueLength;

    String^ chUnitLength = unitFromLength->Text;
    unitFromLength->Text = unitToLength->Text;
    unitToLength->Text = chUnitLength;
    
    return System::Void();
}


// �������������� ������
System::Void converter::converter::convertVolume_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

// ������� ���������� ������
System::Void converter::converter::deleteVolume_Click(System::Object^ sender, System::EventArgs^ e)
{
    outVolume->Clear();

    return System::Void();
}

// �������� ������� �������� � ������� ��������� ������
System::Void converter::converter::changeVolume_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ chValueVolume = valueFromVolume->Text;
    valueFromVolume->Text = valueToVolume->Text;
    valueToVolume->Text = chValueVolume;

    String^ chUnitVolume = unitFromVolume->Text;
    unitFromVolume->Text = unitToVolume->Text;
    unitToVolume->Text = chUnitVolume;

    return System::Void();
}


// �������������� ����
System::Void converter::converter::convertAngle_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (valueFromAngle->Text != "" && valueFromAngle->Text != "") {
        if (unitFromAngle->Text != "" && unitToAngle->Text != "") {
            if (unitFromAngle->Text == "������") {
                if (unitToAngle->Text == "������") {
                    double ch = 1 * Convert::ToDouble(valueFromAngle->Text);
                    valueToAngle->Text = Convert::ToString(ch);
                    outAngle->AppendText(valueFromAngle->Text + " (" + unitFromAngle->Text + ") = " + valueToAngle->Text + "(" + unitToAngle->Text + ")" + "\r\n");
                }
                if (unitToAngle->Text == "������") {
                    double ch = 0.01745 * Convert::ToDouble(valueFromAngle->Text);
                    valueToAngle->Text = Convert::ToString(ch);
                    outAngle->AppendText(valueFromAngle->Text + " (" + unitFromAngle->Text + ") = " + valueToAngle->Text + "(" + unitToAngle->Text + ")" + "\r\n");
                }
            }

            if (unitFromAngle->Text == "������") {
                if (unitToAngle->Text == "������") {
                    double ch = 57.3 * Convert::ToDouble(valueFromAngle->Text);
                    valueToAngle->Text = Convert::ToString(ch);
                    outAngle->AppendText(valueFromAngle->Text + " (" + unitFromAngle->Text + ") = " + valueToAngle->Text + "(" + unitToAngle->Text + ")" + "\r\n");
                }
                if (unitToAngle->Text == "������") {
                    double ch = 1 * Convert::ToDouble(valueFromAngle->Text);
                    valueToAngle->Text = Convert::ToString(ch);
                    outAngle->AppendText(valueFromAngle->Text + " (" + unitFromAngle->Text + ") = " + valueToAngle->Text + "(" + unitToAngle->Text + ")" + "\r\n");
                }
            }
        }
        else MessageBox::Show("�� ������� ������� ���������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    else {
        MessageBox::Show("�� ������� �������� �/��� ������� ���������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    return System::Void();
}

// ������� ���������� ����
System::Void converter::converter::deleteAngle_Click(System::Object^ sender, System::EventArgs^ e)
{
    outAngle->Clear();

    return System::Void();
}

// �������� ������� �������� � ������� ��������� ����
System::Void converter::converter::changeAngle_Click(System::Object^ sender, System::EventArgs^ e)
{

    String^ chValueAngle = valueFromAngle->Text;
    valueFromAngle->Text = valueToAngle->Text;
    valueToAngle->Text = chValueAngle;

    String^ chUnitAngle = unitFromAngle->Text;
    unitFromAngle->Text = unitToAngle->Text;
    unitToAngle->Text = chUnitAngle;

    return System::Void();
}


