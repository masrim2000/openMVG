// This file is part of OpenMVG, an Open Multiple View Geometry C++ library.

// Copyright (c) 2015 Pierre MOULON.

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <QApplication>
#include "MainWindow.hpp"
#include "third_party/cmdLine/cmdLine.h"

#include <QFileDialog>
#include <QGridLayout>
#include <QMenuBar>
#include <QDebug>
#include <QMenu>
#include <QMessageBox>
#include <QSplitter>
#include <QStatusBar>
#include <QtGui>
#include <QWidget>


int main(int argc, char ** argv)
{

CmdLine cmd;

  std::string
    sSfM_Data_Filename_In,
    sOutputPLY_Out;

  
  cmd.add(make_option('i', sSfM_Data_Filename_In, "input_file"));
  cmd.add(make_option('o', sOutputPLY_Out, "output_file"));

  std::cout << sSfM_Data_Filename_In;

  QApplication app(argc, argv);

  MainWindow * mainWindow = new MainWindow(0,sSfM_Data_Filename_In);
  mainWindow->show();

  return app.exec();
}
