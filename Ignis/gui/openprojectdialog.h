#ifndef OPENPROJECTDIALOG_H
#define OPENPROJECTDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "assets/projectmanager.h"
#include "ui_openprojectdialog.h"

class OpenProjectDialog : public QDialog
{
	Q_OBJECT

public:
	OpenProjectDialog(QWidget *parent = 0);
	~OpenProjectDialog();

private:
	Ui::OpenProjectDialog ui;
	void initProjectList();
private slots:
	void btnLookForProjectPathClicked();
};

#endif // OPENPROJECTDIALOG_H
