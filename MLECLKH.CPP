//****************************************************************************
// MLEMouseClickHandler - (mleclkh.cpp)                                      *
//                                                                           *
// DISCLAIMER OF WARRANTIES:                                                 *
//   The following [enclosed] code is sample code created by IBM             *
//   Corporation.  This sample code is not part of any standard IBM product  *
//   and is provided to you solely for the purpose of assisting you in the   *
//   development of your applications.  The code is provided "AS IS",        *
//   without warranty of any kind.  IBM shall not be liable for any damages  *
//   arising out of your use of the sample code, even if they have been      *
//   advised of the possibility of such damages.                             *
//****************************************************************************
//NOTE: WE RECOMMEND USING A FIXED-SPACE FONT TO LOOK AT THE SOURCE.
//

#ifndef _INOTIFEV_
#include <inotifev.hpp>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif

#ifndef _MULTILINEEDIT_
#include <mle.hpp>
#endif

#include "mleclkh.hpp"

//**************************************************************************
// Class:   MLEMouseClickHandler
//
// Purpose: Used to capture when the selectedText for an MLE has changed
//          as a result of using the mouse.
//
//*************************************************************************** */

//***************************************************************************
// Constructor
//***************************************************************************
#pragma export (MLEMouseClickHandler::MLEMouseClickHandler())
MLEMouseClickHandler :: MLEMouseClickHandler() : IMouseHandler()
{
}

//***************************************************************************
// Destructor
//***************************************************************************
#pragma export (MLEMouseClickHandler::~MLEMouseClickHandler())
MLEMouseClickHandler :: ~MLEMouseClickHandler()
{
}

//***************************************************************************
// MouseClicked
//***************************************************************************
Boolean MLEMouseClickHandler::mouseClicked(IMouseClickEvent& mouseEvent)
{
     MultiLineEdit *iMLE = (MultiLineEdit*)(mouseEvent.controlWindow());

     IFUNCTRACE_DEVELOP();

     if ((mouseEvent.mouseButton() == IMouseClickEvent::button1) &&
         (mouseEvent.mouseAction() == IMouseClickEvent::up))
     {

        iMLE->notifyObservers(INotificationEvent
                                (MultiLineEdit::selectedTextId, *iMLE));
     }

     return false;  //allow any other handlers to be called
}
