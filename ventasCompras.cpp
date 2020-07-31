#include "ventasCompras.h"

//(*InternalHeaders(ventasCompras)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ventasCompras)
//*)

BEGIN_EVENT_TABLE(ventasCompras,wxFrame)
	//(*EventTable(ventasCompras)
	//*)
END_EVENT_TABLE()

ventasCompras::ventasCompras(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ventasCompras)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(918,501));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(179,30,210));
	//*)
}

ventasCompras::~ventasCompras()
{
	//(*Destroy(ventasCompras)
	//*)
}

