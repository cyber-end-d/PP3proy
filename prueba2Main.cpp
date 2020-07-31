/***************************************************************
 * Name:      prueba2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    maru ()
 * Created:   2019-10-19
 * Copyright: maru ()
 * License:
 **************************************************************/

#include "prueba2Main.h"
#include <wx/msgdlg.h>
#include "altasBajas.h"
#include "Modificaciones.h"
#include "Listados.h"
#include "ventasCompras.h"

#include "Articulo.h"
#include <fstream>


//(*InternalHeaders(prueba2Frame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(prueba2Frame)
const long prueba2Frame::ID_STATICTEXT1 = wxNewId();
const long prueba2Frame::ID_BUTTON1 = wxNewId();
const long prueba2Frame::ID_BUTTON2 = wxNewId();
const long prueba2Frame::ID_BUTTON3 = wxNewId();
const long prueba2Frame::ID_BUTTON4 = wxNewId();
const long prueba2Frame::idMenuQuit = wxNewId();
const long prueba2Frame::idMenuAbout = wxNewId();
const long prueba2Frame::AB_Quit = wxNewId();
const long prueba2Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(prueba2Frame,wxFrame)
    //(*EventTable(prueba2Frame)
    //*)
END_EVENT_TABLE()

prueba2Frame::prueba2Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(prueba2Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(867,536));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Menu"), wxPoint(376,128), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    buttonAB = new wxButton(this, ID_BUTTON1, _("Altas/Bajas"), wxPoint(368,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    buttonM = new wxButton(this, ID_BUTTON2, _("Modificaciones"), wxPoint(360,320), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    buttonL = new wxButton(this, ID_BUTTON3, _("Listados"), wxPoint(368,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    buttonVC = new wxButton(this, ID_BUTTON4, _("Ventas/Compras"), wxPoint(352,400), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    Menu3 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu3, AB_Quit, _("Quit"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem3);
    MenuBar1->Append(Menu3, _("Altas/Bajas"));
    Menu4 = new wxMenu();
    MenuBar1->Append(Menu4, _("Modificaciones"));
    Menu5 = new wxMenu();
    MenuBar1->Append(Menu5, _("Listados"));
    Menu6 = new wxMenu();
    MenuBar1->Append(Menu6, _("Ventas/Compras"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&prueba2Frame::OnbuttonABClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&prueba2Frame::OnbuttonMClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&prueba2Frame::OnbuttonLClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&prueba2Frame::OnbuttonVCClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&prueba2Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&prueba2Frame::OnAbout);
    //*)
}

prueba2Frame::~prueba2Frame()
{
    //(*Destroy(prueba2Frame)
    //*)
}

void prueba2Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void prueba2Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void prueba2Frame::OnbuttonABClick(wxCommandEvent& event)
{
    altasBajas*frm=new altasBajas(this);
    frm->Show();
}


void prueba2Frame::OnbuttonMClick(wxCommandEvent& event)
{
    Modificaciones*frm=new Modificaciones(this);
    frm->Show();
}

void prueba2Frame::OnbuttonLClick(wxCommandEvent& event)
{
    Listados*frm=new Listados(this);
    frm->Show();
}



void prueba2Frame::OnbuttonVCClick(wxCommandEvent& event)
{
    ventasCompras*frm=new ventasCompras(this);
    frm->Show();
}
