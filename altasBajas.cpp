#include "altasBajas.h"
#include <iostream>
//#include <fstream>
//#include "Articulo.h"

using namespace std;

//(*InternalHeaders(altasBajas)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(altasBajas)
const long altasBajas::ID_BUTTON1 = wxNewId();
const long altasBajas::ID_BUTTON2 = wxNewId();
const long altasBajas::ID_STATICTEXT1 = wxNewId();
const long altasBajas::ID_STATICTEXT2 = wxNewId();
const long altasBajas::ID_STATICTEXT3 = wxNewId();
const long altasBajas::ID_STATICTEXT4 = wxNewId();
const long altasBajas::ID_STATICTEXT5 = wxNewId();
const long altasBajas::ID_STATICTEXT6 = wxNewId();
const long altasBajas::ID_TEXTCTRL1 = wxNewId();
const long altasBajas::ID_TEXTCTRL2 = wxNewId();
const long altasBajas::ID_TEXTCTRL3 = wxNewId();
const long altasBajas::ID_TEXTCTRL4 = wxNewId();
const long altasBajas::ID_TEXTCTRL5 = wxNewId();
const long altasBajas::ID_TEXTCTRL6 = wxNewId();
const long altasBajas::ID_STATICTEXT7 = wxNewId();
const long altasBajas::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(altasBajas,wxFrame)
	//(*EventTable(altasBajas)
	//*)
END_EVENT_TABLE()

altasBajas::altasBajas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(altasBajas)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(898,572));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(239,12,97));
	buttonA = new wxButton(this, ID_BUTTON1, _("Allta"), wxPoint(712,168), wxSize(152,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	buttonC = new wxButton(this, ID_BUTTON2, _("Clear"), wxPoint(712,344), wxSize(152,56), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Código"), wxPoint(32,40), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Descripción"), wxPoint(32,104), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Existencias"), wxPoint(32,168), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Stock mínimo"), wxPoint(32,232), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Stock máximo"), wxPoint(32,296), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Precio reposición"), wxPoint(32,360), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(384,56), wxSize(264,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(384,112), wxSize(268,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(384,176), wxSize(260,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(384,248), wxSize(260,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(384,312), wxSize(260,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxPoint(384,376), wxSize(260,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, wxEmptyString, wxPoint(72,464), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText7->SetForegroundColour(wxColour(23,219,219));
	StaticText7->SetBackgroundColour(wxColour(192,16,96));
	wxFont StaticText7Font(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	buttonB = new wxButton(this, ID_BUTTON3, _("Baja"), wxPoint(712,256), wxSize(152,56), 0, wxDefaultValidator, _T("ID_BUTTON3"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&altasBajas::OnbuttonAClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&altasBajas::OnbuttonCClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&altasBajas::OnbuttonBClick);

	//*)
}

altasBajas::~altasBajas()
{
	//(*Destroy(altasBajas)
	//*)
}

#include <fstream>
#include<string>
#include "Articulo.h"
#include<wx/string.h>

using namespace std;

void altasBajas::OnbuttonAClick(wxCommandEvent& event)
{
    Articulo reg, ar;
    fstream arch;
    int cod, ex, stm, stM;
    float pr;
    wxString desc;

    arch.open("articulo.dat",ios::app|ios::binary);
    if(!arch)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }
    arch.close();

    arch.open("articulo.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }

    wxString str = TextCtrl1->GetLineText(0);
    cod=wxAtoi(str);

    desc=TextCtrl2->GetLineText(0);

    str=TextCtrl3->GetLineText(0);
    ex=wxAtoi(str);

    str=TextCtrl4->GetLineText(0);
    stm=wxAtoi(str);

    str=TextCtrl5->GetLineText(0);
    stM=wxAtoi(str);

    str=TextCtrl6->GetLineText(0);
    pr=wxAtoi(str);

    ar.setCodigo(cod);
    ar.buscar(arch);
    if(!arch.eof())
            StaticText7->SetLabel("Alta existente");
    else
        {
            arch.clear();
            reg.setCodigo(cod);
            reg.setDescripcion(desc.ToStdString());
            reg.setExistencias(ex);
            reg.setStockMin(stm);
            reg.setStockMax(stM);
            reg.setPrecio(pr);
            arch.seekp(0,ios::end);
            arch.write(reinterpret_cast<const char *>(&reg),sizeof(Articulo));
            StaticText7->SetLabel("Alta exitosa");
        }
    arch.close();
}

void altasBajas::OnbuttonCClick(wxCommandEvent& event)
{
    StaticText7->SetLabel(" ");
    TextCtrl1->Clear();
    TextCtrl2->Clear();
    TextCtrl3->Clear();
    TextCtrl4->Clear();
    TextCtrl5->Clear();
    TextCtrl6->Clear();
}

void altasBajas::OnbuttonBClick(wxCommandEvent& event)
{
    Articulo reg, ar;
    fstream arch;
    int co;

    arch.open("articulo.dat",ios::app|ios::binary);
    if(!arch)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }
    arch.close();

    arch.open("articulo.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }

    wxString str = TextCtrl1->GetLineText(0);
    co=wxAtoi(str);

    ar.setCodigo(co);
    ar.buscar(arch);
    if(arch.eof())
        {
            StaticText7->SetLabel("Baja inexistente");
            arch.clear();
        }
        else
        {
            arch.seekg(arch.tellg()-sizeof(Articulo),ios::beg);
            arch.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
            reg.setBorrado(1);
            arch.seekp(arch.tellg()-sizeof(Articulo),ios::beg);
            arch.write(reinterpret_cast<const char *>(&reg),sizeof(Articulo));
            StaticText7->SetLabel("Baja exitosa");
        }
    arch.close();
}


/*void altasBajas::OnClose(wxCloseEvent& event)
{
    fstream temp, a;
    Articulo reg;

    a.open("articulo.dat",ios::app|ios::binary);
    if(!a)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }
    a.close();

    a.open("articulo.dat",ios::in|ios::out |ios::binary);
    if(!a)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }

    temp.open("temporal.dat",ios::out |ios::binary);
    if(!temp)
    {
        StaticText7->SetLabel("Error de apertura de archivo");
        Close();
    }

    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    while(!a.eof())
    {
        if(reg.getBorrado()==0)
        {
            temp.write(reinterpret_cast<const char *>(&reg),sizeof(Articulo));
        }
        a.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    }
    a.close();
    temp.close();
    system("del articulo.dat");
    system("rename temporal.dat articulo.dat");
    a.open("articulo.dat",ios::in|ios::out |ios::binary);
    if(!a)
    {
        StaticText7->SetLabel("Error de apertura");
        Close();
    }

}*/
