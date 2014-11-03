/*******************************************************************************
* FILE NAME: mle.cpp                                                           *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Class implementation of the class:                                         *
*     MultiLineEdit - IMultiLineEdit with a handler to support notifying when  *
*                     selectedText has changed.                                *
*******************************************************************************/
#ifndef _INOTIFEV_
#include <inotifev.hpp>
#endif

#ifndef _IOBSERVR_
#include <iobservr.hpp>
#endif

#ifndef _ISTDNTFY_
#include <istdntfy.hpp>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif

#ifndef _MULTILINEEDIT_
#include "mle.hpp"
#endif

#ifndef _MLECLKH_
#include "mleclkh.hpp"
#endif



#pragma export (MultiLineEdit::selectedTextId)
INotificationId const MultiLineEdit::selectedTextId = "MultiLineEdit::selectedText";

#pragma export (MultiLineEdit::partWindowId)
unsigned long MultiLineEdit::partWindowId = 0;

//------------------------------------------------------------------------------
// MultiLineEdit :: MultiLineEdit
//------------------------------------------------------------------------------
#pragma export (MultiLineEdit::MultiLineEdit(unsigned long, IWindow*, IWindow*, const IRectangle&, const IMultiLineEdit::Style&))
MultiLineEdit::MultiLineEdit(
      unsigned long id,
      IWindow* parent,
      IWindow* owner,
      const IRectangle& framingSpec,
      const IMultiLineEdit::Style& style)
   : IMultiLineEdit(id, parent, owner, framingSpec, style)
{
   partWindowId = (partWindowId) ? partWindowId : id;
   iSelectedTextHandler = new MLEMouseClickHandler();
   iSelectedTextHandler->handleEventsFor(this);
}     //end constructor


//------------------------------------------------------------------------------
// MultiLineEdit :: ~MultiLineEdit
//------------------------------------------------------------------------------
#pragma export (MultiLineEdit::~MultiLineEdit())
MultiLineEdit::~MultiLineEdit()
{
   iSelectedTextHandler->stopHandlingEventsFor(this);
   delete iSelectedTextHandler;
}
