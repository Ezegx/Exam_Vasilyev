//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include <string>

#include "Unit1.h"
#include <System.Zip.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
using namespace std;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 TZipFile *zip = new TZipFile();
 zip ->ZipDirectoryContents(Edit1->Text, Edit2->Text);
 zip ->Close();
 zip ->Free();
}
//---------------------------------------------------------------------------

