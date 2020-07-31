#ifndef VENTASCOMPRAS_H
#define VENTASCOMPRAS_H

//(*Headers(ventasCompras)
#include <wx/frame.h>
//*)

class ventasCompras: public wxFrame
{
	public:

		ventasCompras(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ventasCompras();

		//(*Declarations(ventasCompras)
		//*)

	protected:

		//(*Identifiers(ventasCompras)
		//*)

	private:

		//(*Handlers(ventasCompras)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
