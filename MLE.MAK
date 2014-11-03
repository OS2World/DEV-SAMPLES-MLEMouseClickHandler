#*******************************************************************************
# FILE NAME: mle.mak                                                           *
#                                                                              *
# DESCRIPTION:                                                                 *
#   Make file for class:                                                       *
#     MultiLineEdit - IMultiLineEdit with selectedText notification support    *
#******************************************************************************/
PARTCPPFLAGS=-Ftmle -Ge- -Gm+ -Tdp -Gd+ -I.

all:   MultiLineEdit

MultiLineEdit:   mle.dll

mle.dll:   mle.obj mleclkh.obj
          icc $(PARTCPPFLAGS) /B" /pmtype:pm" \
             mle.obj mleclkh.obj \
             /Femle.dll /Fmmle.map \
             os2386.lib \
             mle.def

         implib mle.lib mle.dll

mle.obj:     mle.cpp {$(INCLUDE)}mle.hpp {$(INCLUDE)}mleclkh.hpp
          ICC -c $(PARTCPPFLAGS) mle.cpp

mleclkh.obj: mleclkh.cpp {$(INCLUDE)}mleclkh.hpp {$(INCLUDE)}mle.hpp
          ICC -c $(PARTCPPFLAGS) mleclkh.cpp

