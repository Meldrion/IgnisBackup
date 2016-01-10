#ifndef OPENPROJECTDIALOG_H
#define OPENPROJECTDIALOG_H

#include <QDialog>
#include "ui_openprojectdialog.h"

class OpenProjectDialog : public QDialog
{
	Q_OBJECT

public:
	OpenProjectDialog(QWidget *parent = 0);
	~OpenProjectDialog();

private:
	Ui::OpenProjectDialog ui;
};

#endif // OPENPROJECTDIALOG_H
