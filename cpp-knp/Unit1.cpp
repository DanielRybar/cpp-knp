//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <random>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int kmn = 0;
int uzivatel = 0;
int pc = 0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Label5->Caption="Zvolil jsi k?men.";
	randomize();
	kmn = (rand() % 3 )+ 1;
	switch(kmn)
	{
		case 1: Label2->Caption="K?men"; break;
		case 2: Label2->Caption="N??ky"; uzivatel++; break;
		case 3: Label2->Caption="Pap?r"; pc++; break;
		default: Label2->Caption="Chyba"; break;
	}
	Label4->Caption=uzivatel;
	Label6->Caption=pc;
	if(uzivatel >= 10)
	{
		Label7->Caption="Vyhr?l u?ivatel!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
	else if(pc >= 10)
	{
		Label7->Caption="Vyhr?l PC!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Label5->Caption="Zvolil jsi n??ky.";
	randomize();
	kmn = (rand() % 3 )+ 1;
	switch(kmn)
	{
		case 1: Label2->Caption="K?men"; pc++; break;
		case 2: Label2->Caption="N??ky"; break;
		case 3: Label2->Caption="Pap?r"; uzivatel++; break;
		default: Label2->Caption="Chyba"; break;
	}
	Label4->Caption=uzivatel;
	Label6->Caption=pc;
	if(uzivatel >= 10)
	{
		Label7->Caption="Vyhr?l u?ivatel!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
	else if(pc >= 10)
	{
		Label7->Caption="Vyhr?l PC!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Label5->Caption="Zvolil jsi pap?r.";
	randomize();
	kmn = (rand() % 3 )+ 1;
	switch(kmn)
	{
		case 1: Label2->Caption="K?men"; uzivatel++; break;
		case 2: Label2->Caption="N??ky"; pc++; break;
		case 3: Label2->Caption="Pap?r"; break;
		default: Label2->Caption="Chyba"; break;
	}
	Label4->Caption=uzivatel;
	Label6->Caption=pc;
	if(uzivatel >= 10)
	{
		Label7->Caption="Vyhr?l u?ivatel!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
	else if(pc >= 10)
	{
		Label7->Caption="Vyhr?l PC!";
		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Button4->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
	Button4->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form1->Close();
}
//---------------------------------------------------------------------------

