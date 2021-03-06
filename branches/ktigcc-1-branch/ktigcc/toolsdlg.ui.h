/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you want to add, delete, or rename functions or slots, use
** Qt Designer to update this file, preserving your code.
**
** You should not define a constructor or destructor in this file.
** Instead, write your code in functions called init() and destroy().
** These will automatically be called by the form's constructor and
** destructor.
*****************************************************************************/

/*
   ktigcc - TIGCC IDE for KDE

   Copyright (C) 2006 Kevin Kofler

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
*/

#include <klistview.h>
#include "ktigcc.h"
#include "toolprops.h"

void ToolsDialog::init()
{
  tempTools=tools;
  listView->clear();
  listView->setSorting(-1);
  Tools::iterator it;
  for(it=tempTools.begin(); it!=tempTools.end(); ++it)
    new KListViewItem(listView,listView->lastItem(),(*it).title,
                      (*it).commandLine,(*it).workingDirectory,
                      (*it).runInTerminal?"Yes":"No");
}

void ToolsDialog::addButton_clicked()
{
  toolIndex=-1;
  ToolProperties toolProperties;
  toolProperties.exec();
  if (toolProperties.result()==QDialog::Accepted) {
    Tool &newTool=tempTools.last();
    new KListViewItem(listView,listView->lastItem(),newTool.title,
                      newTool.commandLine,newTool.workingDirectory,
                      newTool.runInTerminal?"Yes":"No");
  } else listView_selectionChanged(); // set the real toolIndex again
}

void ToolsDialog::editButton_clicked()
{
  ToolProperties toolProperties;
  toolProperties.exec();
  if (toolProperties.result()==QDialog::Accepted) {
    Tool &newTool=tempTools[toolIndex];
    QListViewItem *toolItem=listView->selectedItem();
    toolItem->setText(0,newTool.title);
    toolItem->setText(1,newTool.commandLine);
    toolItem->setText(2,newTool.workingDirectory);
    toolItem->setText(3,newTool.runInTerminal?"Yes":"No");
  }
}

void ToolsDialog::removeButton_clicked()
{
  tempTools.erase(&tempTools[toolIndex]);
  delete listView->selectedItem();
}

void ToolsDialog::listView_selectionChanged()
{
  toolIndex=listView->itemIndex(listView->selectedItem());
  editButton->setEnabled(toolIndex>=0);
  removeButton->setEnabled(toolIndex>=0);
}

void ToolsDialog::accept()
{
  tools=tempTools;
  QDialog::accept();
}
