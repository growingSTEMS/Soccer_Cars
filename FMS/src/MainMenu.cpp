#include "MainMenu.h"

//private functions
void stopMatch(bool hasWinner)
{
}
void startMatch()
{
}

//constructors
MainMenu::MainMenu()
{
  ui = new Ui_MainMenu();
  ui->setupUi(this);
}
MainMenu::~MainMenu()
{
  delete ui;
}

//public functions

//public slots
void MainMenu::btnMatchSettingsClickHandler()
{
}
void MainMenu::btnCarSettingsClickHandler()
{
}
void MainMenu::btnStartStopClickHandler()
{
}
void MainMenu::btnDiagnosticsClickHandler()
{
}
void MainMenu::tmrMatchTimerTimeoutHandler()
{
}
void MainMenu::tmrSecondTimerTimeoutHandler()
{
}
