/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/

//------------------------ statpop_nils2.hh ----------------------------//
//------------------------ statpop_nils2.hh ----------------------------//
//------------------------ statpop_nils2.hh ----------------------------//

//              header file for the StatpopNils2 class
//                  derived from the SLDialog class
//                       subdirectory statgui


#ifndef _STATPOP_NILS2_HH_
#define _STATPOP_NILS2_HH_

#include "sl/sl_dialog.hh"


class StatpopNils2 : public SLDialog
{

//------------------------ data -------------------------------//
//------------------------ data -------------------------------//
//------------------------ data -------------------------------//

private:

  class StaticManager  *_manager;     // pointer to static manager.
  class StatguiNils2   *_gui;         // editing gui.

//-------------------- functions --------------------------------//
//-------------------- functions --------------------------------//
//-------------------- functions --------------------------------//

public:

  StatpopNils2(SLDelay *slparent, char *name,
                      class StaticManager    *manager,
                      class ContainerList    *clist);
  virtual ~StatpopNils2();

  StaticManager  *manager          ()  const  { return _manager; }
  StatguiNils2   *getStatguiNils2  ()  const  { return _gui; }

private:         // these override SLDialog.

  virtual void    postUnmanageNotify();
  virtual Boolean           okNotify();
  virtual void           applyNotify();
  virtual Boolean       cancelNotify();
  virtual void            undoNotify();

//---------------------- end of functions -----------------------//
//---------------------- end of functions -----------------------//
//---------------------- end of functions -----------------------//

} ;

#endif

//---------------------------- end --------------------------------//
//---------------------------- end --------------------------------//
//---------------------------- end --------------------------------//
