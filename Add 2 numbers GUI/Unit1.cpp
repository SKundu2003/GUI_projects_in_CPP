//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String s1 = input1->Text;
	String s2 = input2->Text;
	if((s1 == "") || (s2 ==""))
	{
//      Application->MessageBox(L"invalid",L"caption",MB_OK);

		//another process to show a message box
		//must  remember
		ShowMessage("pleease eenntter a valid number");
		s1 = "0";
        s2 = "0";
    }
	int num1 = s1.ToInt();
	int num2 = s2.ToInt();
	int sum = num1+num2;

	//showing the output
	String out = IntToStr(sum);
    output->Caption = "Result is : " + out;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	input1->Text = "";
	input2->Text = "";
    output->Caption = " Result is ";
}
//---------------------------------------------------------------------------
