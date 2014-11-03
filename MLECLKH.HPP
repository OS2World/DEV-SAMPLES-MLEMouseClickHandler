#ifndef _MLECLKH_
#define _MLECLKH_
/*******************************************************************************
* MLEMouseClickHandler Class - C++ Header File (mleclkh.hpp)                   *
*                                                                              *
* DISCLAIMER OF WARRANTIES:                                                    *
*    The following [enclosed] code is sample code created by IBM               *
*    Corporation.  This sample code is not part of any standard IBM product    *
*    and is provided to you solely for the purpose of assisting you in the     *
*    development of your applications.  The code is provided "AS IS",          *
*    without warranty of any kind.  IBM shall not be liable for any damages    *
*    arising out of your use of the sample code, even if they have been        *
*    advised of the possibility of such damages.                               *
********************************************************************************/
#include <imoushdr.hpp>              // IMouseHandler, parent class, which
                                     // indirectly includes IMouseEvent.

//forward class references

//**************************************************************************
// Class:   MLEMouseClickHandler
//
// Purpose: Used to capture when text has been Clicked for an MLE using
//          the mouse.
//
//**************************************************************************/
class MLEMouseClickHandler : public IMouseHandler
{

public:
   MLEMouseClickHandler();
   virtual ~MLEMouseClickHandler();     //destructor

protected:
   virtual Boolean mouseClicked(IMouseClickEvent& mouseEvent);

};   //MLEMouseClickHandler

#endif
