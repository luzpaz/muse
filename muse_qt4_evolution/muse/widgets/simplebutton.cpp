//=============================================================================
//  MusE
//  Linux Music Editor
//  $Id:$
//
//  Copyright (C) 2002-2006 by Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#include "simplebutton.h"
#include "gui.h"

//---------------------------------------------------------
//   SimpleButton
//---------------------------------------------------------

SimpleButton::SimpleButton(const QString& on, const QString& off, QWidget* parent)
   : QToolButton(parent)
      {
      setAutoRaise(true);
      QIcon icon;
      icon.addFile(on, ICON_SIZE, QIcon::Normal, QIcon::On);
      icon.addFile(off, ICON_SIZE, QIcon::Normal, QIcon::Off);
      QAction* a = new QAction(this);
      a->setIcon(icon);
      setDefaultAction(a);
      }

//---------------------------------------------------------
//   SimpleButton
//---------------------------------------------------------

SimpleButton::SimpleButton(QPixmap* on, QPixmap* off, QWidget* parent)
   : QToolButton(parent)
      {
      setAutoRaise(true);
      QIcon icon(*off);
      icon.addPixmap(*on, QIcon::Normal, QIcon::On);
      QAction* a = new QAction(this);
      a->setIcon(icon);
      setDefaultAction(a);
      }

//---------------------------------------------------------
//   SimpleButton
//---------------------------------------------------------

SimpleButton::SimpleButton(const QString& s, QWidget* parent)
   : QToolButton(parent)
      {
      setAutoRaise(false);
      setText(s);
      }
