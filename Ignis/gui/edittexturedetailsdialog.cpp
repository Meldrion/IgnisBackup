#include "edittexturedetailsdialog.h"
#include "ui_edittexturedetailsdialog.h"

EditTextureDetailsDialog::EditTextureDetailsDialog(QVector<QString>& listOfNames,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTextureDetailsDialog)
{
    ui->setupUi(this);
    this->listOfNames = listOfNames;


    this->ui->cbResourceType->addItem(Ignis::GlobalResourceManager::ANIMATION_TYPE);
    this->ui->cbResourceType->addItem(Ignis::GlobalResourceManager::CHARACTER_TYPE);
    this->ui->cbResourceType->addItem(Ignis::GlobalResourceManager::TILESET_TYPE);
    this->ui->cbResourceType->addItem(Ignis::GlobalResourceManager::TERRAIN_TYPE);

}

EditTextureDetailsDialog::~EditTextureDetailsDialog()
{
    delete ui;
}

void EditTextureDetailsDialog::on_toolButton_clicked()
{
    // Get the Desktop folder
    QString homeFolderPath = QDir::homePath();
    QString filename = QFileDialog::getOpenFileName(this,
                tr("Open Image"), homeFolderPath,
                tr("Image Files (*.png *.jpg *.bmp)"));
    this->ui->edtTexturePath->setText(filename);

    QFileInfo fileInfo(filename);
    this->ui->edtTextureName->setText(fileInfo.baseName());
}

void EditTextureDetailsDialog::accept()
{
    QString path = this->ui->edtTexturePath->text();
    QString name = this->ui->edtTextureName->text();

    QFile file(path);
    if (file.exists() && !name.isEmpty())
    {
        if (!this->listOfNames.contains(name))
            QDialog::accept();
        else
        {
            // Output error
            QMessageBox::warning(this, tr("Ignis Editor"),
                                           tr("Texture name allready included"),
                                           QMessageBox::Ok);
        }
    }
        else
    {
        // Output error
        QMessageBox::warning(this, tr("Ignis Editor"),
                                       tr("Texture Path or Texture name not valid"),
                                       QMessageBox::Ok);
    }
}

QString EditTextureDetailsDialog::getTexturePath()
{
    return this->ui->edtTexturePath->text();
}

QString EditTextureDetailsDialog::getTextureName()
{
    return this->ui->edtTextureName->text();
}

int EditTextureDetailsDialog::getTextureX()
{
    return this->ui->spTextureX->value();
}

int EditTextureDetailsDialog::getTextureY()
{
    return this->ui->spTextureY->value();
}
