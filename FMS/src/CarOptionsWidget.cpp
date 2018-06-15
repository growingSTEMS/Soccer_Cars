#include "CarOptionsWidget.h"

extern OutputManager cout;

//private functions
void CarOptionsWidget::makeConnections()
{
  connect(m_ui->btnDownTeam, &QPushButton::clicked, this, &CarOptionsWidget::btnDownTeamClickHandler);
  connect(m_ui->btnIndicate, &QPushButton::clicked, this, &CarOptionsWidget::btnIndicateClickHandler);
  connect(m_ui->btnUpTeam, &QPushButton::clicked, this, &CarOptionsWidget::btnUpTeamClickHandler);
  connect(m_ui->cmbController, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
          this, &CarOptionsWidget::cmbControllerValChangeHandler);
  connect(m_ui->cmbEnabled, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
          this, &CarOptionsWidget::cmbBypassValChangeHandler);
}

//constructors
CarOptionsWidget::CarOptionsWidget(QWidget* parent) :
  QWidget(parent)
{
  m_ui = new Ui_CarOptionsWidget;
  m_ui->setupUi(this);

  //set the text for the buttons that need unicode characters
  m_ui->btnUpTeam->setText(QChar(0x25B2));
  m_ui->btnDownTeam->setText(QChar(0x25BC));

  //setup the controller combobox values

  makeConnections();
}
CarOptionsWidget::~CarOptionsWidget()
{
  if (CmdOptions::verbosity >= CmdOptions::DEBUG_LEVEL::ALL_INFO)
  {
    cout << "INFO: CarOptionsWidget: deconstructing..." << endl;
  } //end  if (CmdOptions::verbosity >= CmdOptions::DEBUG_LEVEL::ALL_INFO)

  delete m_ui;
}

//public slots
void CarOptionsWidget::btnDownTeamClickHandler()
{
}
void CarOptionsWidget::btnUpTeamClickHandler()
{
}
void CarOptionsWidget::btnIndicateClickHandler()
{
}
void CarOptionsWidget::cmbControllerValChangeHandler()
{
}
void CarOptionsWidget::cmbBypassValChangeHandler()
{
}
