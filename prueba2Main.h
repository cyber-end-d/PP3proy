/***************************************************************
 * Name:      prueba2Main.h
 * Purpose:   Defines Application Frame
 * Author:    maru ()
 * Created:   2019-10-19
 * Copyright: maru ()
 * License:
 **************************************************************/

#ifndef PRUEBA2MAIN_H
#define PRUEBA2MAIN_H

//(*Headers(prueba2Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class prueba2Frame: public wxFrame
{
    public:

        prueba2Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~prueba2Frame();

    private:

        //(*Handlers(prueba2Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbuttonABClick(wxCommandEvent& event);
        void OnbuttonMClick(wxCommandEvent& event);
        void OnbuttonLClick(wxCommandEvent& event);
        void OnbuttonVCClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(prueba2Frame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long AB_Quit;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(prueba2Frame)
        wxButton* buttonAB;
        wxButton* buttonL;
        wxButton* buttonM;
        wxButton* buttonVC;
        wxMenu* Menu3;
        wxMenu* Menu4;
        wxMenu* Menu5;
        wxMenu* Menu6;
        wxMenuItem* MenuItem3;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PRUEBA2MAIN_H
