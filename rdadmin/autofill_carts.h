// autofill_carts.h
//
// Edit a List of Autofill Carts
//
//   (C) Copyright 2002-2019 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef AUTOFILL_CARTS_H
#define AUTOFILL_CARTS_H

#include <qsqldatabase.h>
#include <q3listview.h>

#include <rddialog.h>
#include <rdsvc.h>

class AutofillCarts : public RDDialog
{
 Q_OBJECT
 public:
  AutofillCarts(RDSvc *svc,QWidget *parent=0);
  ~AutofillCarts();
  QSize sizeHint() const;
  QSizePolicy sizePolicy() const;

 private slots:
  void addData();
  void deleteData();
  void okData();
  void cancelData();

 private:
  void RefreshList();
  RDSvc *svc_svc;
  Q3ListView *svc_cart_list;
  QString svc_cart_filter;
  QString svc_cart_group;
};


#endif

