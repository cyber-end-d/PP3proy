#ifndef LISTADOS_H
#define LISTADOS_H

//(*Headers(Listados)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
//*)

class Listados: public wxFrame
{
	public:

		Listados(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Listados();

		//(*Declarations(Listados)
		wxButton* buttonE;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Listados)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Listados)
		void OnbuttonEClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
