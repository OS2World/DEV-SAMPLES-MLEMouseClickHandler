
COPYRIGHT:
----------
Copyright (C) International Business Machines Corp., 1991,1995.

DISCLAIMER OF WARRANTIES:
-------------------------
The following [enclosed] code is sample code created by IBM
Corporation.  This sample code is not part of any standard IBM product
and is provided to you solely for the purpose of assisting you in the
development of your applications.  The code is provided "AS IS",
without warranty of any kind.  IBM shall not be liable for any damages
arising out of your use of the sample code, even if they have been
advised of the possibility of such damages.


This sample package (mle.zip) file contains the following files:

==========================================================================
   MLECLKH.CPP  source code for the class MLEMouseClickHandler
   MLECLKH.HPP  header file for the class MLEMouseClickHandler
   MLE.CPP      source code for the class MultiLineEdit
   MLE.HPP      header file for the class MultiLineEdit
   MLE.DEF      def file used for building MLE.DLL
   MLE.DLL      dynamic link library for the classes MultiLineEdit
                and MLEMouseClickHandler
   MLE.LIB      import lib for the classes MultiLineEdit and
                MLEMouseClickHandler
   MLE.MAK      make file use to build the MLE.DLL and MLE.LIB
                (NOTE: you can build/package it however way you want)
   MLE.VBB      contains the TestMLE part and the imported MultiLineEdit part
   MLE.VBE      import file for the MultiLineEdit part
   README.TXT   this file
   TESTMLE.EXE  application to test the MultiLineEdit user primitive


Class Descriptions:
==========================================================================
   MultiLineEdit           MLE user primitive.  This class overrides
                           the selectedText, selectedTextLength, and
                           hasSelectedText attributes of IMultiLineEdit
                           to support selectedTextId as an attribute event.
   MLEMouseClickHandler    handler that's used by MultiLineEdit to
                           notify when mouse button 1 has been released
   TestMLE                 visual part used to test the MultiLineEdit
                           user primitive


Instructions for using the MultiLineEdit part:
==========================================================================
   1. Load MLE.VBB
   2. To use (add and drop) the MultiLineEdit part, select
      Options->Add part from the menu bar of the Composition
      Editor.  When you drop the part, it will appear as a
      small grey box (NOTE: it will appear fine at runtime).
   3. You can resize and open the settings for the MultiLineEdit
      part just as you do the IMultiLineEdit part that appears
      on the Parts Palette.

   If you want to see a part that uses it, open the part TestMLE
   in MLE.VBB.  To execute the app for this part, run TESTMLE.EXE.


==========================================================================
NOTE: the MultiLineEdit user primitive part only supports notification
      for mouse selection.  If you're interested in supporting
      notification for keyboard selection, subclass IKeyboardHandler
      as well.


