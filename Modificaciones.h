#ifndef MODIFICACIONES_H
#define MODIFICACIONES_H

//(*Headers(Modificaciones)
#include <wx/frame.h>
//*)

class Modificaciones: public wxFrame
{
	public:

		Modificaciones(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Modificaciones();

		//(*Declarations(Modificaciones)
		//*)

	protected:

		//(*Identifiers(Modificaciones)
		//*)

	private:

		//(*Handlers(Modificaciones)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
