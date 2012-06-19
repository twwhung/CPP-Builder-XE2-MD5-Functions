//---------------------------------------------------------------------------

#include "cppxe2md5.h"
#include <vcl.h>

#pragma hdrstop

#include "Sample.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	String input = "test";
	ShowMessage(StringToMD5String(input));
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	String path = "../Fortest.txt";
	ShowMessage(FileToMD5String(path));
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button3Click(TObject *Sender)
{
	TFileStream * inputstream = new	TFileStream("../Fortest.txt",fmOpenRead );
	ShowMessage(TStreamToMD5String(inputstream));
	inputstream->Free();
}
//---------------------------------------------------------------------------
