#ifndef EDITTEXTUREDETAILSDIALOG_H
#define EDITTEXTUREDETAILSDIALOG_H

#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDialog>
#include "assets/globalresourcemanager.h"

namespace Ui {
class EditTextureDetailsDialog;
}

class EditTextureDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditTextureDetailsDialog(QVector<QString>& listOfNames,QWidget *parent = 0);
    ~EditTextureDetailsDialog();
    QString getTexturePath();
    QString getTextureName();
    int getTextureX();
    int getTextureY();

private slots:
	void btnLookForResourceClicked();
    void accept();

private:
    Ui::EditTextureDetailsDialog *ui;
    QVector<QString> listOfNames;
};

#endif // EDITTEXTUREDETAILSDIALOG_H
