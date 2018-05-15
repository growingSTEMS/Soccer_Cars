#ifndef SOCCER_CARS_FMS_MAIN_MENU_H
#define SOCCER_CARS_FMS_MAIN_MENU_H

#include <memory>

#include <qmainwindow.h>
#include <qtimer.h>

#include "ui_MainMenu.h"

class MainMenu : public QMainWindow
{
  Q_OBJECT

private:
  //member variables
  Ui_MainMenu* ui;
  std::unique_ptr<QTimer> m_tmrMatchTimer;

  //private functions
  void stopMatch();

public:
  //constructors
  MainMenu();
  ~MainMenu();

signals:
  void matchStopped();
  void matchStarted();
  void destroyed();

public slots:
  //void btnMatchSettingsClickHandler();
  //void btnCarSettingsClickHandler();
  //void btnStartStopClickHandler();
  //void btnDiagnosticsClickHandler();

};

#endif