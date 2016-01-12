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
#include "component/texturebuilder/texturebuildersubtexture.h"

namespace Ui {
class EditTextureDetailsDialog;
}

class EditTextureDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditTextureDetailsDialog(QVector<QString>& listOfNames,QWidget *parent = 0,TextureBuilderSubTexture* texture = 0);
    ~EditTextureDetailsDialog();
    QString getTexturePath();
    QString getTextureName();
    int getTextureX();
    int getTextureY();

private slots:
	void btnLookForResourceClicked();
    void accept();

private:
	void init(TextureBuilderSubTexture* texture);
    Ui::EditTextureDetailsDialog *ui;
    QVector<QString> listOfNames;
	TextureBuilderSubTexture* linkedTexture;
};

#endif // EDITTEXTUREDETAILSDIALOG_H
