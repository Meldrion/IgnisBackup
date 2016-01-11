#include "newscenedialog.h"
#include "ui_newscenedialog.h"

NewSceneDialog::NewSceneDialog(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::NewSceneDialog();
	ui->setupUi(this);
}

NewSceneDialog::~NewSceneDialog()
{
	delete ui;
}

