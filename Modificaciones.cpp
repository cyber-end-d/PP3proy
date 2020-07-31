#include "Modificaciones.h"

//(*InternalHeaders(Modificaciones)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Modificaciones)
//*)

BEGIN_EVENT_TABLE(Modificaciones,wxFrame)
	//(*EventTable(Modificaciones)
	//*)
END_EVENT_TABLE()

Modificaciones::Modificaciones(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Modificaciones)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(825,489));
	Move(wxDefaultPosition);
	//*)
}

Modificaciones::~Modificaciones()
{
	//(*Destroy(Modificaciones)
	//*)
}

