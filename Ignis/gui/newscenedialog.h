#ifndef NEWSCENEDIALOG_H
#define NEWSCENEDIALOG_H

#include <QDialog>
namespace Ui {class NewSceneDialog;};

class NewSceneDialog : public QDialog
{
	Q_OBJECT

public:
	NewSceneDialog(QWidget *parent = 0);
	~NewSceneDialog();

private:
	Ui::NewSceneDialog *ui;
};

#endif // NEWSCENEDIALOG_H
