/***************************************************************
 * Name:      prueba2App.cpp
 * Purpose:   Code for Application Class
 * Author:    maru ()
 * Created:   2019-10-19
 * Copyright: maru ()
 * License:
 **************************************************************/

#include "prueba2App.h"

//(*AppHeaders
#include "prueba2Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(prueba2App);

bool prueba2App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	prueba2Frame* Frame = new prueba2Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
