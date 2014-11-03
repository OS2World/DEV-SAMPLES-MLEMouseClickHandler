/*******************************************************************************
* FILE NAME: mle.hpp                                                           *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Declaration of the class:                                                  *
*     MultiLineEdit - IMultiLineEdit with a handler to support                 *
*                     selectedText notification.                               *
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
#ifndef _MULTILINEEDIT_
#define _MULTILINEEDIT_

#ifndef _IMLE_
#include <imle.hpp>
#endif

#ifndef _IRECT_
#include <irect.hpp>
#endif

//forward class references
class MLEMouseClickHandler;

/*----------------------------------------------------------------------------*/
/* Align classes on four byte boundary.                                       */
/*----------------------------------------------------------------------------*/
#pragma pack(4)

//*****************************************************************************
// Class definition for MultiLineEdit
//*****************************************************************************
class MultiLineEdit : public IMultiLineEdit {
public:
   //---------------------------------------------------------------------------
   // Constructors / destructors
   //---------------------------------------------------------------------------
   MultiLineEdit(
      unsigned long id = 15000,
      IWindow* parent = IWindow::desktopWindow(),
      IWindow* owner = 0,
      const IRectangle& framingSpec = IRectangle(),
      const IMultiLineEdit::Style& style = IMultiLineEdit::defaultStyle());

   virtual  ~MultiLineEdit();

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------

   //---------------------------------------------------------------------------
   // public member data
   //---------------------------------------------------------------------------
   static INotificationId const selectedTextId;

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   static unsigned long partWindowId;
   MLEMouseClickHandler *iSelectedTextHandler;

};   //MultiLineEdit


/*----------------------------------------------------------------------------*/
/* Resume compiler default packing.                                           */
/*----------------------------------------------------------------------------*/
#pragma pack()

#endif
