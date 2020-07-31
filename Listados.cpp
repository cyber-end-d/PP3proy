#include "Listados.h"


//(*InternalHeaders(Listados)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Listados)
const long Listados::ID_STATICTEXT1 = wxNewId();
const long Listados::ID_BUTTON1 = wxNewId();
const long Listados::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Listados,wxFrame)
	//(*EventTable(Listados)
	//*)
END_EVENT_TABLE()

Listados::Listados(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Listados)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(892,543));
	SetBackgroundColour(wxColour(62,210,106));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(40,432), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(159,159,255));
	StaticText1->SetBackgroundColour(wxColour(32,131,14));
	wxFont StaticText1Font(28,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	buttonE = new wxButton(this, ID_BUTTON1, _("Existencias"), wxPoint(344,136), wxSize(160,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Crear listado"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(36,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Listados::OnbuttonEClick);
	//*)
}

Listados::~Listados()
{
	//(*Destroy(Listados)
	//*)
}

#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Articulo.h"

using namespace std;

void Listados::OnbuttonEClick(wxCommandEvent& event)
{
    fstream archt, arch;
    Articulo reg;
    arch.open("articulo.dat",ios::app|ios::binary);
    if(!arch)
    {
        StaticText1->SetLabel("Error de apertura");
        Close();
    }
    arch.close();
    arch.open("articulo.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        StaticText1->SetLabel("Error de apertura");
        Close();
    }

    archt.open("articulo.txt",ios::out);
    if(!archt)
    {
        StaticText1->SetLabel("Error en la apertura");
        Close();
    }
    archt<<left<<setw(10)<<"Codigo"<<setw(20)<<"Descripcion"<<setw(10)<<"Existencias"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    while(!arch.eof())
    {
        //if(reg.getBorrado()==0)
        //{
            archt<<left<<setw(10)<<reg.getCodigo()<<setw(20)<<reg.getDescripcion()<<setw(10)<<setprecision(2)<<fixed<<reg.getExistencia()<<endl;
        //}
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Articulo));
    }
    archt.close();
    StaticText1->SetLabel("Listado de existencias creado");
}
